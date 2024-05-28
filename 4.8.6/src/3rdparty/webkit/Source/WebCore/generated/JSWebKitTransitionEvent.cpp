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
#include "JSWebKitTransitionEvent.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include "WebKitTransitionEvent.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebKitTransitionEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebKitTransitionEventTableValues[4] =
{
    { "propertyName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitTransitionEventPropertyName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "elapsedTime", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitTransitionEventElapsedTime), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitTransitionEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebKitTransitionEventTable = { 8, 7, JSWebKitTransitionEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebKitTransitionEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebKitTransitionEventConstructorTable = { 1, 0, JSWebKitTransitionEventConstructorTableValues, 0 };
class JSWebKitTransitionEventConstructor : public DOMConstructorObject {
public:
    JSWebKitTransitionEventConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSWebKitTransitionEventConstructor::s_info = { "WebKitTransitionEventConstructor", &DOMConstructorObject::s_info, &JSWebKitTransitionEventConstructorTable, 0 };

JSWebKitTransitionEventConstructor::JSWebKitTransitionEventConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWebKitTransitionEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSWebKitTransitionEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitTransitionEventConstructor, JSDOMWrapper>(exec, &JSWebKitTransitionEventConstructorTable, this, propertyName, slot);
}

bool JSWebKitTransitionEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebKitTransitionEventConstructor, JSDOMWrapper>(exec, &JSWebKitTransitionEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebKitTransitionEventPrototypeTableValues[2] =
{
    { "initWebKitTransitionEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWebKitTransitionEventPrototypeFunctionInitWebKitTransitionEvent), (intptr_t)5 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebKitTransitionEventPrototypeTable = { 2, 1, JSWebKitTransitionEventPrototypeTableValues, 0 };
const ClassInfo JSWebKitTransitionEventPrototype::s_info = { "WebKitTransitionEventPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSWebKitTransitionEventPrototypeTable, 0 };

JSObject* JSWebKitTransitionEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitTransitionEvent>(exec, globalObject);
}

bool JSWebKitTransitionEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSWebKitTransitionEventPrototypeTable, this, propertyName, slot);
}

bool JSWebKitTransitionEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSWebKitTransitionEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSWebKitTransitionEvent::s_info = { "WebKitTransitionEvent", &JSEvent::s_info, &JSWebKitTransitionEventTable, 0 };

JSWebKitTransitionEvent::JSWebKitTransitionEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitTransitionEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSWebKitTransitionEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebKitTransitionEventPrototype(exec->globalData(), globalObject, JSWebKitTransitionEventPrototype::createStructure(exec->globalData(), JSEventPrototype::self(exec, globalObject)));
}

bool JSWebKitTransitionEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitTransitionEvent, Base>(exec, &JSWebKitTransitionEventTable, this, propertyName, slot);
}

bool JSWebKitTransitionEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebKitTransitionEvent, Base>(exec, &JSWebKitTransitionEventTable, this, propertyName, descriptor);
}

JSValue jsWebKitTransitionEventPropertyName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebKitTransitionEvent* castedThis = static_cast<JSWebKitTransitionEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitTransitionEvent* imp = static_cast<WebKitTransitionEvent*>(castedThis->impl());
    JSValue result = jsString(exec, imp->propertyName());
    return result;
}


JSValue jsWebKitTransitionEventElapsedTime(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebKitTransitionEvent* castedThis = static_cast<JSWebKitTransitionEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitTransitionEvent* imp = static_cast<WebKitTransitionEvent*>(castedThis->impl());
    JSValue result = jsNumber(imp->elapsedTime());
    return result;
}


JSValue jsWebKitTransitionEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebKitTransitionEvent* domObject = static_cast<JSWebKitTransitionEvent*>(asObject(slotBase));
    return JSWebKitTransitionEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSWebKitTransitionEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitTransitionEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsWebKitTransitionEventPrototypeFunctionInitWebKitTransitionEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebKitTransitionEvent::s_info))
        return throwVMTypeError(exec);
    JSWebKitTransitionEvent* castedThis = static_cast<JSWebKitTransitionEvent*>(asObject(thisValue));
    WebKitTransitionEvent* imp = static_cast<WebKitTransitionEvent*>(castedThis->impl());
    const String& typeArg(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool canBubbleArg(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool cancelableArg(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& propertyNameArg(ustringToString(exec->argument(3).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double elapsedTimeArg(exec->argument(4).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->initWebKitTransitionEvent(typeArg, canBubbleArg, cancelableArg, propertyNameArg, elapsedTimeArg);
    return JSValue::encode(jsUndefined());
}


}
