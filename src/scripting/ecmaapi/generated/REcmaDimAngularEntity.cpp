// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaDimAngularEntity.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RArc.h"
            
                #include "RDocument.h"
            
                #include "RExporter.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaDimensionEntity.h"
                 void REcmaDimAngularEntity::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RDimAngularEntity*) 0)));
        protoCreated = true;
    }

    
        // primary base class RDimensionEntity:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RDimensionEntity*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RDimensionEntity
        REcmaHelper::registerFunction(&engine, proto, getRDimensionEntity, "getRDimensionEntity");
        
        // conversion for base class REntity
        REcmaHelper::registerFunction(&engine, proto, getREntity, "getREntity");
        
        // conversion for base class RObject
        REcmaHelper::registerFunction(&engine, proto, getRObject, "getRObject");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getData, "getData");
            
            REcmaHelper::registerFunction(&engine, proto, setExtensionLine1End, "setExtensionLine1End");
            
            REcmaHelper::registerFunction(&engine, proto, getExtensionLine1End, "getExtensionLine1End");
            
            REcmaHelper::registerFunction(&engine, proto, setExtensionLine2End, "setExtensionLine2End");
            
            REcmaHelper::registerFunction(&engine, proto, getExtensionLine2End, "getExtensionLine2End");
            
            REcmaHelper::registerFunction(&engine, proto, setDimArcPosition, "setDimArcPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getDimArcPosition, "getDimArcPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getDimensionArc, "getDimensionArc");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RDimAngularEntity*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, init, "init");
            

    // static properties:
    
            ctor.setProperty("PropertyCustom",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyCustom),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyHandle",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyHandle),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyProtected",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyProtected),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyWorkingSet",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyWorkingSet),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyType",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyType),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyBlock",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyBlock),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLayer",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyLayer),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLinetype",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyLinetype),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLinetypeScale",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyLinetypeScale),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLineweight",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyLineweight),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyColor",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyColor),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDisplayedColor",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDisplayedColor),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDrawOrder",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDrawOrder),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyMiddleOfTextX",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyMiddleOfTextX),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyMiddleOfTextY",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyMiddleOfTextY),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyMiddleOfTextZ",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyMiddleOfTextZ),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyText",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyText),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyUpperTolerance",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyUpperTolerance),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyLowerTolerance",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyLowerTolerance),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyMeasuredValue",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyMeasuredValue),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimscale",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimscale),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimtxt",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimtxt),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimgap",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimgap),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimasz",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimasz),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimexe",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimexe),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimexo",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimexo),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimtad",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimtad),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimtih",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimtih),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimtsz",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimtsz),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimdsep",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimdsep),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimaunit",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimaunit),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimadec",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimadec),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimazin",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimazin),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyArchTick",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyArchTick),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimclrt",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimclrt),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimBlockName",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimBlockName),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyAutoTextPos",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyAutoTextPos),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyFontName",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyFontName),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyArrow1Flipped",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyArrow1Flipped),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyArrow2Flipped",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyArrow2Flipped),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyExtLineFix",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyExtLineFix),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyExtLineFixLength",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyExtLineFixLength),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyCenterX",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyCenterX),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyCenterY",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyCenterY),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyCenterZ",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyCenterZ),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyExtensionLine1EndX",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyExtensionLine1EndX),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyExtensionLine1EndY",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyExtensionLine1EndY),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyExtensionLine1EndZ",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyExtensionLine1EndZ),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyExtensionLine2EndX",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyExtensionLine2EndX),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyExtensionLine2EndY",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyExtensionLine2EndY),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyExtensionLine2EndZ",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyExtensionLine2EndZ),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimArcPositionX",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimArcPositionX),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimArcPositionY",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimArcPositionY),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("PropertyDimArcPositionZ",
                qScriptValueFromValue(&engine, RDimAngularEntity::PropertyDimArcPositionZ),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RDimAngularEntity",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaDimAngularEntity::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RDimAngularEntity: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaDimAngularEntity::getRDimensionEntity(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RDimensionEntity* cppResult =
                    qscriptvalue_cast<RDimAngularEntity*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDimAngularEntity::getREntity(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                REntity* cppResult =
                    qscriptvalue_cast<RDimAngularEntity*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDimAngularEntity::getRObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RObject* cppResult =
                    qscriptvalue_cast<RDimAngularEntity*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaDimAngularEntity::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RDimAngularEntity"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaDimAngularEntity::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RDimensionEntity");
    
        list.append("REntity");
    
        list.append("RObject");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaDimAngularEntity::init
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAngularEntity::init", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAngularEntity::init";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDimAngularEntity::
       init();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAngularEntity.init().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAngularEntity::init", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAngularEntity::getData
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAngularEntity::getData", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAngularEntity::getData";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAngularEntity* self = 
                        getSelf("getData", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RDimAngularData &'
    RDimAngularData & cppResult =
        
               self->getData();
        // return type: RDimAngularData &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'const RDimAngularData &'
    const RDimAngularData & cppResult =
        
               self->getData();
        // return type: const RDimAngularData &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAngularEntity.getData().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAngularEntity::getData", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAngularEntity::setExtensionLine1End
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAngularEntity::setExtensionLine1End", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAngularEntity::setExtensionLine1End";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAngularEntity* self = 
                        getSelf("setExtensionLine1End", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RDimAngularEntity: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setExtensionLine1End(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAngularEntity.setExtensionLine1End().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAngularEntity::setExtensionLine1End", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAngularEntity::getExtensionLine1End
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAngularEntity::getExtensionLine1End", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAngularEntity::getExtensionLine1End";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAngularEntity* self = 
                        getSelf("getExtensionLine1End", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getExtensionLine1End();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAngularEntity.getExtensionLine1End().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAngularEntity::getExtensionLine1End", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAngularEntity::setExtensionLine2End
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAngularEntity::setExtensionLine2End", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAngularEntity::setExtensionLine2End";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAngularEntity* self = 
                        getSelf("setExtensionLine2End", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RDimAngularEntity: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setExtensionLine2End(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAngularEntity.setExtensionLine2End().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAngularEntity::setExtensionLine2End", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAngularEntity::getExtensionLine2End
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAngularEntity::getExtensionLine2End", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAngularEntity::getExtensionLine2End";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAngularEntity* self = 
                        getSelf("getExtensionLine2End", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getExtensionLine2End();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAngularEntity.getExtensionLine2End().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAngularEntity::getExtensionLine2End", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAngularEntity::setDimArcPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAngularEntity::setDimArcPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAngularEntity::setDimArcPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAngularEntity* self = 
                        getSelf("setDimArcPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RDimAngularEntity: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setDimArcPosition(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAngularEntity.setDimArcPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAngularEntity::setDimArcPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAngularEntity::getDimArcPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAngularEntity::getDimArcPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAngularEntity::getDimArcPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAngularEntity* self = 
                        getSelf("getDimArcPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getDimArcPosition();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAngularEntity.getDimArcPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAngularEntity::getDimArcPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAngularEntity::getDimensionArc
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAngularEntity::getDimensionArc", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAngularEntity::getDimensionArc";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAngularEntity* self = 
                        getSelf("getDimensionArc", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RArc'
    RArc cppResult =
        
               self->getDimensionArc();
        // return type: RArc
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAngularEntity.getDimensionArc().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAngularEntity::getDimensionArc", context, engine);
            return result;
        }
         QScriptValue REcmaDimAngularEntity::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RDimAngularEntity* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RDimAngularEntity(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaDimAngularEntity::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RDimAngularEntity* self = getSelf("RDimAngularEntity", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RDimAngularEntity* REcmaDimAngularEntity::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RDimAngularEntity* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RDimAngularEntity >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RDimAngularEntity.%1(): "
                        "This object is not a RDimAngularEntity").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RDimAngularEntity* REcmaDimAngularEntity::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RDimAngularEntity* selfBase = getSelf(fName, context);
                RDimAngularEntity* self = dynamic_cast<RDimAngularEntity*>(selfBase);
                //return REcmaHelper::scriptValueTo<RDimAngularEntity >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RDimAngularEntity.%1(): "
                    "This object is not a RDimAngularEntity").arg(fName),
                    context);
            }

            return self;
            


        }
        