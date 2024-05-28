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
#include "JSCSSStyleRule.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSStyleRule.h"
#include "JSCSSStyleDeclaration.h"
#include "KURL.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSStyleRule);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSStyleRuleTableValues[4] =
{
    { "selectorText", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSStyleRuleSelectorText), (intptr_t)setJSCSSStyleRuleSelectorText THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSStyleRuleStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSStyleRuleConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSStyleRuleTable = { 8, 7, JSCSSStyleRuleTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSStyleRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSStyleRuleConstructorTable = { 1, 0, JSCSSStyleRuleConstructorTableValues, 0 };
class JSCSSStyleRuleConstructor : public DOMConstructorObject {
public:
    JSCSSStyleRuleConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSCSSStyleRuleConstructor::s_info = { "CSSStyleRuleConstructor", &DOMConstructorObject::s_info, &JSCSSStyleRuleConstructorTable, 0 };

JSCSSStyleRuleConstructor::JSCSSStyleRuleConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSCSSStyleRulePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCSSStyleRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSStyleRuleConstructor, JSDOMWrapper>(exec, &JSCSSStyleRuleConstructorTable, this, propertyName, slot);
}

bool JSCSSStyleRuleConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSStyleRuleConstructor, JSDOMWrapper>(exec, &JSCSSStyleRuleConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSStyleRulePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSStyleRulePrototypeTable = { 1, 0, JSCSSStyleRulePrototypeTableValues, 0 };
const ClassInfo JSCSSStyleRulePrototype::s_info = { "CSSStyleRulePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCSSStyleRulePrototypeTable, 0 };

JSObject* JSCSSStyleRulePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSStyleRule>(exec, globalObject);
}

const ClassInfo JSCSSStyleRule::s_info = { "CSSStyleRule", &JSCSSRule::s_info, &JSCSSStyleRuleTable, 0 };

JSCSSStyleRule::JSCSSStyleRule(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSStyleRule> impl)
    : JSCSSRule(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSCSSStyleRule::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCSSStyleRulePrototype(exec->globalData(), globalObject, JSCSSStyleRulePrototype::createStructure(exec->globalData(), JSCSSRulePrototype::self(exec, globalObject)));
}

bool JSCSSStyleRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSStyleRule, Base>(exec, &JSCSSStyleRuleTable, this, propertyName, slot);
}

bool JSCSSStyleRule::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSStyleRule, Base>(exec, &JSCSSStyleRuleTable, this, propertyName, descriptor);
}

JSValue jsCSSStyleRuleSelectorText(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSStyleRule* castedThis = static_cast<JSCSSStyleRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSStyleRule* imp = static_cast<CSSStyleRule*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->selectorText());
    return result;
}


JSValue jsCSSStyleRuleStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSStyleRule* castedThis = static_cast<JSCSSStyleRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSStyleRule* imp = static_cast<CSSStyleRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsCSSStyleRuleConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSStyleRule* domObject = static_cast<JSCSSStyleRule*>(asObject(slotBase));
    return JSCSSStyleRule::getConstructor(exec, domObject->globalObject());
}

void JSCSSStyleRule::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSCSSStyleRule, Base>(exec, propertyName, value, &JSCSSStyleRuleTable, this, slot);
}

void setJSCSSStyleRuleSelectorText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSCSSStyleRule* castedThis = static_cast<JSCSSStyleRule*>(thisObject);
    CSSStyleRule* imp = static_cast<CSSStyleRule*>(castedThis->impl());
    imp->setSelectorText(valueToStringWithNullCheck(exec, value));
}


JSValue JSCSSStyleRule::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSStyleRuleConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
