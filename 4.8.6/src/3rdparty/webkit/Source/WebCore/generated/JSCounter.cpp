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
#include "JSCounter.h"

#include "Counter.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCounter);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCounterTableValues[5] =
{
    { "identifier", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCounterIdentifier), (intptr_t)0 THUNK_GENERATOR(0) },
    { "listStyle", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCounterListStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "separator", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCounterSeparator), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCounterConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCounterTable = { 9, 7, JSCounterTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCounterConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCounterConstructorTable = { 1, 0, JSCounterConstructorTableValues, 0 };
class JSCounterConstructor : public DOMConstructorObject {
public:
    JSCounterConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSCounterConstructor::s_info = { "CounterConstructor", &DOMConstructorObject::s_info, &JSCounterConstructorTable, 0 };

JSCounterConstructor::JSCounterConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSCounterPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCounterConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCounterConstructor, JSDOMWrapper>(exec, &JSCounterConstructorTable, this, propertyName, slot);
}

bool JSCounterConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCounterConstructor, JSDOMWrapper>(exec, &JSCounterConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCounterPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCounterPrototypeTable = { 1, 0, JSCounterPrototypeTableValues, 0 };
const ClassInfo JSCounterPrototype::s_info = { "CounterPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCounterPrototypeTable, 0 };

JSObject* JSCounterPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCounter>(exec, globalObject);
}

const ClassInfo JSCounter::s_info = { "Counter", &JSDOMWrapper::s_info, &JSCounterTable, 0 };

JSCounter::JSCounter(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Counter> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSCounter::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCounterPrototype(exec->globalData(), globalObject, JSCounterPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSCounter::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCounter, Base>(exec, &JSCounterTable, this, propertyName, slot);
}

bool JSCounter::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCounter, Base>(exec, &JSCounterTable, this, propertyName, descriptor);
}

JSValue jsCounterIdentifier(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCounter* castedThis = static_cast<JSCounter*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Counter* imp = static_cast<Counter*>(castedThis->impl());
    JSValue result = jsString(exec, imp->identifier());
    return result;
}


JSValue jsCounterListStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCounter* castedThis = static_cast<JSCounter*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Counter* imp = static_cast<Counter*>(castedThis->impl());
    JSValue result = jsString(exec, imp->listStyle());
    return result;
}


JSValue jsCounterSeparator(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCounter* castedThis = static_cast<JSCounter*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Counter* imp = static_cast<Counter*>(castedThis->impl());
    JSValue result = jsString(exec, imp->separator());
    return result;
}


JSValue jsCounterConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCounter* domObject = static_cast<JSCounter*>(asObject(slotBase));
    return JSCounter::getConstructor(exec, domObject->globalObject());
}

JSValue JSCounter::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCounterConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Counter* impl)
{
    return wrap<JSCounter>(exec, globalObject, impl);
}

Counter* toCounter(JSC::JSValue value)
{
    return value.inherits(&JSCounter::s_info) ? static_cast<JSCounter*>(asObject(value))->impl() : 0;
}

}
