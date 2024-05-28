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
#include "JSHTMLHeadingElement.h"

#include "HTMLHeadingElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLHeadingElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLHeadingElementTableValues[3] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLHeadingElementAlign), (intptr_t)setJSHTMLHeadingElementAlign THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLHeadingElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLHeadingElementTable = { 5, 3, JSHTMLHeadingElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLHeadingElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLHeadingElementConstructorTable = { 1, 0, JSHTMLHeadingElementConstructorTableValues, 0 };
class JSHTMLHeadingElementConstructor : public DOMConstructorObject {
public:
    JSHTMLHeadingElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLHeadingElementConstructor::s_info = { "HTMLHeadingElementConstructor", &DOMConstructorObject::s_info, &JSHTMLHeadingElementConstructorTable, 0 };

JSHTMLHeadingElementConstructor::JSHTMLHeadingElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLHeadingElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLHeadingElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLHeadingElementConstructor, JSDOMWrapper>(exec, &JSHTMLHeadingElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLHeadingElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLHeadingElementConstructor, JSDOMWrapper>(exec, &JSHTMLHeadingElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLHeadingElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLHeadingElementPrototypeTable = { 1, 0, JSHTMLHeadingElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLHeadingElementPrototype::s_info = { "HTMLHeadingElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLHeadingElementPrototypeTable, 0 };

JSObject* JSHTMLHeadingElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLHeadingElement>(exec, globalObject);
}

const ClassInfo JSHTMLHeadingElement::s_info = { "HTMLHeadingElement", &JSHTMLElement::s_info, &JSHTMLHeadingElementTable, 0 };

JSHTMLHeadingElement::JSHTMLHeadingElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLHeadingElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLHeadingElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLHeadingElementPrototype(exec->globalData(), globalObject, JSHTMLHeadingElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLHeadingElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLHeadingElement, Base>(exec, &JSHTMLHeadingElementTable, this, propertyName, slot);
}

bool JSHTMLHeadingElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLHeadingElement, Base>(exec, &JSHTMLHeadingElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLHeadingElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLHeadingElement* castedThis = static_cast<JSHTMLHeadingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLHeadingElement* imp = static_cast<HTMLHeadingElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLHeadingElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLHeadingElement* domObject = static_cast<JSHTMLHeadingElement*>(asObject(slotBase));
    return JSHTMLHeadingElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLHeadingElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLHeadingElement, Base>(exec, propertyName, value, &JSHTMLHeadingElementTable, this, slot);
}

void setJSHTMLHeadingElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLHeadingElement* castedThis = static_cast<JSHTMLHeadingElement*>(thisObject);
    HTMLHeadingElement* imp = static_cast<HTMLHeadingElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLHeadingElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLHeadingElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
