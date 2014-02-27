/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:10 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtDesigner.h"

#line 34 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtDesigner/qpydesignermembersheetextension.sip"
#include <qpydesignermembersheetextension.h>
#line 39 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"

#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 46 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 303 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 55 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 58 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 61 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 64 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 125 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 67 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 70 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 73 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 76 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 79 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"


class sipQPyDesignerMemberSheetExtension : public QPyDesignerMemberSheetExtension
{
public:
    sipQPyDesignerMemberSheetExtension(QObject *);
    virtual ~sipQPyDesignerMemberSheetExtension();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject * sipProtect_sender() const;
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);
    int count() const;
    int indexOf(const QString&) const;
    QString memberName(int) const;
    QString memberGroup(int) const;
    void setMemberGroup(int,const QString&);
    bool isVisible(int) const;
    void setVisible(int,bool);
    bool isSignal(int) const;
    bool isSlot(int) const;
    bool inheritedFromWidget(int) const;
    QString declaredInClass(int) const;
    QString signature(int) const;
    QList<QByteArray> parameterTypes(int) const;
    QList<QByteArray> parameterNames(int) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPyDesignerMemberSheetExtension(const sipQPyDesignerMemberSheetExtension &);
    sipQPyDesignerMemberSheetExtension &operator = (const sipQPyDesignerMemberSheetExtension &);

    char sipPyMethods[21];
};

sipQPyDesignerMemberSheetExtension::sipQPyDesignerMemberSheetExtension(QObject *a0): QPyDesignerMemberSheetExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerMemberSheetExtension::~sipQPyDesignerMemberSheetExtension()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerMemberSheetExtension::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerMemberSheetExtension);
}

int sipQPyDesignerMemberSheetExtension::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPyDesignerMemberSheetExtension::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerMemberSheetExtension,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerMemberSheetExtension::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast && sip_QtDesigner_qt_metacast(sipPySelf,sipType_QPyDesignerMemberSheetExtension,_clname)) ? this : QPyDesignerMemberSheetExtension::qt_metacast(_clname);
}

bool sipQPyDesignerMemberSheetExtension::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQPyDesignerMemberSheetExtension::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQPyDesignerMemberSheetExtension::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t,PyObject *,QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[9]))(sipGILState,meth,a0);
}

void sipQPyDesignerMemberSheetExtension::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t,PyObject *,QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[25]))(sipGILState,meth,a0);
}

void sipQPyDesignerMemberSheetExtension::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQPyDesignerMemberSheetExtension::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

void sipQPyDesignerMemberSheetExtension::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

int sipQPyDesignerMemberSheetExtension::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_count);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState,meth);
}

int sipQPyDesignerMemberSheetExtension::indexOf(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_indexOf);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtGui_112)(sip_gilstate_t,PyObject *,const QString&);

    return ((sipVH_QtGui_112)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[112]))(sipGILState,meth,a0);
}

QString sipQPyDesignerMemberSheetExtension::memberName(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_memberName);

    if (!meth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState,meth,a0);
}

QString sipQPyDesignerMemberSheetExtension::memberGroup(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_memberGroup);

    if (!meth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState,meth,a0);
}

void sipQPyDesignerMemberSheetExtension::setMemberGroup(int a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_setMemberGroup);

    if (!meth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t,PyObject *,int,const QString&);

    sipVH_QtDesigner_4(sipGILState,meth,a0,a1);
}

bool sipQPyDesignerMemberSheetExtension::isVisible(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_isVisible);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState,meth,a0);
}

void sipQPyDesignerMemberSheetExtension::setVisible(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_setVisible);

    if (!meth)
        return;

    extern void sipVH_QtDesigner_3(sip_gilstate_t,PyObject *,int,bool);

    sipVH_QtDesigner_3(sipGILState,meth,a0,a1);
}

bool sipQPyDesignerMemberSheetExtension::isSignal(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_isSignal);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState,meth,a0);
}

bool sipQPyDesignerMemberSheetExtension::isSlot(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_isSlot);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState,meth,a0);
}

bool sipQPyDesignerMemberSheetExtension::inheritedFromWidget(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[16]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_inheritedFromWidget);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState,meth,a0);
}

QString sipQPyDesignerMemberSheetExtension::declaredInClass(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_declaredInClass);

    if (!meth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState,meth,a0);
}

QString sipQPyDesignerMemberSheetExtension::signature(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[18]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_signature);

    if (!meth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState,meth,a0);
}

QList<QByteArray> sipQPyDesignerMemberSheetExtension::parameterTypes(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[19]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_parameterTypes);

    if (!meth)
        return QList<QByteArray>();

    extern QList<QByteArray> sipVH_QtDesigner_5(sip_gilstate_t,PyObject *,int);

    return sipVH_QtDesigner_5(sipGILState,meth,a0);
}

QList<QByteArray> sipQPyDesignerMemberSheetExtension::parameterNames(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[20]),sipPySelf,sipName_QPyDesignerMemberSheetExtension,sipName_parameterNames);

    if (!meth)
        return QList<QByteArray>();

    extern QList<QByteArray> sipVH_QtDesigner_5(sip_gilstate_t,PyObject *,int);

    return sipVH_QtDesigner_5(sipGILState,meth,a0);
}

QObject * sipQPyDesignerMemberSheetExtension::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQPyDesignerMemberSheetExtension::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQPyDesignerMemberSheetExtension::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQPyDesignerMemberSheetExtension::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQPyDesignerMemberSheetExtension::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQPyDesignerMemberSheetExtension::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQPyDesignerMemberSheetExtension::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}


extern "C" {static PyObject *meth_QPyDesignerMemberSheetExtension_sender(PyObject *, PyObject *);}
static PyObject *meth_QPyDesignerMemberSheetExtension_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQPyDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyDesignerMemberSheetExtension, &sipCpp))
        {
            QObject *sipRes = 0;

#line 529 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        typedef QObject *(*helper_func)(QObject *);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_sender");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp->sender());
        #else
            sipRes = helper(sipCpp->sipProtect_sender());
        #endif
#line 563 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyDesignerMemberSheetExtension, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyDesignerMemberSheetExtension_receivers(PyObject *, PyObject *);}
static PyObject *meth_QPyDesignerMemberSheetExtension_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        char * a0;
        sipQPyDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QPyDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            int sipRes = 0;

#line 546 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp, a0, sipCpp->receivers(a0));
        #else
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
        #endif
#line 605 "sipQtDesignerQPyDesignerMemberSheetExtension.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyDesignerMemberSheetExtension, sipName_receivers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyDesignerMemberSheetExtension_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QPyDesignerMemberSheetExtension_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQPyDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QPyDesignerMemberSheetExtension, &sipCpp, sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyDesignerMemberSheetExtension, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyDesignerMemberSheetExtension_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QPyDesignerMemberSheetExtension_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQPyDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QPyDesignerMemberSheetExtension, &sipCpp, sipType_QChildEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyDesignerMemberSheetExtension, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyDesignerMemberSheetExtension_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QPyDesignerMemberSheetExtension_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQPyDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QPyDesignerMemberSheetExtension, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyDesignerMemberSheetExtension, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyDesignerMemberSheetExtension_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QPyDesignerMemberSheetExtension_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQPyDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QPyDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyDesignerMemberSheetExtension, sipName_connectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyDesignerMemberSheetExtension_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QPyDesignerMemberSheetExtension_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQPyDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QPyDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyDesignerMemberSheetExtension, sipName_disconnectNotify, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPyDesignerMemberSheetExtension(void *, const sipTypeDef *);}
static void *cast_QPyDesignerMemberSheetExtension(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPyDesignerMemberSheetExtension)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QPyDesignerMemberSheetExtension *)ptr,targetType)) != NULL)
        return res;

    if ((res = ((const sipClassTypeDef *)sipType_QDesignerMemberSheetExtension)->ctd_cast((QDesignerMemberSheetExtension *)(QPyDesignerMemberSheetExtension *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerMemberSheetExtension(void *, int);}
static void release_QPyDesignerMemberSheetExtension(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPyDesignerMemberSheetExtension *>(sipCppV);
    else
        delete reinterpret_cast<QPyDesignerMemberSheetExtension *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDesignerMemberSheetExtension(sipSimpleWrapper *);}
static void dealloc_QPyDesignerMemberSheetExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPyDesignerMemberSheetExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPyDesignerMemberSheetExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QPyDesignerMemberSheetExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QPyDesignerMemberSheetExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerMemberSheetExtension *sipCpp = 0;

    {
        QObject * a0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDesignerMemberSheetExtension(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerMemberSheetExtension[] = {{133, 0, 0}, {15, 255, 1}};


static PyMethodDef methods_QPyDesignerMemberSheetExtension[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QPyDesignerMemberSheetExtension_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QPyDesignerMemberSheetExtension_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QPyDesignerMemberSheetExtension_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QPyDesignerMemberSheetExtension_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QPyDesignerMemberSheetExtension_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), meth_QPyDesignerMemberSheetExtension_sender, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QPyDesignerMemberSheetExtension_timerEvent, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QPyDesignerMemberSheetExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerMemberSheetExtension,
        {0}
    },
    {
        sipNameNr_QPyDesignerMemberSheetExtension,
        {0, 0, 1},
        7, methods_QPyDesignerMemberSheetExtension,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QPyDesignerMemberSheetExtension,
    0,
    init_QPyDesignerMemberSheetExtension,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QPyDesignerMemberSheetExtension,
    0,
    0,
    0,
    release_QPyDesignerMemberSheetExtension,
    cast_QPyDesignerMemberSheetExtension,
    0,
    0,
    0
},
    &QPyDesignerMemberSheetExtension::staticMetaObject,
    0,
    0
};
