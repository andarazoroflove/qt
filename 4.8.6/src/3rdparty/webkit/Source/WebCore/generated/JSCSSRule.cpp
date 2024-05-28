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
#include "JSCSSRule.h"

#include "CSSRule.h"
#include "CSSStyleSheet.h"
#include "JSCSSRule.h"
#include "JSCSSStyleSheet.h"
#include "KURL.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSRule);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSRuleTableValues[6] =
{
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "cssText", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleCssText), (intptr_t)setJSCSSRuleCssText THUNK_GENERATOR(0) },
    { "parentStyleSheet", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleParentStyleSheet), (intptr_t)0 THUNK_GENERATOR(0) },
    { "parentRule", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleParentRule), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSRuleTable = { 17, 15, JSCSSRuleTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSRuleConstructorTableValues[10] =
{
    { "UNKNOWN_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleUNKNOWN_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "STYLE_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleSTYLE_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CHARSET_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleCHARSET_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "IMPORT_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleIMPORT_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MEDIA_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleMEDIA_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "FONT_FACE_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleFONT_FACE_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "PAGE_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRulePAGE_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "WEBKIT_KEYFRAMES_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleWEBKIT_KEYFRAMES_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "WEBKIT_KEYFRAME_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleWEBKIT_KEYFRAME_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSRuleConstructorTable = { 34, 31, JSCSSRuleConstructorTableValues, 0 };

COMPILE_ASSERT(0 == CSSRule::UNKNOWN_RULE, CSSRuleEnumUNKNOWN_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == CSSRule::STYLE_RULE, CSSRuleEnumSTYLE_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == CSSRule::CHARSET_RULE, CSSRuleEnumCHARSET_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == CSSRule::IMPORT_RULE, CSSRuleEnumIMPORT_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == CSSRule::MEDIA_RULE, CSSRuleEnumMEDIA_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == CSSRule::FONT_FACE_RULE, CSSRuleEnumFONT_FACE_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == CSSRule::PAGE_RULE, CSSRuleEnumPAGE_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == CSSRule::WEBKIT_KEYFRAMES_RULE, CSSRuleEnumWEBKIT_KEYFRAMES_RULEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == CSSRule::WEBKIT_KEYFRAME_RULE, CSSRuleEnumWEBKIT_KEYFRAME_RULEIsWrongUseDontCheckEnums);

class JSCSSRuleConstructor : public DOMConstructorObject {
public:
    JSCSSRuleConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSCSSRuleConstructor::s_info = { "CSSRuleConstructor", &DOMConstructorObject::s_info, &JSCSSRuleConstructorTable, 0 };

JSCSSRuleConstructor::JSCSSRuleConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSCSSRulePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSCSSRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSRuleConstructor, JSDOMWrapper>(exec, &JSCSSRuleConstructorTable, this, propertyName, slot);
}

bool JSCSSRuleConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSRuleConstructor, JSDOMWrapper>(exec, &JSCSSRuleConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSRulePrototypeTableValues[10] =
{
    { "UNKNOWN_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleUNKNOWN_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "STYLE_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleSTYLE_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "CHARSET_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleCHARSET_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "IMPORT_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleIMPORT_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MEDIA_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleMEDIA_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "FONT_FACE_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleFONT_FACE_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "PAGE_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRulePAGE_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "WEBKIT_KEYFRAMES_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleWEBKIT_KEYFRAMES_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "WEBKIT_KEYFRAME_RULE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSRuleWEBKIT_KEYFRAME_RULE), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSRulePrototypeTable = { 34, 31, JSCSSRulePrototypeTableValues, 0 };
const ClassInfo JSCSSRulePrototype::s_info = { "CSSRulePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCSSRulePrototypeTable, 0 };

JSObject* JSCSSRulePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSRule>(exec, globalObject);
}

bool JSCSSRulePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSRulePrototype, JSObject>(exec, &JSCSSRulePrototypeTable, this, propertyName, slot);
}

bool JSCSSRulePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSRulePrototype, JSObject>(exec, &JSCSSRulePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSCSSRule::s_info = { "CSSRule", &JSDOMWrapper::s_info, &JSCSSRuleTable, 0 };

JSCSSRule::JSCSSRule(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSRule> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSCSSRule::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSCSSRulePrototype(exec->globalData(), globalObject, JSCSSRulePrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSCSSRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSRule, Base>(exec, &JSCSSRuleTable, this, propertyName, slot);
}

bool JSCSSRule::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSCSSRule, Base>(exec, &JSCSSRuleTable, this, propertyName, descriptor);
}

JSValue jsCSSRuleType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSRule* castedThis = static_cast<JSCSSRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSRule* imp = static_cast<CSSRule*>(castedThis->impl());
    JSValue result = jsNumber(imp->type());
    return result;
}


JSValue jsCSSRuleCssText(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSRule* castedThis = static_cast<JSCSSRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSRule* imp = static_cast<CSSRule*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->cssText());
    return result;
}


JSValue jsCSSRuleParentStyleSheet(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSRule* castedThis = static_cast<JSCSSRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSRule* imp = static_cast<CSSRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->parentStyleSheet()));
    return result;
}


JSValue jsCSSRuleParentRule(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSRule* castedThis = static_cast<JSCSSRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CSSRule* imp = static_cast<CSSRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->parentRule()));
    return result;
}


JSValue jsCSSRuleConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSCSSRule* domObject = static_cast<JSCSSRule*>(asObject(slotBase));
    return JSCSSRule::getConstructor(exec, domObject->globalObject());
}

void JSCSSRule::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSCSSRule, Base>(exec, propertyName, value, &JSCSSRuleTable, this, slot);
}

void setJSCSSRuleCssText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSCSSRule* castedThis = static_cast<JSCSSRule*>(thisObject);
    CSSRule* imp = static_cast<CSSRule*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setCssText(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}


JSValue JSCSSRule::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSRuleConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsCSSRuleUNKNOWN_RULE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsCSSRuleSTYLE_RULE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsCSSRuleCHARSET_RULE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsCSSRuleIMPORT_RULE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsCSSRuleMEDIA_RULE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsCSSRuleFONT_FACE_RULE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsCSSRulePAGE_RULE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsCSSRuleWEBKIT_KEYFRAMES_RULE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsCSSRuleWEBKIT_KEYFRAME_RULE(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

static inline bool isObservable(JSCSSRule* jsCSSRule)
{
    if (jsCSSRule->hasCustomProperties())
        return true;
    return false;
}

bool JSCSSRuleOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSCSSRule* jsCSSRule = static_cast<JSCSSRule*>(handle.get().asCell());
    if (!isObservable(jsCSSRule))
        return false;
    void* root = WebCore::root(jsCSSRule->impl());
    return visitor.containsOpaqueRoot(root);
}

void JSCSSRuleOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSCSSRule* jsCSSRule = static_cast<JSCSSRule*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsCSSRule->impl(), jsCSSRule);
}

CSSRule* toCSSRule(JSC::JSValue value)
{
    return value.inherits(&JSCSSRule::s_info) ? static_cast<JSCSSRule*>(asObject(value))->impl() : 0;
}

}
