/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing
**
** This file is part of the Qt Build Suite.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms and
** conditions see http://www.qt.io/terms-conditions. For further information
** use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file.  Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, The Qt Company gives you certain additional
** rights.  These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
****************************************************************************/

var Environment = loadExtension("qbs.Environment");
var File = loadExtension("qbs.File");
var FileInfo = loadExtension("qbs.FileInfo");
var Process = loadExtension("qbs.Process");
var TemporaryDir = loadExtension("qbs.TemporaryDir");

function artifactInstalledFilePath(artifact, product) {
    var relativeInstallDir = artifact.moduleProperty("qbs", "installDir");
    var installPrefix = artifact.moduleProperty("qbs", "installPrefix");
    var installSourceBase = artifact.moduleProperty("qbs", "installSourceBase");
    var targetDir = FileInfo.joinPaths(artifact.moduleProperty("qbs", "installRoot"),
                                       installPrefix, relativeInstallDir);
    if (installSourceBase) {
        if (!FileInfo.isAbsolutePath(installSourceBase))
            throw "installSourceBase is not an absolute path";
        if (!artifact.filePath.startsWith(installSourceBase))
            throw "artifact file path doesn't start with the value of qbs.installSourceBase";
        return FileInfo.joinPaths(targetDir, artifact.filePath.substr(installSourceBase.length + 1));
    }
    return FileInfo.joinPaths(targetDir, artifact.fileName);
}

/**
  * Given a list of file tags, returns the file tag (one of [c, cpp, objc, objcpp])
  * corresponding to the C-family language the file should be compiled as.
  *
  * If no such tag is found, undefined is returned. If more than one match is
  * found, an exception is thrown.
  */
function fileTagForTargetLanguage(fileTags) {
    var srcTags = ["c", "cpp", "objc", "objcpp", "asm", "asm_cpp"];
    var pchTags = ["c_pch", "cpp_pch", "objc_pch", "objcpp_pch"];

    var canonicalTag = undefined;
    var foundTagCount = 0;
    for (var i = 0; i < fileTags.length; ++i) {
        var idx = srcTags.indexOf(fileTags[i]);
        if (idx === -1)
            idx = pchTags.indexOf(fileTags[i]);

        if (idx !== -1) {
            canonicalTag = srcTags[idx];
            if (++foundTagCount > 1)
                break;
        }
    }

    if (foundTagCount > 1)
        throw ("source files cannot be identified as more than one language");

    return foundTagCount == 1 ? canonicalTag : undefined;
}

/**
  * Returns the name of a language-specific property given the file tag
  * for that property, and the base property name.
  *
  * If \a fileTag is undefined, the language-agnostic property name is returned.
  *
  * @param propertyName flags, platformFlags, precompiledHeader
  * @param fileTag c, cpp, objc, objcpp
  */
function languagePropertyName(propertyName, fileTag) {
    if (!fileTag)
        fileTag = "common";

    var asm = {
        "flags": "assemblerFlags",
        "platformFlags": "platformAssemblerFlags"
    };

    var map = {
        "c": {
            "flags": "cFlags",
            "platformFlags": "platformCFlags",
            "precompiledHeader": "cPrecompiledHeader", // TODO: Remove in 1.6
            "usePrecompiledHeader": "useCPrecompiledHeader"
        },
        "cpp": {
            "flags": "cxxFlags",
            "platformFlags": "platformCxxFlags",
            "precompiledHeader": "cxxPrecompiledHeader", // TODO: Remove in 1.6
            "usePrecompiledHeader": "useCxxPrecompiledHeader"
        },
        "objc": {
            "flags": "objcFlags",
            "platformFlags": "platformObjcFlags",
            "precompiledHeader": "objcPrecompiledHeader", // TODO: Remove in 1.6
            "usePrecompiledHeader": "useObjcPrecompiledHeader"
        },
        "objcpp": {
            "flags": "objcxxFlags",
            "platformFlags": "platformObjcxxFlags",
            "precompiledHeader": "objcxxPrecompiledHeader", // TODO: Remove in 1.6
            "usePrecompiledHeader": "useObjcxxPrecompiledHeader"
        },
        "common": {
            "flags": "commonCompilerFlags",
            "platformFlags": "platformCommonCompilerFlags",
            "precompiledHeader": "precompiledHeader" // TODO: Remove in 1.6
        },
        "asm": asm,
        "asm_cpp": asm
    };

    var lang = map[fileTag];
    if (!lang)
        return propertyName;

    return lang[propertyName] || propertyName;
}

function moduleProperties(config, key, langFilter) {
    return config.moduleProperties(config.moduleName, languagePropertyName(key, langFilter))
}

function modulePropertiesFromArtifacts(product, artifacts, moduleName, propertyName, langFilter) {
    var result = product.moduleProperties(moduleName, languagePropertyName(propertyName, langFilter))
    for (var i in artifacts)
        result = result.concat(artifacts[i].moduleProperties(moduleName, languagePropertyName(propertyName, langFilter)))
    return result
}

function moduleProperty(product, propertyName, langFilter) {
    return product.moduleProperty(product.moduleName, languagePropertyName(propertyName, langFilter))
}

/**
  * Returns roughly the same value as moduleProperty for a product, but ensures that all of the
  * given input artifacts share the same value of said property, as a sort of sanity check.
  *
  * This allows us to verify that users do not, for example, try to set different values on input
  * artifacts for which the value is input specific (not product specific), but which must be the
  * same for all inputs.
  */
function modulePropertyFromArtifacts(product, artifacts, moduleName, propertyName, langFilter) {
    var values = [product.moduleProperty(moduleName, languagePropertyName(propertyName, langFilter))];
    for (var i in artifacts) {
        var value = artifacts[i].moduleProperty(moduleName, languagePropertyName(propertyName, langFilter));
        if (!values.contains(value)) {
            values.push(value);
        }
    }

    if (values.length !== 1) {
        throw "The value of " + [moduleName, propertyName].join(".")
                + " must be identical for the following input artifacts: "
                + artifacts.map(function (artifact) { return artifact.filePath; });
    }

    return values[0];
}

function dumpProperty(key, value, level) {
    var indent = "";
    for (var k = 0; k < level; ++k)
        indent += "  ";
    console.info(indent + key + ": " + value);
}

function traverseObject(obj, func, level) {
    if (!level)
        level = 0;
    var i, children = {};
    for (i in obj) {
        if (typeof(obj[i]) === "object" && !(obj[i] instanceof Array))
            children[i] = obj[i];
        else
            func.apply(this, [i, obj[i], level]);
    }
    level++;
    for (i in children) {
        func.apply(this, [i, children[i], level - 1]);
        traverseObject(children[i], func, level);
    }
    level--;
}

function dumpObject(obj, description) {
    if (!description)
        description = "object dump";
    console.info("+++++++++ " + description + " +++++++++");
    traverseObject(obj, dumpProperty);
}

function concatAll() {
    var result = [];
    for (var i = 0; i < arguments.length; ++i) {
        var arg = arguments[i];
        if (arg === undefined)
            continue;
        else if (arg instanceof Array)
            result = result.concat(arg);
        else
            result.push(arg);
    }
    return result;
}

function allFileTags(fileTaggers) {
    var tags = [];
    for (var ext in fileTaggers)
        tags = tags.uniqueConcat(fileTaggers[ext]);
    return tags;
}

/**
  * Flattens an environment dictionary (string keys to arrays or strings)
  * into a string list containing items like \c key=value1:value2:value3
  */
function flattenEnvironmentDictionary(dict, pathListSeparator) {
    var list = [];
    for (var i in dict)
        list.push(i + "=" + dict[i]);
    return list;
}

var EnvironmentVariable = (function () {
    function EnvironmentVariable(name, separator, convertPathSeparators) {
        if (!name)
            throw "EnvironmentVariable c'tor needs a name as first argument.";
        this.name = name;
        this.value = Environment.getEnv(name) || "";
        this.separator = separator || "";
        this.convertPathSeparators = convertPathSeparators || false;
    }
    EnvironmentVariable.prototype.prepend = function (v) {
        if (this.value.length > 0 && this.value.charAt(0) !== this.separator)
            this.value = this.separator + this.value;
        if (this.convertPathSeparators)
            v = FileInfo.toWindowsSeparators(v);
        this.value = v + this.value;
    };

    EnvironmentVariable.prototype.append = function (v) {
        if (this.value.length > 0)
            this.value += this.separator;
        if (this.convertPathSeparators)
            v = FileInfo.toWindowsSeparators(v);
        this.value += v;
    };

    EnvironmentVariable.prototype.set = function () {
        Environment.putEnv(this.name, this.value);
    };

    EnvironmentVariable.prototype.unset = function () {
        Environment.unsetEnv(this.name);
    };

    return EnvironmentVariable;
})();

var PropertyValidator = (function () {
    function PropertyValidator(moduleName) {
        this.requiredProperties = {};
        this.propertyValidators = [];
        if (!moduleName)
            throw "PropertyValidator c'tor needs a module name as a first argument.";
        this.moduleName = moduleName;
    }
    PropertyValidator.prototype.setRequiredProperty = function (propertyName, propertyValue, message) {
        this.requiredProperties[propertyName] = { propertyValue: propertyValue, message: message };
    };

    PropertyValidator.prototype.addRangeValidator = function (propertyName, propertyValue, min, max, allowFloats) {
        var message = [];
        if (min !== undefined)
            message.push(">= " + min);
        if (max !== undefined)
            message.push("<= " + max);

        this.addCustomValidator(propertyName, propertyValue, function (value) {
            if (typeof value !== "number")
                return false;
            if (!allowFloats && value % 1 !== 0)
                return false;
            if (min !== undefined && value < min)
                return false;
            if (max !== undefined && value > max)
                return false;
            return true;
        }, "must be " + (!allowFloats ? "an integer " : "") + message.join(" and "));
    };

    PropertyValidator.prototype.addVersionValidator = function (propertyName, propertyValue, minComponents, maxComponents, allowSuffixes) {
        if (minComponents !== undefined && (typeof minComponents !== "number" || minComponents % 1 !== 0 || minComponents < 1))
            throw "minComponents must be at least 1";
        if (maxComponents !== undefined && (typeof maxComponents !== "number" || maxComponents % 1 !== 0 || maxComponents < minComponents))
            throw "maxComponents must be >= minComponents";

        this.addCustomValidator(propertyName, propertyValue, function (value) {
            if (typeof value !== "string")
                return false;
            return value && value.match("^[0-9]+(\\.[0-9]+){" + ((minComponents - 1) || 0) + "," + ((maxComponents - 1) || "") + "}" + (!allowSuffixes ? "$" : "")) !== null;
        }, "must be a version number with " + minComponents + " to " + maxComponents + " components");
    };

    PropertyValidator.prototype.addCustomValidator = function (propertyName, propertyValue, validator, message) {
        this.propertyValidators.push({
            propertyName: propertyName,
            propertyValue: propertyValue,
            validator: validator,
            message: message
        });
    };

    PropertyValidator.prototype.validate = function (throwOnError) {
        var i;
        var lines;

        // Find any missing properties
        var missingProperties = {};
        for (i in this.requiredProperties) {
            var propValue = this.requiredProperties[i].propertyValue;
            if (propValue === undefined || propValue === null || propValue === "") {
                missingProperties[i] = this.requiredProperties[i];
            }
        }

        // Find any properties that don't satisfy their validator function
        var invalidProperties = {};
        for (var j = 0; j < this.propertyValidators.length; ++j) {
            var v = this.propertyValidators[j];
            if (!v.validator(v.propertyValue)) {
                var messages = invalidProperties[v.propertyName] || [];
                messages.push(v.message);
                invalidProperties[v.propertyName] = messages;
            }
        }

        var errorMessage = "";
        if (Object.keys(missingProperties).length > 0) {
            errorMessage += "The following properties are not set. Set them in your profile or product:\n";
            lines = [];
            for (i in missingProperties) {
                var obj = missingProperties[i];
                lines.push(this.moduleName + "." + i + ((obj && obj.message) ? (": " + obj.message) : ""));
            }
            errorMessage += lines.join("\n");
        }

        if (Object.keys(invalidProperties).length > 0) {
            if (errorMessage)
                errorMessage += "\n";
            errorMessage += "The following properties have invalid values:\n";
            lines = [];
            for (i in invalidProperties) {
                for (j in invalidProperties[i]) {
                    lines.push(this.moduleName + "." + i + ": " + invalidProperties[i][j]);
                }
            }
            errorMessage += lines.join("\n");
        }

        if (throwOnError !== false && errorMessage.length > 0)
            throw errorMessage;

        return errorMessage.length == 0;
    };
    return PropertyValidator;
})();

var BlackboxOutputArtifactTracker = (function () {
    function BlackboxOutputArtifactTracker() {
    }
    BlackboxOutputArtifactTracker.prototype.artifacts = function (outputDirectory) {
        var process;
        var fakeOutputDirectory;
        try {
            fakeOutputDirectory = new TemporaryDir();
            if (!fakeOutputDirectory.isValid())
                throw "could not create temporary directory";
            process = new Process();
            if (this.commandEnvironmentFunction) {
                var env = this.commandEnvironmentFunction(fakeOutputDirectory.path());
                for (var key in env)
                    process.setEnv(key, env[key]);
            }
            process.exec(this.command, this.commandArgsFunction(fakeOutputDirectory.path()), true);
            var artifacts = [];
            if (this.fileTaggers) {
                var files = this.findFiles(fakeOutputDirectory.path());
                for (var i = 0; i < files.length; ++i)
                    artifacts.push(this.createArtifact(fakeOutputDirectory.path(), files[i]));
            }
            if (this.processStdOutFunction)
                artifacts = artifacts.concat(this.processStdOutFunction(process.readStdOut()));
            artifacts = this.fixArtifactPaths(artifacts, outputDirectory, fakeOutputDirectory.path());
            return artifacts;
        }
        finally {
            if (process)
                process.close();
            if (fakeOutputDirectory)
                fakeOutputDirectory.remove();
        }
    };
    BlackboxOutputArtifactTracker.prototype.createArtifact = function (root, filePath) {
        for (var ext in this.fileTaggers) {
            if (filePath.endsWith(ext)) {
                return {
                    filePath: filePath,
                    fileTags: this.fileTaggers[ext]
                };
            }
        }
        if (!this.defaultFileTags) {
            var relFilePath = (filePath.startsWith(root + '/') || filePath.startsWith(root + '\\'))
                    ? filePath.substring(root.length + 1)
                    : filePath;
            throw "BlackboxOutputArtifactTracker: no matching file taggers for path '"
                    + relFilePath + "'. Set defaultFileTags to an array of file tags to "
                    + "apply to files not tagged by the fileTaggers map, which was:\n"
                    + JSON.stringify(this.fileTaggers, undefined, 4);
        }
        return {
            filePath: filePath,
            fileTags: this.defaultFileTags
        };
    };
    // TODO: Use File.directoryEntries
    BlackboxOutputArtifactTracker.prototype.findFiles = function (dir) {
        var proc;
        try {
            proc = new Process();
            if (this.hostOS && this.hostOS.contains("windows"))
                proc.exec(this.shellPath, ["/C", "dir", FileInfo.toWindowsSeparators(dir),
                                           "/B", "/S", "/A:-D"], true);
            else
                proc.exec("find", [dir, "-type", "f"], true);
            return proc.readStdOut().trim().split(/\r?\n/).map(
                        function(p) { return FileInfo.fromWindowsSeparators(p); });
        }
        finally {
            if (proc)
                proc.close();
        }
    };
    BlackboxOutputArtifactTracker.prototype.fixArtifactPaths = function (artifacts, realBasePath, fakeBasePath) {
        for (var i = 0; i < artifacts.length; ++i)
            artifacts[i].filePath = realBasePath
                + artifacts[i].filePath.substr(fakeBasePath.length);
        return artifacts;
    };
    return BlackboxOutputArtifactTracker;
})();