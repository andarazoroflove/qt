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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBDatabaseException.h"

#include "ExceptionCode.h"
#include "IDBDatabaseException.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSIDBDatabaseException);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBDatabaseExceptionTableValues[5] =
{
    { "code", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionCode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "message", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionMessage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBDatabaseExceptionTable = { 10, 7, JSIDBDatabaseExceptionTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBDatabaseExceptionConstructorTableValues[15] =
{
    { "NO_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionNO_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "UNKNOWN_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionUNKNOWN_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NON_TRANSIENT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionNON_TRANSIENT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionNOT_FOUND_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CONSTRAINT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionCONSTRAINT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DATA_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionDATA_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOT_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionNOT_ALLOWED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SERIAL_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionSERIAL_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "RECOVERABLE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionRECOVERABLE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TRANSIENT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionTRANSIENT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TIMEOUT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionTIMEOUT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DEADLOCK_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionDEADLOCK_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "READ_ONLY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionREAD_ONLY_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionABORT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBDatabaseExceptionConstructorTable = { 34, 31, JSIDBDatabaseExceptionConstructorTableValues, 0 };
class JSIDBDatabaseExceptionConstructor : public DOMConstructorObject {
public:
    JSIDBDatabaseExceptionConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSIDBDatabaseExceptionConstructor::s_info = { "IDBDatabaseExceptionConstructor", &DOMConstructorObject::s_info, &JSIDBDatabaseExceptionConstructorTable, 0 };

JSIDBDatabaseExceptionConstructor::JSIDBDatabaseExceptionConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSIDBDatabaseExceptionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSIDBDatabaseExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBDatabaseExceptionConstructor, JSDOMWrapper>(exec, &JSIDBDatabaseExceptionConstructorTable, this, propertyName, slot);
}

bool JSIDBDatabaseExceptionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBDatabaseExceptionConstructor, JSDOMWrapper>(exec, &JSIDBDatabaseExceptionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBDatabaseExceptionPrototypeTableValues[16] =
{
    { "NO_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionNO_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "UNKNOWN_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionUNKNOWN_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NON_TRANSIENT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionNON_TRANSIENT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOT_FOUND_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionNOT_FOUND_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CONSTRAINT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionCONSTRAINT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DATA_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionDATA_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "NOT_ALLOWED_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionNOT_ALLOWED_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SERIAL_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionSERIAL_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "RECOVERABLE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionRECOVERABLE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TRANSIENT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionTRANSIENT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "TIMEOUT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionTIMEOUT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "DEADLOCK_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionDEADLOCK_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "READ_ONLY_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionREAD_ONLY_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "ABORT_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseExceptionABORT_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "toString", DontDelete | DontEnum | Function, (intptr_t)static_cast<NativeFunction>(jsIDBDatabaseExceptionPrototypeFunctionToString), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBDatabaseExceptionPrototypeTable = { 34, 31, JSIDBDatabaseExceptionPrototypeTableValues, 0 };
const ClassInfo JSIDBDatabaseExceptionPrototype::s_info = { "IDBDatabaseExceptionPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSIDBDatabaseExceptionPrototypeTable, 0 };

JSObject* JSIDBDatabaseExceptionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBDatabaseException>(exec, globalObject);
}

bool JSIDBDatabaseExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSIDBDatabaseExceptionPrototype, JSObject>(exec, &JSIDBDatabaseExceptionPrototypeTable, this, propertyName, slot);
}

bool JSIDBDatabaseExceptionPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSIDBDatabaseExceptionPrototype, JSObject>(exec, &JSIDBDatabaseExceptionPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSIDBDatabaseException::s_info = { "IDBDatabaseException", &JSDOMWrapper::s_info, &JSIDBDatabaseExceptionTable, 0 };

JSIDBDatabaseException::JSIDBDatabaseException(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBDatabaseException> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSIDBDatabaseException::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSIDBDatabaseExceptionPrototype(exec->globalData(), globalObject, JSIDBDatabaseExceptionPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSIDBDatabaseException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBDatabaseException, Base>(exec, &JSIDBDatabaseExceptionTable, this, propertyName, slot);
}

bool JSIDBDatabaseException::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBDatabaseException, Base>(exec, &JSIDBDatabaseExceptionTable, this, propertyName, descriptor);
}

JSValue jsIDBDatabaseExceptionCode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBDatabaseException* castedThis = static_cast<JSIDBDatabaseException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBDatabaseException* imp = static_cast<IDBDatabaseException*>(castedThis->impl());
    JSValue result = jsNumber(imp->code());
    return result;
}


JSValue jsIDBDatabaseExceptionName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBDatabaseException* castedThis = static_cast<JSIDBDatabaseException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBDatabaseException* imp = static_cast<IDBDatabaseException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}


JSValue jsIDBDatabaseExceptionMessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBDatabaseException* castedThis = static_cast<JSIDBDatabaseException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBDatabaseException* imp = static_cast<IDBDatabaseException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->message());
    return result;
}


JSValue jsIDBDatabaseExceptionConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBDatabaseException* domObject = static_cast<JSIDBDatabaseException*>(asObject(slotBase));
    return JSIDBDatabaseException::getConstructor(exec, domObject->globalObject());
}

JSValue JSIDBDatabaseException::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBDatabaseExceptionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabaseExceptionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBDatabaseException::s_info))
        return throwVMTypeError(exec);
    JSIDBDatabaseException* castedThis = static_cast<JSIDBDatabaseException*>(asObject(thisValue));
    IDBDatabaseException* imp = static_cast<IDBDatabaseException*>(castedThis->impl());


    JSC::JSValue result = jsString(exec, imp->toString());
    return JSValue::encode(result);
}

// Constant getters

JSValue jsIDBDatabaseExceptionNO_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsIDBDatabaseExceptionUNKNOWN_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsIDBDatabaseExceptionNON_TRANSIENT_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsIDBDatabaseExceptionNOT_FOUND_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsIDBDatabaseExceptionCONSTRAINT_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsIDBDatabaseExceptionDATA_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsIDBDatabaseExceptionNOT_ALLOWED_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsIDBDatabaseExceptionSERIAL_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsIDBDatabaseExceptionRECOVERABLE_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsIDBDatabaseExceptionTRANSIENT_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsIDBDatabaseExceptionTIMEOUT_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsIDBDatabaseExceptionDEADLOCK_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(11));
}

JSValue jsIDBDatabaseExceptionREAD_ONLY_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(12));
}

JSValue jsIDBDatabaseExceptionABORT_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(13));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBDatabaseException* impl)
{
    return wrap<JSIDBDatabaseException>(exec, globalObject, impl);
}

IDBDatabaseException* toIDBDatabaseException(JSC::JSValue value)
{
    return value.inherits(&JSIDBDatabaseException::s_info) ? static_cast<JSIDBDatabaseException*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
