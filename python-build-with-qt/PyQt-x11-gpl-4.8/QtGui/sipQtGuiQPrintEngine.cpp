/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:17 2012
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

#include "sipAPIQtGui.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qprintengine.sip"
#include <qprintengine.h>
#line 39 "sipQtGuiQPrintEngine.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qprinter.sip"
#include <qprinter.h>
#line 43 "sipQtGuiQPrintEngine.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 46 "sipQtGuiQPrintEngine.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 49 "sipQtGuiQPrintEngine.cpp"


class sipQPrintEngine : public QPrintEngine
{
public:
    sipQPrintEngine();
    sipQPrintEngine(const QPrintEngine&);
    virtual ~sipQPrintEngine();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setProperty(QPrintEngine::PrintEnginePropertyKey,const QVariant&);
    QVariant property(QPrintEngine::PrintEnginePropertyKey) const;
    bool newPage();
    bool abort();
    int metric(QPaintDevice::PaintDeviceMetric) const;
    QPrinter::PrinterState printerState() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPrintEngine(const sipQPrintEngine &);
    sipQPrintEngine &operator = (const sipQPrintEngine &);

    char sipPyMethods[6];
};

sipQPrintEngine::sipQPrintEngine(): QPrintEngine(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPrintEngine::sipQPrintEngine(const QPrintEngine& a0): QPrintEngine(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPrintEngine::~sipQPrintEngine()
{
    sipCommonDtor(sipPySelf);
}

void sipQPrintEngine::setProperty(QPrintEngine::PrintEnginePropertyKey a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QPrintEngine,sipName_setProperty);

    if (!meth)
        return;

    extern void sipVH_QtGui_119(sip_gilstate_t,PyObject *,QPrintEngine::PrintEnginePropertyKey,const QVariant&);

    sipVH_QtGui_119(sipGILState,meth,a0,a1);
}

QVariant sipQPrintEngine::property(QPrintEngine::PrintEnginePropertyKey a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QPrintEngine,sipName_property);

    if (!meth)
        return QVariant();

    extern QVariant sipVH_QtGui_118(sip_gilstate_t,PyObject *,QPrintEngine::PrintEnginePropertyKey);

    return sipVH_QtGui_118(sipGILState,meth,a0);
}

bool sipQPrintEngine::newPage()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QPrintEngine,sipName_newPage);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth);
}

bool sipQPrintEngine::abort()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QPrintEngine,sipName_abort);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth);
}

int sipQPrintEngine::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QPrintEngine,sipName_metric);

    if (!meth)
        return 0;

    extern int sipVH_QtGui_14(sip_gilstate_t,PyObject *,QPaintDevice::PaintDeviceMetric);

    return sipVH_QtGui_14(sipGILState,meth,a0);
}

QPrinter::PrinterState sipQPrintEngine::printerState() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QPrintEngine,sipName_printerState);

    if (!meth)
        return (QPrinter::PrinterState)0;

    extern QPrinter::PrinterState sipVH_QtGui_117(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_117(sipGILState,meth);
}


extern "C" {static PyObject *meth_QPrintEngine_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPrintEngine::PrintEnginePropertyKey a0;
        const QVariant * a1;
        int a1State = 0;
        QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QPrintEngine, &sipCpp, sipType_QPrintEngine_PrintEnginePropertyKey, &a0, sipType_QVariant,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_setProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProperty(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_setProperty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPrintEngine_property(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_property(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPrintEngine::PrintEnginePropertyKey a0;
        QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPrintEngine, &sipCpp, sipType_QPrintEngine_PrintEnginePropertyKey, &a0))
        {
            QVariant *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_property);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->property(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_property, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPrintEngine_newPage(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_newPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrintEngine, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_newPage);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->newPage();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_newPage, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPrintEngine_abort(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_abort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrintEngine, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_abort);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->abort();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_abort, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPrintEngine_metric(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_metric(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPaintDevice::PaintDeviceMetric a0;
        QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPrintEngine, &sipCpp, sipType_QPaintDevice_PaintDeviceMetric, &a0))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_metric);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->metric(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_metric, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPrintEngine_printerState(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_printerState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrintEngine, &sipCpp))
        {
            QPrinter::PrinterState sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_printerState);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->printerState();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QPrinter_PrinterState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_printerState, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPrintEngine(void *, const sipTypeDef *);}
static void *cast_QPrintEngine(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPrintEngine)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPrintEngine(void *, int);}
static void release_QPrintEngine(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPrintEngine *>(sipCppV);
    else
        delete reinterpret_cast<QPrintEngine *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPrintEngine(sipSimpleWrapper *);}
static void dealloc_QPrintEngine(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPrintEngine *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPrintEngine(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QPrintEngine(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QPrintEngine(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPrintEngine *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPrintEngine();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPrintEngine * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPrintEngine, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPrintEngine(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPrintEngine[] = {
    {SIP_MLNAME_CAST(sipName_abort), meth_QPrintEngine_abort, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_metric), meth_QPrintEngine_metric, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_newPage), meth_QPrintEngine_newPage, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_printerState), meth_QPrintEngine_printerState, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_property), meth_QPrintEngine_property, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QPrintEngine_setProperty, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QPrintEngine[] = {
    {sipName_PPK_CollateCopies, QPrintEngine::PPK_CollateCopies, 398},
    {sipName_PPK_ColorMode, QPrintEngine::PPK_ColorMode, 398},
    {sipName_PPK_CopyCount, QPrintEngine::PPK_CopyCount, 398},
    {sipName_PPK_Creator, QPrintEngine::PPK_Creator, 398},
    {sipName_PPK_CustomBase, QPrintEngine::PPK_CustomBase, 398},
    {sipName_PPK_CustomPaperSize, QPrintEngine::PPK_CustomPaperSize, 398},
    {sipName_PPK_DocumentName, QPrintEngine::PPK_DocumentName, 398},
    {sipName_PPK_Duplex, QPrintEngine::PPK_Duplex, 398},
    {sipName_PPK_FontEmbedding, QPrintEngine::PPK_FontEmbedding, 398},
    {sipName_PPK_FullPage, QPrintEngine::PPK_FullPage, 398},
    {sipName_PPK_NumberOfCopies, QPrintEngine::PPK_NumberOfCopies, 398},
    {sipName_PPK_Orientation, QPrintEngine::PPK_Orientation, 398},
    {sipName_PPK_OutputFileName, QPrintEngine::PPK_OutputFileName, 398},
    {sipName_PPK_PageMargins, QPrintEngine::PPK_PageMargins, 398},
    {sipName_PPK_PageOrder, QPrintEngine::PPK_PageOrder, 398},
    {sipName_PPK_PageRect, QPrintEngine::PPK_PageRect, 398},
    {sipName_PPK_PageSize, QPrintEngine::PPK_PageSize, 398},
    {sipName_PPK_PaperRect, QPrintEngine::PPK_PaperRect, 398},
    {sipName_PPK_PaperSize, QPrintEngine::PPK_PaperSize, 398},
    {sipName_PPK_PaperSource, QPrintEngine::PPK_PaperSource, 398},
    {sipName_PPK_PaperSources, QPrintEngine::PPK_PaperSources, 398},
    {sipName_PPK_PrinterName, QPrintEngine::PPK_PrinterName, 398},
    {sipName_PPK_PrinterProgram, QPrintEngine::PPK_PrinterProgram, 398},
    {sipName_PPK_Resolution, QPrintEngine::PPK_Resolution, 398},
    {sipName_PPK_SelectionOption, QPrintEngine::PPK_SelectionOption, 398},
    {sipName_PPK_SupportedResolutions, QPrintEngine::PPK_SupportedResolutions, 398},
    {sipName_PPK_SupportsMultipleCopies, QPrintEngine::PPK_SupportsMultipleCopies, 398},
    {sipName_PPK_SuppressSystemPrintStatus, QPrintEngine::PPK_SuppressSystemPrintStatus, 398},
    {sipName_PPK_WindowsPageSize, QPrintEngine::PPK_WindowsPageSize, 398},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QPrintEngine = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QPrintEngine,
        {0}
    },
    {
        sipNameNr_QPrintEngine,
        {0, 0, 1},
        6, methods_QPrintEngine,
        29, enummembers_QPrintEngine,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QPrintEngine,
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
    dealloc_QPrintEngine,
    0,
    0,
    0,
    release_QPrintEngine,
    cast_QPrintEngine,
    0,
    0,
    0
},
    0,
    0,
    0
};
