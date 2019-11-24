/* Generated code for Python source for module '__main__'
 * created by Nuitka version 0.5.28.2
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module___main__ is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The module constants used, if any. */
static PyObject *const_str_plain_cv2;
static PyObject *const_str_plain___package__;
extern PyObject *const_str_plain___main__;
static PyObject *const_str_plain_iCam;
static PyObject *const_str_plain_CAP_PROP_FPS;
static PyObject *const_tuple_int_pos_3_int_pos_2560_tuple;
static PyObject *const_str_plain_fCam;
static PyObject *const_str_plain_eyeCam;
static PyObject *const_str_plain_VideoCapture;
static PyObject *const_str_plain_time;
static PyObject *const_str_plain_debugShowFocus;
static PyObject *const_tuple_int_pos_4_int_pos_960_tuple;
extern PyObject *const_str_plain_site;
static PyObject *const_str_plain_set;
static PyObject *const_str_plain_types;
static PyObject *const_str_plain_threading;
static PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_plain_os;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain___version__;
static PyObject *const_str_angle_module;
static PyObject *const_int_pos_4;
static PyObject *const_int_pos_2;
static PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_forwardCam;
static PyObject *const_str_digest_f34cdca74fc16abcad2cddea5a06d6ae;
static PyObject *const_int_pos_2560;
static PyObject *const_str_plain_debugShowForward;
static PyObject *const_int_pos_960;
static PyObject *const_str_plain_debugShowEyes;
static PyObject *const_int_pos_60;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_cv2 = UNSTREAM_STRING( &constant_bin[ 0 ], 3, 1 );
    const_str_plain___package__ = UNSTREAM_STRING( &constant_bin[ 3 ], 11, 1 );
    const_str_plain_iCam = UNSTREAM_STRING( &constant_bin[ 14 ], 4, 1 );
    const_str_plain_CAP_PROP_FPS = UNSTREAM_STRING( &constant_bin[ 18 ], 12, 1 );
    const_tuple_int_pos_3_int_pos_2560_tuple = PyTuple_New( 2 );
    const_int_pos_3 = PyInt_FromLong( 3l );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_2560_tuple, 0, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    const_int_pos_2560 = PyInt_FromLong( 2560l );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_2560_tuple, 1, const_int_pos_2560 ); Py_INCREF( const_int_pos_2560 );
    const_str_plain_fCam = UNSTREAM_STRING( &constant_bin[ 30 ], 4, 1 );
    const_str_plain_eyeCam = UNSTREAM_STRING( &constant_bin[ 34 ], 6, 1 );
    const_str_plain_VideoCapture = UNSTREAM_STRING( &constant_bin[ 40 ], 12, 1 );
    const_str_plain_time = UNSTREAM_STRING( &constant_bin[ 52 ], 4, 1 );
    const_str_plain_debugShowFocus = UNSTREAM_STRING( &constant_bin[ 56 ], 14, 1 );
    const_tuple_int_pos_4_int_pos_960_tuple = PyTuple_New( 2 );
    const_int_pos_4 = PyInt_FromLong( 4l );
    PyTuple_SET_ITEM( const_tuple_int_pos_4_int_pos_960_tuple, 0, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_int_pos_960 = PyInt_FromLong( 960l );
    PyTuple_SET_ITEM( const_tuple_int_pos_4_int_pos_960_tuple, 1, const_int_pos_960 ); Py_INCREF( const_int_pos_960 );
    const_str_plain_set = UNSTREAM_STRING( &constant_bin[ 70 ], 3, 1 );
    const_str_plain_types = UNSTREAM_STRING( &constant_bin[ 73 ], 5, 1 );
    const_str_plain_threading = UNSTREAM_STRING( &constant_bin[ 78 ], 9, 1 );
    const_tuple_int_0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_0_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_os = UNSTREAM_STRING( &constant_bin[ 87 ], 2, 1 );
    const_str_plain_sys = UNSTREAM_STRING( &constant_bin[ 89 ], 3, 1 );
    const_str_plain___version__ = UNSTREAM_STRING( &constant_bin[ 92 ], 11, 1 );
    const_str_angle_module = UNSTREAM_STRING( &constant_bin[ 103 ], 8, 0 );
    const_int_pos_2 = PyInt_FromLong( 2l );
    const_str_plain_forwardCam = UNSTREAM_STRING( &constant_bin[ 111 ], 10, 1 );
    const_str_digest_f34cdca74fc16abcad2cddea5a06d6ae = UNSTREAM_STRING( &constant_bin[ 121 ], 7, 0 );
    const_str_plain_debugShowForward = UNSTREAM_STRING( &constant_bin[ 128 ], 16, 1 );
    const_str_plain_debugShowEyes = UNSTREAM_STRING( &constant_bin[ 144 ], 13, 1 );
    const_int_pos_60 = PyInt_FromLong( 60l );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8ca26ae3f056453775845b7dd3135cbb;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_f34cdca74fc16abcad2cddea5a06d6ae );
    codeobj_8ca26ae3f056453775845b7dd3135cbb = MAKE_CODEOBJ( module_filename_obj, const_str_angle_module, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_main = codeobj_8ca26ae3f056453775845b7dd3135cbb;
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef___main__ =
{
    PyModuleDef_HEAD_INIT,
    "__main__",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( __main__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module___main__ );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("__main__: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("__main__: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in init__main__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module___main__ = Py_InitModule4(
        "__main__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module___main__ = PyModule_Create( &mdef___main__ );
#endif

    moduledict___main__ = MODULE_DICT( module___main__ );

    CHECK_OBJECT( module___main__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain___main__, module___main__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !1
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_print_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_8ca26ae3f056453775845b7dd3135cbb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    // Frame without reuse.
    frame_8ca26ae3f056453775845b7dd3135cbb = MAKE_MODULE_FRAME( codeobj_8ca26ae3f056453775845b7dd3135cbb, module___main__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8ca26ae3f056453775845b7dd3135cbb );
    assert( Py_REFCNT( frame_8ca26ae3f056453775845b7dd3135cbb ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_os;
    tmp_level_name_1 = const_int_0;
    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 1;
    tmp_unused = IMPORT_MODULE_KW( tmp_name_name_1, NULL, NULL, NULL, tmp_level_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_name_name_2 = const_str_plain_sys;
    tmp_level_name_2 = const_int_0;
    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 1;
    tmp_unused = IMPORT_MODULE_KW( tmp_name_name_2, NULL, NULL, NULL, tmp_level_name_2 );
    assert( tmp_unused != NULL );
    Py_DECREF( tmp_unused );
    tmp_name_name_3 = const_str_plain_types;
    tmp_level_name_3 = const_int_0;
    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 1;
    tmp_unused = IMPORT_MODULE_KW( tmp_name_name_3, NULL, NULL, NULL, tmp_level_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_name_name_4 = const_str_plain_site;
    tmp_level_name_4 = const_int_0;
    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 1;
    tmp_unused = IMPORT_MODULE_KW( tmp_name_name_4, NULL, NULL, NULL, tmp_level_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_name_name_5 = const_str_plain_cv2;
    tmp_globals_name_5 = (PyObject *)moduledict___main__;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_cv2, tmp_assign_source_4 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_cv2 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cv2 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "cv2" );
        exception_tb = NULL;

        exception_lineno = 3;

        goto frame_exception_exit_1;
    }

    tmp_print_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___version__ );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_name_name_6 = const_str_plain_threading;
    tmp_globals_name_6 = (PyObject *)moduledict___main__;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 4;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_5 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_threading );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "threading" );
        exception_tb = NULL;

        exception_lineno = 5;

        goto frame_exception_exit_1;
    }

    tmp_print_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___version__ );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_name_name_7 = const_str_plain_time;
    tmp_globals_name_7 = (PyObject *)moduledict___main__;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = Py_None;
    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 6;
    tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
    assert( tmp_assign_source_6 != NULL );
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_6 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 7;

        goto frame_exception_exit_1;
    }

    tmp_print_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___version__ );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_debugShowEyes, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_debugShowFocus, tmp_assign_source_8 );
    tmp_assign_source_9 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_debugShowForward, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_fCam, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_iCam, tmp_assign_source_11 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_cv2 );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cv2 );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "cv2" );
        exception_tb = NULL;

        exception_lineno = 20;

        goto frame_exception_exit_1;
    }

    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 20;
    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_VideoCapture, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_forwardCam, tmp_assign_source_12 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_forwardCam );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_forwardCam );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "forwardCam" );
        exception_tb = NULL;

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 21;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_set, &PyTuple_GET_ITEM( const_tuple_int_pos_3_int_pos_2560_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_forwardCam );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_forwardCam );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "forwardCam" );
        exception_tb = NULL;

        exception_lineno = 22;

        goto frame_exception_exit_1;
    }

    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 22;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_set, &PyTuple_GET_ITEM( const_tuple_int_pos_4_int_pos_960_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_forwardCam );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_forwardCam );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "forwardCam" );
        exception_tb = NULL;

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_set );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_cv2 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cv2 );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "cv2" );
        exception_tb = NULL;

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CAP_PROP_FPS );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_int_pos_60;
    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_cv2 );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cv2 );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "cv2" );
        exception_tb = NULL;

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 25;
    tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_VideoCapture, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_eyeCam, tmp_assign_source_13 );
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_forwardCam );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_forwardCam );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "forwardCam" );
        exception_tb = NULL;

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }

    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 26;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_set, &PyTuple_GET_ITEM( const_tuple_int_pos_3_int_pos_2560_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_forwardCam );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_forwardCam );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "forwardCam" );
        exception_tb = NULL;

        exception_lineno = 27;

        goto frame_exception_exit_1;
    }

    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 27;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_set, &PyTuple_GET_ITEM( const_tuple_int_pos_4_int_pos_960_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_forwardCam );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_forwardCam );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "forwardCam" );
        exception_tb = NULL;

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_set );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_cv2 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cv2 );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "cv2" );
        exception_tb = NULL;

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_CAP_PROP_FPS );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_pos_60;
    frame_8ca26ae3f056453775845b7dd3135cbb->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ca26ae3f056453775845b7dd3135cbb );
#endif
    popFrameStack();

    assertFrameObject( frame_8ca26ae3f056453775845b7dd3135cbb );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ca26ae3f056453775845b7dd3135cbb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ca26ae3f056453775845b7dd3135cbb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ca26ae3f056453775845b7dd3135cbb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ca26ae3f056453775845b7dd3135cbb, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module___main__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
