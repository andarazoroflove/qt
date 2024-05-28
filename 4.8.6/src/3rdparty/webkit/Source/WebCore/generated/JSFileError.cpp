/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

#include "JSFileError.h"

#include "FileError.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSFileError);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSFileErrorTableValues[3] =
{
    { "code", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorCode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSFileErrorTable = { 5, 3, JSFileErrorTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSFileErrorConstructorTableValues[13] =
{
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNOT_FOUND_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SECURITY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorSECURITY_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorABORT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOT_READABLE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNOT_READABLE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ENCODING_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorENCODING_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NO_MODIFICATION_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNO_MODIFICATION_ALLOWED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_STATE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorINVALID_STATE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorSYNTAX_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_MODIFICATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorINVALID_MODIFICATION_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "QUOTA_EXCEEDED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorQUOTA_EXCEEDED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TYPE_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorTYPE_MISMATCH_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "PATH_EXISTS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorPATH_EXISTS_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSFileErrorConstructorTable = { 34, 31, JSFileErrorConstructorTableValues, 0 };

COMPILE_ASSERT(1 == FileError::NOT_FOUND_ERR, FileErrorEnumNOT_FOUND_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == FileError::SECURITY_ERR, FileErrorEnumSECURITY_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == FileError::ABORT_ERR, FileErrorEnumABORT_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == FileError::NOT_READABLE_ERR, FileErrorEnumNOT_READABLE_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == FileError::ENCODING_ERR, FileErrorEnumENCODING_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == FileError::NO_MODIFICATION_ALLOWED_ERR, FileErrorEnumNO_MODIFICATION_ALLOWED_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(7 == FileError::INVALID_STATE_ERR, FileErrorEnumINVALID_STATE_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == FileError::SYNTAX_ERR, FileErrorEnumSYNTAX_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == FileError::INVALID_MODIFICATION_ERR, FileErrorEnumINVALID_MODIFICATION_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(10 == FileError::QUOTA_EXCEEDED_ERR, FileErrorEnumQUOTA_EXCEEDED_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(11 == FileError::TYPE_MISMATCH_ERR, FileErrorEnumTYPE_MISMATCH_ERRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(12 == FileError::PATH_EXISTS_ERR, FileErrorEnumPATH_EXISTS_ERRIsWrongUseDontCheckEnums);

class JSFileErrorConstructor : public DOMConstructorObject {
public:
    JSFileErrorConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSFileErrorConstructor::s_info = { "FileErrorConstructor", &DOMConstructorObject::s_info, &JSFileErrorConstructorTable, 0 };

JSFileErrorConstructor::JSFileErrorConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSFileErrorPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSFileErrorConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFileErrorConstructor, JSDOMWrapper>(exec, &JSFileErrorConstructorTable, this, propertyName, slot);
}

bool JSFileErrorConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFileErrorConstructor, JSDOMWrapper>(exec, &JSFileErrorConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSFileErrorPrototypeTableValues[13] =
{
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNOT_FOUND_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SECURITY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorSECURITY_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorABORT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOT_READABLE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNOT_READABLE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ENCODING_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorENCODING_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NO_MODIFICATION_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorNO_MODIFICATION_ALLOWED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_STATE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorINVALID_STATE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SYNTAX_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorSYNTAX_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_MODIFICATION_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorINVALID_MODIFICATION_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "QUOTA_EXCEEDED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorQUOTA_EXCEEDED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TYPE_MISMATCH_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorTYPE_MISMATCH_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "PATH_EXISTS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsFileErrorPATH_EXISTS_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSFileErrorPrototypeTable = { 34, 31, JSFileErrorPrototypeTableValues, 0 };
static const HashTable* getJSFileErrorPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSFileErrorPrototypeTable);
}

const ClassInfo JSFileErrorPrototype::s_info = { "FileErrorPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSFileErrorPrototypeTable };

JSObject* JSFileErrorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSFileError>(exec, globalObject);
}

bool JSFileErrorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFileErrorPrototype, JSObject>(exec, getJSFileErrorPrototypeTable(exec), this, propertyName, slot);
}

bool JSFileErrorPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFileErrorPrototype, JSObject>(exec, getJSFileErrorPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSFileErrorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSFileErrorTable);
}

const ClassInfo JSFileError::s_info = { "FileError", &JSDOMWrapper::s_info, 0, getJSFileErrorTable };

JSFileError::JSFileError(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<FileError> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSFileError::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSFileErrorPrototype(exec->globalData(), globalObject, JSFileErrorPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSFileError::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSFileError, Base>(exec, getJSFileErrorTable(exec), this, propertyName, slot);
}

bool JSFileError::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSFileError, Base>(exec, getJSFileErrorTable(exec), this, propertyName, descriptor);
}

JSValue jsFileErrorCode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSFileError* castedThis = static_cast<JSFileError*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FileError* imp = static_cast<FileError*>(castedThis->impl());
    JSValue result = jsNumber(imp->code());
    return result;
}


JSValue jsFileErrorConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSFileError* domObject = static_cast<JSFileError*>(asObject(slotBase));
    return JSFileError::getConstructor(exec, domObject->globalObject());
}

JSValue JSFileError::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSFileErrorConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsFileErrorNOT_FOUND_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsFileErrorSECURITY_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsFileErrorABORT_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsFileErrorNOT_READABLE_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsFileErrorENCODING_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsFileErrorNO_MODIFICATION_ALLOWED_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsFileErrorINVALID_STATE_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsFileErrorSYNTAX_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsFileErrorINVALID_MODIFICATION_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsFileErrorQUOTA_EXCEEDED_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsFileErrorTYPE_MISMATCH_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(11));
}

JSValue jsFileErrorPATH_EXISTS_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(12));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, FileError* impl)
{
    return wrap<JSFileError>(exec, globalObject, impl);
}

FileError* toFileError(JSC::JSValue value)
{
    return value.inherits(&JSFileError::s_info) ? static_cast<JSFileError*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(BLOB) || ENABLE(FILE_SYSTEM)
