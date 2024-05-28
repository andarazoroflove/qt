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

#ifndef JSSVGTextContentElement_h
#define JSSVGTextContentElement_h

#if ENABLE(SVG)

#include "JSSVGElement.h"
#include "SVGElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class SVGTextContentElement;

class JSSVGTextContentElement : public JSSVGElement {
    typedef JSSVGElement Base;
public:
    JSSVGTextContentElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGTextContentElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGTextContentElementPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSSVGTextContentElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetNumberOfChars(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetComputedTextLength(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetSubStringLength(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetStartPositionOfChar(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetEndPositionOfChar(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetExtentOfChar(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetRotationOfChar(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetCharNumAtPosition(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionSelectSubString(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionHasExtension(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGTextContentElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGTextContentElementTextLength(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementLengthAdjust(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementRequiredFeatures(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementRequiredExtensions(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementSystemLanguage(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementXmllang(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGTextContentElementXmllang(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGTextContentElementXmlspace(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGTextContentElementXmlspace(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGTextContentElementExternalResourcesRequired(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementClassName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementStyle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsSVGTextContentElementLENGTHADJUST_UNKNOWN(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementLENGTHADJUST_SPACING(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGTextContentElementLENGTHADJUST_SPACINGANDGLYPHS(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
