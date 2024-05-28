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

#include "JSSVGPathSegArcRel.h"

#include "SVGPathSegArc.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegArcRel);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegArcRelTableValues[9] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcRelX), (intptr_t)setJSSVGPathSegArcRelX THUNK_GENERATOR(0) },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcRelY), (intptr_t)setJSSVGPathSegArcRelY THUNK_GENERATOR(0) },
    { "r1", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcRelR1), (intptr_t)setJSSVGPathSegArcRelR1 THUNK_GENERATOR(0) },
    { "r2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcRelR2), (intptr_t)setJSSVGPathSegArcRelR2 THUNK_GENERATOR(0) },
    { "angle", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcRelAngle), (intptr_t)setJSSVGPathSegArcRelAngle THUNK_GENERATOR(0) },
    { "largeArcFlag", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcRelLargeArcFlag), (intptr_t)setJSSVGPathSegArcRelLargeArcFlag THUNK_GENERATOR(0) },
    { "sweepFlag", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcRelSweepFlag), (intptr_t)setJSSVGPathSegArcRelSweepFlag THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegArcRelConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegArcRelTable = { 17, 15, JSSVGPathSegArcRelTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegArcRelConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegArcRelConstructorTable = { 1, 0, JSSVGPathSegArcRelConstructorTableValues, 0 };
class JSSVGPathSegArcRelConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegArcRelConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPathSegArcRelConstructor::s_info = { "SVGPathSegArcRelConstructor", &DOMConstructorObject::s_info, &JSSVGPathSegArcRelConstructorTable, 0 };

JSSVGPathSegArcRelConstructor::JSSVGPathSegArcRelConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPathSegArcRelPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPathSegArcRelConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegArcRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegArcRelConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegArcRelConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegArcRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegArcRelConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegArcRelPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegArcRelPrototypeTable = { 1, 0, JSSVGPathSegArcRelPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegArcRelPrototype::s_info = { "SVGPathSegArcRelPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPathSegArcRelPrototypeTable, 0 };

JSObject* JSSVGPathSegArcRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegArcRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegArcRel::s_info = { "SVGPathSegArcRel", &JSSVGPathSeg::s_info, &JSSVGPathSegArcRelTable, 0 };

JSSVGPathSegArcRel::JSSVGPathSegArcRel(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegArcRel> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegArcRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegArcRelPrototype(exec->globalData(), globalObject, JSSVGPathSegArcRelPrototype::createStructure(exec->globalData(), JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegArcRel::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegArcRel, Base>(exec, &JSSVGPathSegArcRelTable, this, propertyName, slot);
}

bool JSSVGPathSegArcRel::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegArcRel, Base>(exec, &JSSVGPathSegArcRelTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegArcRelX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->x());
    return result;
}


JSValue jsSVGPathSegArcRelY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->y());
    return result;
}


JSValue jsSVGPathSegArcRelR1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->r1());
    return result;
}


JSValue jsSVGPathSegArcRelR2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->r2());
    return result;
}


JSValue jsSVGPathSegArcRelAngle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    JSValue result = jsNumber(imp->angle());
    return result;
}


JSValue jsSVGPathSegArcRelLargeArcFlag(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    JSValue result = jsBoolean(imp->largeArcFlag());
    return result;
}


JSValue jsSVGPathSegArcRelSweepFlag(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    JSValue result = jsBoolean(imp->sweepFlag());
    return result;
}


JSValue jsSVGPathSegArcRelConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegArcRel* domObject = static_cast<JSSVGPathSegArcRel*>(asObject(slotBase));
    return JSSVGPathSegArcRel::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegArcRel::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegArcRel, Base>(exec, propertyName, value, &JSSVGPathSegArcRelTable, this, slot);
}

void setJSSVGPathSegArcRelX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(thisObject);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    imp->setX(value.toFloat(exec));
}


void setJSSVGPathSegArcRelY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(thisObject);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    imp->setY(value.toFloat(exec));
}


void setJSSVGPathSegArcRelR1(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(thisObject);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    imp->setR1(value.toFloat(exec));
}


void setJSSVGPathSegArcRelR2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(thisObject);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    imp->setR2(value.toFloat(exec));
}


void setJSSVGPathSegArcRelAngle(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(thisObject);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    imp->setAngle(value.toFloat(exec));
}


void setJSSVGPathSegArcRelLargeArcFlag(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(thisObject);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    imp->setLargeArcFlag(value.toBoolean(exec));
}


void setJSSVGPathSegArcRelSweepFlag(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegArcRel* castedThis = static_cast<JSSVGPathSegArcRel*>(thisObject);
    SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(castedThis->impl());
    imp->setSweepFlag(value.toBoolean(exec));
}


JSValue JSSVGPathSegArcRel::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegArcRelConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
