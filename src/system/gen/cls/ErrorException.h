/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_ErrorException_h73c3d846__
#define __GENERATED_cls_ErrorException_h73c3d846__

#include <cls/Exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 268 */
class c_ErrorException : public c_Exception {
  public:

  // Properties
  Variant m_severity;

  // Class Map
  BEGIN_CLASS_MAP(ErrorException)
    PARENT_CLASS(Exception)
  END_CLASS_MAP(ErrorException)
  DECLARE_CLASS_COMMON(ErrorException, ErrorException)
  DECLARE_INVOKE_EX(ErrorException, ErrorException, Exception)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_ErrorException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_ErrorException 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_ErrorException 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props) const;
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_ErrorException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_ErrorException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_ErrorException 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual Variant *o_realPropPublic(CStrRef s, int flags) const;

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_ErrorException 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_message = NAMSTR(s_sys_ss00000000, ""), Variant v_code = 0LL, Variant v_severity = 0LL, Variant v_filename = null, Variant v_lineno = null);
  public: c_ErrorException *create(Variant v_message = NAMSTR(s_sys_ss00000000, ""), Variant v_code = 0LL, Variant v_severity = 0LL, Variant v_filename = null, Variant v_lineno = null);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_getseverity();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getseverity);
};
extern struct ObjectStaticCallbacks cw_ErrorException;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ErrorException_h73c3d846__
