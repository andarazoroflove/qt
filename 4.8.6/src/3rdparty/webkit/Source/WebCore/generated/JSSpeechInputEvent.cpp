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

#if ENABLE(INPUT_SPEECH)

#include "JSSpeechInputEvent.h"

#include "JSSpeechInputResultList.h"
#include "SpeechInputEvent.h"
#include "SpeechInputResultList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSpeechInputEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSpeechInputEventTableValues[3] =
{
    { "results", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechInputEventResults), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSpeechInputEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSpeechInputEventTable = { 4, 3, JSSpeechInputEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSpeechInputEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSpeechInputEventConstructorTable = { 1, 0, JSSpeechInputEventConstructorTableValues, 0 };
class JSSpeechInputEventConstructor : public DOMConstructorObject {
public:
    JSSpeechInputEventConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSpeechInputEventConstructor::s_info = { "SpeechInputEventConstructor", &DOMConstructorObject::s_info, &JSSpeechInputEventConstructorTable, 0 };

JSSpeechInputEventConstructor::JSSpeechInputEventConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSpeechInputEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSpeechInputEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSpeechInputEventConstructor, JSDOMWrapper>(exec, &JSSpeechInputEventConstructorTable, this, propertyName, slot);
}

bool JSSpeechInputEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSpeechInputEventConstructor, JSDOMWrapper>(exec, &JSSpeechInputEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSpeechInputEventPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSpeechInputEventPrototypeTable = { 1, 0, JSSpeechInputEventPrototypeTableValues, 0 };
const ClassInfo JSSpeechInputEventPrototype::s_info = { "SpeechInputEventPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSpeechInputEventPrototypeTable, 0 };

JSObject* JSSpeechInputEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSpeechInputEvent>(exec, globalObject);
}

const ClassInfo JSSpeechInputEvent::s_info = { "SpeechInputEvent", &JSEvent::s_info, &JSSpeechInputEventTable, 0 };

JSSpeechInputEvent::JSSpeechInputEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SpeechInputEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSpeechInputEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSpeechInputEventPrototype(exec->globalData(), globalObject, JSSpeechInputEventPrototype::createStructure(exec->globalData(), JSEventPrototype::self(exec, globalObject)));
}

bool JSSpeechInputEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSpeechInputEvent, Base>(exec, &JSSpeechInputEventTable, this, propertyName, slot);
}

bool JSSpeechInputEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSpeechInputEvent, Base>(exec, &JSSpeechInputEventTable, this, propertyName, descriptor);
}

JSValue jsSpeechInputEventResults(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSpeechInputEvent* castedThis = static_cast<JSSpeechInputEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SpeechInputEvent* imp = static_cast<SpeechInputEvent*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->results()));
    return result;
}


JSValue jsSpeechInputEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSpeechInputEvent* domObject = static_cast<JSSpeechInputEvent*>(asObject(slotBase));
    return JSSpeechInputEvent::getConstructor(exec, domObject->globalObject());
}

JSValue JSSpeechInputEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSpeechInputEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(INPUT_SPEECH)
