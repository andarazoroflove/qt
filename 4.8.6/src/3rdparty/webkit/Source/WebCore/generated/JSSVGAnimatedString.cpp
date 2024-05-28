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

#if ENABLE(SVG)

#include "JSSVGAnimatedString.h"

#include "KURL.h"
#include "PlatformString.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedString);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedStringTableValues[4] =
{
    { "baseVal", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedStringBaseVal), (intptr_t)setJSSVGAnimatedStringBaseVal THUNK_GENERATOR(0) },
    { "animVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedStringAnimVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedStringConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedStringTable = { 8, 7, JSSVGAnimatedStringTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedStringConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedStringConstructorTable = { 1, 0, JSSVGAnimatedStringConstructorTableValues, 0 };
class JSSVGAnimatedStringConstructor : public DOMConstructorObject {
public:
    JSSVGAnimatedStringConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGAnimatedStringConstructor::s_info = { "SVGAnimatedStringConstructor", &DOMConstructorObject::s_info, &JSSVGAnimatedStringConstructorTable, 0 };

JSSVGAnimatedStringConstructor::JSSVGAnimatedStringConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGAnimatedStringPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGAnimatedStringConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedStringConstructor, JSDOMWrapper>(exec, &JSSVGAnimatedStringConstructorTable, this, propertyName, slot);
}

bool JSSVGAnimatedStringConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedStringConstructor, JSDOMWrapper>(exec, &JSSVGAnimatedStringConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedStringPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedStringPrototypeTable = { 1, 0, JSSVGAnimatedStringPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimatedStringPrototype::s_info = { "SVGAnimatedStringPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGAnimatedStringPrototypeTable, 0 };

JSObject* JSSVGAnimatedStringPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedString>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedString::s_info = { "SVGAnimatedString", &JSDOMWrapper::s_info, &JSSVGAnimatedStringTable, 0 };

JSSVGAnimatedString::JSSVGAnimatedString(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedString> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimatedString::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnimatedStringPrototype(exec->globalData(), globalObject, JSSVGAnimatedStringPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSSVGAnimatedString::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedString, Base>(exec, &JSSVGAnimatedStringTable, this, propertyName, slot);
}

bool JSSVGAnimatedString::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedString, Base>(exec, &JSSVGAnimatedStringTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedStringBaseVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedString* castedThis = static_cast<JSSVGAnimatedString*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedString* imp = static_cast<SVGAnimatedString*>(castedThis->impl());
    JSValue result = jsString(exec, imp->baseVal());
    return result;
}


JSValue jsSVGAnimatedStringAnimVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedString* castedThis = static_cast<JSSVGAnimatedString*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedString* imp = static_cast<SVGAnimatedString*>(castedThis->impl());
    JSValue result = jsString(exec, imp->animVal());
    return result;
}


JSValue jsSVGAnimatedStringConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedString* domObject = static_cast<JSSVGAnimatedString*>(asObject(slotBase));
    return JSSVGAnimatedString::getConstructor(exec, domObject->globalObject());
}

void JSSVGAnimatedString::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGAnimatedString, Base>(exec, propertyName, value, &JSSVGAnimatedStringTable, this, slot);
}

void setJSSVGAnimatedStringBaseVal(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGAnimatedString* castedThis = static_cast<JSSVGAnimatedString*>(thisObject);
    SVGAnimatedString* imp = static_cast<SVGAnimatedString*>(castedThis->impl());
    imp->setBaseVal(ustringToString(value.toString(exec)));
}


JSValue JSSVGAnimatedString::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedStringConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedString* impl)
{
    return wrap<JSSVGAnimatedString>(exec, globalObject, impl);
}

SVGAnimatedString* toSVGAnimatedString(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedString::s_info) ? static_cast<JSSVGAnimatedString*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
