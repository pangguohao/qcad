// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaCadToolBar.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RCadToolBarPanel.h"
            
                #include <QStackedLayout>
            
            
        // includes for base ecma wrapper classes
         void REcmaCadToolBar::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RCadToolBar*) 0)));
        protoCreated = true;
    }

    
        // primary base class QToolBar:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QToolBar*>());

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
    
        // conversion for base class QToolBar
        REcmaHelper::registerFunction(&engine, proto, getQToolBar, "getQToolBar");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getPanel, "getPanel");
            
            REcmaHelper::registerFunction(&engine, proto, getCurrentPanel, "getCurrentPanel");
            
            REcmaHelper::registerFunction(&engine, proto, getCurrentPanelName, "getCurrentPanelName");
            
            REcmaHelper::registerFunction(&engine, proto, showPanel, "showPanel");
            
            REcmaHelper::registerFunction(&engine, proto, back, "back");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RCadToolBar*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RCadToolBar*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RCadToolBar",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaCadToolBar::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCadToolBar(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isString()
                ) /* type: QString */
            
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RCadToolBar
                    * cppResult =
                    new
                    RCadToolBar
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    if( context->argumentCount() ==
        2
                && (
                
                        context->argument(
                        0
                        ).isString()
                ) /* type: QString */
            
                && (
                
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
            // argument isQObject
            QWidget *
            a1 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            1
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RCadToolBar
                    * cppResult =
                    new
                    RCadToolBar
                    (
                    a0
        ,
    a1
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCadToolBar(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaCadToolBar::getQToolBar(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QToolBar* cppResult =
                    qscriptvalue_cast<RCadToolBar*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaCadToolBar::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RCadToolBar"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaCadToolBar::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QToolBar");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaCadToolBar::getPanel
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCadToolBar::getPanel", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCadToolBar::getPanel";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCadToolBar* self = 
                        getSelf("getPanel", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'RCadToolBarPanel *'
    RCadToolBarPanel * cppResult =
        
               self->getPanel(a0
        ,
    a1);
        // return type: RCadToolBarPanel *
                // QObject
                result = engine->newQObject(cppResult, QScriptEngine::QtOwnership);
            
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
     && (
            context->argument(2).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument isStandardType
                    bool
                    a2 =
                    (bool)
                    
                    context->argument( 2 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'RCadToolBarPanel *'
    RCadToolBarPanel * cppResult =
        
               self->getPanel(a0
        ,
    a1
        ,
    a2);
        // return type: RCadToolBarPanel *
                // QObject
                result = engine->newQObject(cppResult, QScriptEngine::QtOwnership);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCadToolBar.getPanel().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCadToolBar::getPanel", context, engine);
            return result;
        }
         QScriptValue
        REcmaCadToolBar::getCurrentPanel
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCadToolBar::getCurrentPanel", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCadToolBar::getCurrentPanel";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCadToolBar* self = 
                        getSelf("getCurrentPanel", context);
                  

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
    // return type 'RCadToolBarPanel *'
    RCadToolBarPanel * cppResult =
        
               self->getCurrentPanel();
        // return type: RCadToolBarPanel *
                // QObject
                result = engine->newQObject(cppResult, QScriptEngine::QtOwnership);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCadToolBar.getCurrentPanel().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCadToolBar::getCurrentPanel", context, engine);
            return result;
        }
         QScriptValue
        REcmaCadToolBar::getCurrentPanelName
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCadToolBar::getCurrentPanelName", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCadToolBar::getCurrentPanelName";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCadToolBar* self = 
                        getSelf("getCurrentPanelName", context);
                  

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
    // return type 'QString'
    QString cppResult =
        
               self->getCurrentPanelName();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCadToolBar.getCurrentPanelName().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCadToolBar::getCurrentPanelName", context, engine);
            return result;
        }
         QScriptValue
        REcmaCadToolBar::showPanel
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCadToolBar::showPanel", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCadToolBar::showPanel";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCadToolBar* self = 
                        getSelf("showPanel", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->showPanel(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->showPanel(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCadToolBar.showPanel().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCadToolBar::showPanel", context, engine);
            return result;
        }
         QScriptValue
        REcmaCadToolBar::back
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCadToolBar::back", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCadToolBar::back";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCadToolBar* self = 
                        getSelf("back", context);
                  

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
    // return type 'bool'
    bool cppResult =
        
               self->back();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCadToolBar.back().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCadToolBar::back", context, engine);
            return result;
        }
         QScriptValue REcmaCadToolBar::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RCadToolBar* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RCadToolBar(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaCadToolBar::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RCadToolBar* self = getSelf("RCadToolBar", context);
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
    RCadToolBar* REcmaCadToolBar::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RCadToolBar* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RCadToolBar >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RCadToolBar.%1(): "
                        "This object is not a RCadToolBar").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RCadToolBar* REcmaCadToolBar::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RCadToolBar* selfBase = getSelf(fName, context);
                RCadToolBar* self = dynamic_cast<RCadToolBar*>(selfBase);
                //return REcmaHelper::scriptValueTo<RCadToolBar >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RCadToolBar.%1(): "
                    "This object is not a RCadToolBar").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RCadToolBar*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RCadToolBar*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RCadToolBar*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    