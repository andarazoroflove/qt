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

#if ENABLE(SVG_ANIMATION)

#include "JSSVGSetElement.h"

#include "SVGSetElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGSetElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGSetElementTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGSetElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGSetElementTable = { 2, 1, JSSVGSetElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGSetElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGSetElementConstructorTable = { 1, 0, JSSVGSetElementConstructorTableValues, 0 };
class JSSVGSetElementConstructor : public DOMConstructorObject {
public:
    JSSVGSetElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGSetElementConstructor::s_info = { "SVGSetElementConstructor", &DOMConstructorObject::s_info, &JSSVGSetElementConstructorTable, 0 };

JSSVGSetElementConstructor::JSSVGSetElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGSetElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGSetElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGSetElementConstructor, JSDOMWrapper>(exec, &JSSVGSetElementConstructorTable, this, propertyName, slot);
}

bool JSSVGSetElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGSetElementConstructor, JSDOMWrapper>(exec, &JSSVGSetElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGSetElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGSetElementPrototypeTable = { 1, 0, JSSVGSetElementPrototypeTableValues, 0 };
const ClassInfo JSSVGSetElementPrototype::s_info = { "SVGSetElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGSetElementPrototypeTable, 0 };

JSObject* JSSVGSetElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGSetElement>(exec, globalObject);
}

const ClassInfo JSSVGSetElement::s_info = { "SVGSetElement", &JSSVGAnimationElement::s_info, &JSSVGSetElementTable, 0 };

JSSVGSetElement::JSSVGSetElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGSetElement> impl)
    : JSSVGAnimationElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGSetElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGSetElementPrototype(exec->globalData(), globalObject, JSSVGSetElementPrototype::createStructure(exec->globalData(), JSSVGAnimationElementPrototype::self(exec, globalObject)));
}

bool JSSVGSetElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGSetElement, Base>(exec, &JSSVGSetElementTable, this, propertyName, slot);
}

bool JSSVGSetElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGSetElement, Base>(exec, &JSSVGSetElementTable, this, propertyName, descriptor);
}

JSValue jsSVGSetElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGSetElement* domObject = static_cast<JSSVGSetElement*>(asObject(slotBase));
    return JSSVGSetElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGSetElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGSetElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG_ANIMATION)
