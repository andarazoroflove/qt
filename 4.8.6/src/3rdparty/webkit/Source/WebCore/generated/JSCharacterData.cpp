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
#include "JSCharacterData.h"

#include "CharacterData.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCharacterData);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCharacterDataTableValues[4] =
{
    { "data", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCharacterDataData), (intptr_t)setJSCharacterDataData THUNK_GENERATOR(0) },
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCharacterDataLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCharacterDataConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCharacterDataTable = { 9, 7, JSCharacterDataTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCharacterDataConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCharacterDataConstructorTable = { 1, 0, JSCharacterDataConstructorTableValues, 0 };
class JSCharacterDataConstructor : public DOMConstructorObject {
public:
    JSCharacterDataConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSCharacterDataConstructor::s_info = { "CharacterDataConstructor", &DOMConstructorObject::s_info, &JSCharacterDataConstructorTable, 0 };

JSCharacterDataConstructor::JSCharacterDataConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSCharacterDataPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCharacterDataConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCharacterDataConstructor, JSDOMWrapper>(exec, &JSCharacterDataConstructorTable, this, propertyName, slot);
}

bool JSCharacterDataConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCharacterDataConstructor, JSDOMWrapper>(exec, &JSCharacterDataConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCharacterDataPrototypeTableValues[6] =
{
    { "substringData", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionSubstringData), (intptr_t)2 THUNK_GENERATOR(0) },
    { "appendData", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionAppendData), (intptr_t)1 THUNK_GENERATOR(0) },
    { "insertData", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionInsertData), (intptr_t)2 THUNK_GENERATOR(0) },
    { "deleteData", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionDeleteData), (intptr_t)2 THUNK_GENERATOR(0) },
    { "replaceData", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionReplaceData), (intptr_t)3 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCharacterDataPrototypeTable = { 16, 15, JSCharacterDataPrototypeTableValues, 0 };
const ClassInfo JSCharacterDataPrototype::s_info = { "CharacterDataPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCharacterDataPrototypeTable, 0 };

JSObject* JSCharacterDataPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCharacterData>(exec, globalObject);
}

bool JSCharacterDataPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSCharacterDataPrototypeTable, this, propertyName, slot);
}

bool JSCharacterDataPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSCharacterDataPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSCharacterData::s_info = { "CharacterData", &JSNode::s_info, &JSCharacterDataTable, 0 };

JSCharacterData::JSCharacterData(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CharacterData> impl)
    : JSNode(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSCharacterData::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCharacterDataPrototype(exec->globalData(), globalObject, JSCharacterDataPrototype::createStructure(exec->globalData(), JSNodePrototype::self(exec, globalObject)));
}

bool JSCharacterData::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCharacterData, Base>(exec, &JSCharacterDataTable, this, propertyName, slot);
}

bool JSCharacterData::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCharacterData, Base>(exec, &JSCharacterDataTable, this, propertyName, descriptor);
}

JSValue jsCharacterDataData(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCharacterData* castedThis = static_cast<JSCharacterData*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CharacterData* imp = static_cast<CharacterData*>(castedThis->impl());
    JSValue result = jsString(exec, imp->data());
    return result;
}


JSValue jsCharacterDataLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCharacterData* castedThis = static_cast<JSCharacterData*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CharacterData* imp = static_cast<CharacterData*>(castedThis->impl());
    JSValue result = jsNumber(imp->length());
    return result;
}


JSValue jsCharacterDataConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCharacterData* domObject = static_cast<JSCharacterData*>(asObject(slotBase));
    return JSCharacterData::getConstructor(exec, domObject->globalObject());
}

void JSCharacterData::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSCharacterData, Base>(exec, propertyName, value, &JSCharacterDataTable, this, slot);
}

void setJSCharacterDataData(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSCharacterData* castedThis = static_cast<JSCharacterData*>(thisObject);
    CharacterData* imp = static_cast<CharacterData*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setData(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}


JSValue JSCharacterData::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCharacterDataConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionSubstringData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCharacterData::s_info))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(exec->argument(1).toUInt32(exec));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsStringOrNull(exec, imp->substringData(offset, length, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionAppendData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCharacterData::s_info))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& data(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->appendData(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionInsertData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCharacterData::s_info))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& data(ustringToString(exec->argument(1).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->insertData(offset, data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionDeleteData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCharacterData::s_info))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(exec->argument(1).toUInt32(exec));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->deleteData(offset, length, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionReplaceData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSCharacterData::s_info))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = static_cast<JSCharacterData*>(asObject(thisValue));
    CharacterData* imp = static_cast<CharacterData*>(castedThis->impl());
    ExceptionCode ec = 0;
    int offset(exec->argument(0).toUInt32(exec));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(exec->argument(1).toUInt32(exec));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& data(ustringToString(exec->argument(2).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->replaceData(offset, length, data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}


}
