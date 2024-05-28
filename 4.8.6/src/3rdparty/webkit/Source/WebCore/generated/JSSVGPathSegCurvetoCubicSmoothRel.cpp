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

#include "JSSVGPathSegCurvetoCubicSmoothRel.h"

#include "SVGPathSegCurvetoCubicSmooth.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegCurvetoCubicSmoothRel);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegCurvetoCubicSmoothRelTableValues[6] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelX), (intptr_t)setJSSVGPathSegCurvetoCubicSmoothRelX THUNK_GENERATOR(0) },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelY), (intptr_t)setJSSVGPathSegCurvetoCubicSmoothRelY THUNK_GENERATOR(0) },
    { "x2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelX2), (intptr_t)setJSSVGPathSegCurvetoCubicSmoothRelX2 THUNK_GENERATOR(0) },
    { "y2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelY2), (intptr_t)setJSSVGPathSegCurvetoCubicSmoothRelY2 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicSmoothRelConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegCurvetoCubicSmoothRelTable = { 16, 15, JSSVGPathSegCurvetoCubicSmoothRelTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegCurvetoCubicSmoothRelConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegCurvetoCubicSmoothRelConstructorTable = { 1, 0, JSSVGPathSegCurvetoCubicSmoothRelConstructorTableValues, 0 };
class JSSVGPathSegCurvetoCubicSmoothRelConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegCurvetoCubicSmoothRelConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPathSegCurvetoCubicSmoothRelConstructor::s_info = { "SVGPathSegCurvetoCubicSmoothRelConstructor", &DOMConstructorObject::s_info, &JSSVGPathSegCurvetoCubicSmoothRelConstructorTable, 0 };

JSSVGPathSegCurvetoCubicSmoothRelConstructor::JSSVGPathSegCurvetoCubicSmoothRelConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPathSegCurvetoCubicSmoothRelPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPathSegCurvetoCubicSmoothRelConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicSmoothRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegCurvetoCubicSmoothRelConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegCurvetoCubicSmoothRelConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegCurvetoCubicSmoothRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegCurvetoCubicSmoothRelConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegCurvetoCubicSmoothRelPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegCurvetoCubicSmoothRelPrototypeTable = { 1, 0, JSSVGPathSegCurvetoCubicSmoothRelPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegCurvetoCubicSmoothRelPrototype::s_info = { "SVGPathSegCurvetoCubicSmoothRelPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPathSegCurvetoCubicSmoothRelPrototypeTable, 0 };

JSObject* JSSVGPathSegCurvetoCubicSmoothRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoCubicSmoothRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegCurvetoCubicSmoothRel::s_info = { "SVGPathSegCurvetoCubicSmoothRel", &JSSVGPathSeg::s_info, &JSSVGPathSegCurvetoCubicSmoothRelTable, 0 };

JSSVGPathSegCurvetoCubicSmoothRel::JSSVGPathSegCurvetoCubicSmoothRel(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoCubicSmoothRel> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegCurvetoCubicSmoothRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegCurvetoCubicSmoothRelPrototype(exec->globalData(), globalObject, JSSVGPathSegCurvetoCubicSmoothRelPrototype::createStructure(exec->globalData(), JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegCurvetoCubicSmoothRel::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicSmoothRel, Base>(exec, &JSSVGPathSegCurvetoCubicSmoothRelTable, this, propertyName, slot);
}

bool JSSVGPathSegCurvetoCubicSmoothRel::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegCurvetoCubicSmoothRel, Base>(exec, &JSSVGPathSegCurvetoCubicSmoothRelTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegCurvetoCubicSmoothRelX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->x());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicSmoothRelY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->y());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicSmoothRelX2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->x2());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicSmoothRelY2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->y2());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicSmoothRelConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegCurvetoCubicSmoothRel* domObject = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(asObject(slotBase));
    return JSSVGPathSegCurvetoCubicSmoothRel::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegCurvetoCubicSmoothRel::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegCurvetoCubicSmoothRel, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoCubicSmoothRelTable, this, slot);
}

void setJSSVGPathSegCurvetoCubicSmoothRelX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(thisObject);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    imp->setX(value.toFloat(exec));
}


void setJSSVGPathSegCurvetoCubicSmoothRelY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(thisObject);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    imp->setY(value.toFloat(exec));
}


void setJSSVGPathSegCurvetoCubicSmoothRelX2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(thisObject);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    imp->setX2(value.toFloat(exec));
}


void setJSSVGPathSegCurvetoCubicSmoothRelY2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegCurvetoCubicSmoothRel* castedThis = static_cast<JSSVGPathSegCurvetoCubicSmoothRel*>(thisObject);
    SVGPathSegCurvetoCubicSmoothRel* imp = static_cast<SVGPathSegCurvetoCubicSmoothRel*>(castedThis->impl());
    imp->setY2(value.toFloat(exec));
}


JSValue JSSVGPathSegCurvetoCubicSmoothRel::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegCurvetoCubicSmoothRelConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
