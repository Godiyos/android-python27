/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:36 2012
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

#include "sipAPIQtOpenGL.h"

#line 86 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 39 "sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"

#line 86 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 43 "sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"


extern "C" {static int slot_QGLFormat_OpenGLVersionFlags___bool__(PyObject *);}
static int slot_QGLFormat_OpenGLVersionFlags___bool__(PyObject *sipSelf)
{
    QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"
            sipReleaseType(const_cast<QGLFormat::OpenGLVersionFlags *>(a0),sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,ne_slot,sipType_QGLFormat_OpenGLVersionFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"
            sipReleaseType(const_cast<QGLFormat::OpenGLVersionFlags *>(a0),sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,eq_slot,sipType_QGLFormat_OpenGLVersionFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___invert__(PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___invert__(PyObject *sipSelf)
{
    QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QGLFormat::OpenGLVersionFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLFormat::OpenGLVersionFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State, &a1))
        {
            QGLFormat::OpenGLVersionFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLFormat::OpenGLVersionFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;
        QGLFormat::OpenGLVersionFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State, sipType_QGLFormat_OpenGLVersionFlags, &a1, &a1State))
        {
            QGLFormat::OpenGLVersionFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLFormat::OpenGLVersionFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);
            sipReleaseType(a1,sipType_QGLFormat_OpenGLVersionFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,NULL);
        }
    }

    {
        QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State, &a1))
        {
            QGLFormat::OpenGLVersionFlags *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QGLFormat::OpenGLVersionFlags(*a0 ^ a1);
#line 232 "sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;
        QGLFormat::OpenGLVersionFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State, sipType_QGLFormat_OpenGLVersionFlags, &a1, &a1State))
        {
            QGLFormat::OpenGLVersionFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLFormat::OpenGLVersionFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);
            sipReleaseType(a1,sipType_QGLFormat_OpenGLVersionFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,NULL);
        }
    }

    {
        QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State, &a1))
        {
            QGLFormat::OpenGLVersionFlags *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QGLFormat::OpenGLVersionFlags(*a0 | a1);
#line 284 "sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___int__(PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___int__(PyObject *sipSelf)
{
    QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGLFormat::OpenGLVersionFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGLFormat::OpenGLVersionFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGLFormat::OpenGLVersionFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGLFormat_OpenGLVersionFlags(void *, const sipTypeDef *);}
static void *cast_QGLFormat_OpenGLVersionFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGLFormat_OpenGLVersionFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGLFormat_OpenGLVersionFlags(void *, int);}
static void release_QGLFormat_OpenGLVersionFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGLFormat_OpenGLVersionFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QGLFormat_OpenGLVersionFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGLFormat::OpenGLVersionFlags *>(sipSrc);
}


extern "C" {static void *array_QGLFormat_OpenGLVersionFlags(SIP_SSIZE_T);}
static void *array_QGLFormat_OpenGLVersionFlags(SIP_SSIZE_T sipNrElem)
{
    return new QGLFormat::OpenGLVersionFlags[sipNrElem];
}


extern "C" {static void *copy_QGLFormat_OpenGLVersionFlags(const void *, SIP_SSIZE_T);}
static void *copy_QGLFormat_OpenGLVersionFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGLFormat::OpenGLVersionFlags(reinterpret_cast<const QGLFormat::OpenGLVersionFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGLFormat_OpenGLVersionFlags(sipSimpleWrapper *);}
static void dealloc_QGLFormat_OpenGLVersionFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGLFormat_OpenGLVersionFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QGLFormat_OpenGLVersionFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QGLFormat_OpenGLVersionFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGLFormat::OpenGLVersionFlags *sipCpp = 0;

    {
        const QGLFormat::OpenGLVersionFlags * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLFormat::OpenGLVersionFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QGLFormat::OpenGLVersionFlags *>(a0),sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLFormat::OpenGLVersionFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLFormat::OpenGLVersionFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGLFormat_OpenGLVersionFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGLFormat_OpenGLVersionFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGLFormat::OpenGLVersionFlags **sipCppPtr = reinterpret_cast<QGLFormat::OpenGLVersionFlags **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGLFormat::OpenGLVersionFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGLFormat_OpenGLVersionFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlag)))
{
    *sipCppPtr = new QGLFormat::OpenGLVersionFlags(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipConvertToType(sipPy, sipType_QGLFormat_OpenGLVersionFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 577 "sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGLFormat_OpenGLVersionFlags[] = {
    {(void *)slot_QGLFormat_OpenGLVersionFlags___bool__, bool_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___ne__, ne_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___eq__, eq_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___invert__, invert_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___and__, and_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___xor__, xor_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___or__, or_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___int__, int_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___ixor__, ixor_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___ior__, ior_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGLFormat_OpenGLVersionFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGLFormat__OpenGLVersionFlags,
        {0}
    },
    {
        sipNameNr_OpenGLVersionFlags,
        {11, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGLFormat_OpenGLVersionFlags,
    init_QGLFormat_OpenGLVersionFlags,
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
    dealloc_QGLFormat_OpenGLVersionFlags,
    assign_QGLFormat_OpenGLVersionFlags,
    array_QGLFormat_OpenGLVersionFlags,
    copy_QGLFormat_OpenGLVersionFlags,
    release_QGLFormat_OpenGLVersionFlags,
    cast_QGLFormat_OpenGLVersionFlags,
    convertTo_QGLFormat_OpenGLVersionFlags,
    0,
    0
},
    0,
    1,
    0
};
