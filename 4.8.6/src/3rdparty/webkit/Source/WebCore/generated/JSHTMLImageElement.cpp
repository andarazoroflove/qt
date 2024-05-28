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
#include "JSHTMLImageElement.h"

#include "HTMLImageElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLImageElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLImageElementTableValues[20] =
{
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementName), (intptr_t)setJSHTMLImageElementName THUNK_GENERATOR(0) },
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementAlign), (intptr_t)setJSHTMLImageElementAlign THUNK_GENERATOR(0) },
    { "alt", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementAlt), (intptr_t)setJSHTMLImageElementAlt THUNK_GENERATOR(0) },
    { "border", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementBorder), (intptr_t)setJSHTMLImageElementBorder THUNK_GENERATOR(0) },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementHeight), (intptr_t)setJSHTMLImageElementHeight THUNK_GENERATOR(0) },
    { "hspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementHspace), (intptr_t)setJSHTMLImageElementHspace THUNK_GENERATOR(0) },
    { "isMap", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementIsMap), (intptr_t)setJSHTMLImageElementIsMap THUNK_GENERATOR(0) },
    { "longDesc", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementLongDesc), (intptr_t)setJSHTMLImageElementLongDesc THUNK_GENERATOR(0) },
    { "src", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementSrc), (intptr_t)setJSHTMLImageElementSrc THUNK_GENERATOR(0) },
    { "useMap", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementUseMap), (intptr_t)setJSHTMLImageElementUseMap THUNK_GENERATOR(0) },
    { "vspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementVspace), (intptr_t)setJSHTMLImageElementVspace THUNK_GENERATOR(0) },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementWidth), (intptr_t)setJSHTMLImageElementWidth THUNK_GENERATOR(0) },
    { "complete", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementComplete), (intptr_t)0 THUNK_GENERATOR(0) },
    { "lowsrc", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementLowsrc), (intptr_t)setJSHTMLImageElementLowsrc THUNK_GENERATOR(0) },
    { "naturalHeight", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementNaturalHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "naturalWidth", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementNaturalWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLImageElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLImageElementTable = { 67, 63, JSHTMLImageElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLImageElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLImageElementConstructorTable = { 1, 0, JSHTMLImageElementConstructorTableValues, 0 };
class JSHTMLImageElementConstructor : public DOMConstructorObject {
public:
    JSHTMLImageElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLImageElementConstructor::s_info = { "HTMLImageElementConstructor", &DOMConstructorObject::s_info, &JSHTMLImageElementConstructorTable, 0 };

JSHTMLImageElementConstructor::JSHTMLImageElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLImageElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLImageElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLImageElementConstructor, JSDOMWrapper>(exec, &JSHTMLImageElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLImageElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLImageElementConstructor, JSDOMWrapper>(exec, &JSHTMLImageElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLImageElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLImageElementPrototypeTable = { 1, 0, JSHTMLImageElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLImageElementPrototype::s_info = { "HTMLImageElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLImageElementPrototypeTable, 0 };

JSObject* JSHTMLImageElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLImageElement>(exec, globalObject);
}

const ClassInfo JSHTMLImageElement::s_info = { "HTMLImageElement", &JSHTMLElement::s_info, &JSHTMLImageElementTable, 0 };

JSHTMLImageElement::JSHTMLImageElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLImageElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLImageElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLImageElementPrototype(exec->globalData(), globalObject, JSHTMLImageElementPrototype::createStructure(exec->globalData(), JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLImageElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLImageElement, Base>(exec, &JSHTMLImageElementTable, this, propertyName, slot);
}

bool JSHTMLImageElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLImageElement, Base>(exec, &JSHTMLImageElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLImageElementName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::nameAttr));
    return result;
}


JSValue jsHTMLImageElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLImageElementAlt(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::altAttr));
    return result;
}


JSValue jsHTMLImageElementBorder(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::borderAttr));
    return result;
}


JSValue jsHTMLImageElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->height());
    return result;
}


JSValue jsHTMLImageElementHspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->getIntegralAttribute(WebCore::HTMLNames::hspaceAttr));
    return result;
}


JSValue jsHTMLImageElementIsMap(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::ismapAttr));
    return result;
}


JSValue jsHTMLImageElementLongDesc(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getURLAttribute(WebCore::HTMLNames::longdescAttr));
    return result;
}


JSValue jsHTMLImageElementSrc(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getURLAttribute(WebCore::HTMLNames::srcAttr));
    return result;
}


JSValue jsHTMLImageElementUseMap(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::usemapAttr));
    return result;
}


JSValue jsHTMLImageElementVspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->getIntegralAttribute(WebCore::HTMLNames::vspaceAttr));
    return result;
}


JSValue jsHTMLImageElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->width());
    return result;
}


JSValue jsHTMLImageElementComplete(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->complete());
    return result;
}


JSValue jsHTMLImageElementLowsrc(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getURLAttribute(WebCore::HTMLNames::lowsrcAttr));
    return result;
}


JSValue jsHTMLImageElementNaturalHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->naturalHeight());
    return result;
}


JSValue jsHTMLImageElementNaturalWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->naturalWidth());
    return result;
}


JSValue jsHTMLImageElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->x());
    return result;
}


JSValue jsHTMLImageElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    JSValue result = jsNumber(imp->y());
    return result;
}


JSValue jsHTMLImageElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLImageElement* domObject = static_cast<JSHTMLImageElement*>(asObject(slotBase));
    return JSHTMLImageElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLImageElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLImageElement, Base>(exec, propertyName, value, &JSHTMLImageElementTable, this, slot);
}

void setJSHTMLImageElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::nameAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLImageElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLImageElementAlt(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::altAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLImageElementBorder(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::borderAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLImageElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setHeight(value.toInt32(exec));
}


void setJSHTMLImageElementHspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setIntegralAttribute(WebCore::HTMLNames::hspaceAttr, value.toInt32(exec));
}


void setJSHTMLImageElementIsMap(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::ismapAttr, value.toBoolean(exec));
}


void setJSHTMLImageElementLongDesc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::longdescAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLImageElementSrc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::srcAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLImageElementUseMap(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::usemapAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLImageElementVspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setIntegralAttribute(WebCore::HTMLNames::vspaceAttr, value.toInt32(exec));
}


void setJSHTMLImageElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setWidth(value.toInt32(exec));
}


void setJSHTMLImageElementLowsrc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLImageElement* castedThis = static_cast<JSHTMLImageElement*>(thisObject);
    HTMLImageElement* imp = static_cast<HTMLImageElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::lowsrcAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLImageElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLImageElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

HTMLImageElement* toHTMLImageElement(JSC::JSValue value)
{
    return value.inherits(&JSHTMLImageElement::s_info) ? static_cast<JSHTMLImageElement*>(asObject(value))->impl() : 0;
}

}
