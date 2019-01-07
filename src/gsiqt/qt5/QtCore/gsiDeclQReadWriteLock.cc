
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQReadWriteLock.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QReadWriteLock>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QReadWriteLock

//  Constructor QReadWriteLock::QReadWriteLock(QReadWriteLock::RecursionMode recursionMode)


static void _init_ctor_QReadWriteLock_3272 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("recursionMode", true, "QReadWriteLock::NonRecursive");
  decl->add_arg<const qt_gsi::Converter<QReadWriteLock::RecursionMode>::target_type & > (argspec_0);
  decl->set_return_new<QReadWriteLock> ();
}

static void _call_ctor_QReadWriteLock_3272 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QReadWriteLock::RecursionMode>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<QReadWriteLock::RecursionMode>::target_type & > (heap) : (const qt_gsi::Converter<QReadWriteLock::RecursionMode>::target_type &)(qt_gsi::CppToQtReadAdaptor<QReadWriteLock::RecursionMode>(heap, QReadWriteLock::NonRecursive));
  ret.write<QReadWriteLock *> (new QReadWriteLock (qt_gsi::QtToCppAdaptor<QReadWriteLock::RecursionMode>(arg1).cref()));
}


// void QReadWriteLock::lockForRead()


static void _init_f_lockForRead_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_lockForRead_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QReadWriteLock *)cls)->lockForRead ();
}


// void QReadWriteLock::lockForWrite()


static void _init_f_lockForWrite_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_lockForWrite_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QReadWriteLock *)cls)->lockForWrite ();
}


// bool QReadWriteLock::tryLockForRead()


static void _init_f_tryLockForRead_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_tryLockForRead_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QReadWriteLock *)cls)->tryLockForRead ());
}


// bool QReadWriteLock::tryLockForRead(int timeout)


static void _init_f_tryLockForRead_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timeout");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_tryLockForRead_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QReadWriteLock *)cls)->tryLockForRead (arg1));
}


// bool QReadWriteLock::tryLockForWrite()


static void _init_f_tryLockForWrite_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_tryLockForWrite_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QReadWriteLock *)cls)->tryLockForWrite ());
}


// bool QReadWriteLock::tryLockForWrite(int timeout)


static void _init_f_tryLockForWrite_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timeout");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_tryLockForWrite_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QReadWriteLock *)cls)->tryLockForWrite (arg1));
}


// void QReadWriteLock::unlock()


static void _init_f_unlock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unlock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QReadWriteLock *)cls)->unlock ();
}



namespace gsi
{

static gsi::Methods methods_QReadWriteLock () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QReadWriteLock::QReadWriteLock(QReadWriteLock::RecursionMode recursionMode)\nThis method creates an object of class QReadWriteLock.", &_init_ctor_QReadWriteLock_3272, &_call_ctor_QReadWriteLock_3272);
  methods += new qt_gsi::GenericMethod ("lockForRead", "@brief Method void QReadWriteLock::lockForRead()\n", false, &_init_f_lockForRead_0, &_call_f_lockForRead_0);
  methods += new qt_gsi::GenericMethod ("lockForWrite", "@brief Method void QReadWriteLock::lockForWrite()\n", false, &_init_f_lockForWrite_0, &_call_f_lockForWrite_0);
  methods += new qt_gsi::GenericMethod ("tryLockForRead", "@brief Method bool QReadWriteLock::tryLockForRead()\n", false, &_init_f_tryLockForRead_0, &_call_f_tryLockForRead_0);
  methods += new qt_gsi::GenericMethod ("tryLockForRead", "@brief Method bool QReadWriteLock::tryLockForRead(int timeout)\n", false, &_init_f_tryLockForRead_767, &_call_f_tryLockForRead_767);
  methods += new qt_gsi::GenericMethod ("tryLockForWrite", "@brief Method bool QReadWriteLock::tryLockForWrite()\n", false, &_init_f_tryLockForWrite_0, &_call_f_tryLockForWrite_0);
  methods += new qt_gsi::GenericMethod ("tryLockForWrite", "@brief Method bool QReadWriteLock::tryLockForWrite(int timeout)\n", false, &_init_f_tryLockForWrite_767, &_call_f_tryLockForWrite_767);
  methods += new qt_gsi::GenericMethod ("unlock", "@brief Method void QReadWriteLock::unlock()\n", false, &_init_f_unlock_0, &_call_f_unlock_0);
  return methods;
}

gsi::Class<QReadWriteLock> decl_QReadWriteLock ("QtCore", "QReadWriteLock",
  methods_QReadWriteLock (),
  "@qt\n@brief Binding of QReadWriteLock");


GSI_QTCORE_PUBLIC gsi::Class<QReadWriteLock> &qtdecl_QReadWriteLock () { return decl_QReadWriteLock; }

}


//  Implementation of the enum wrapper class for QReadWriteLock::RecursionMode
namespace qt_gsi
{

static gsi::Enum<QReadWriteLock::RecursionMode> decl_QReadWriteLock_RecursionMode_Enum ("QtCore", "QReadWriteLock_RecursionMode",
    gsi::enum_const ("NonRecursive", QReadWriteLock::NonRecursive, "@brief Enum constant QReadWriteLock::NonRecursive") +
    gsi::enum_const ("Recursive", QReadWriteLock::Recursive, "@brief Enum constant QReadWriteLock::Recursive"),
  "@qt\n@brief This class represents the QReadWriteLock::RecursionMode enum");

static gsi::QFlagsClass<QReadWriteLock::RecursionMode > decl_QReadWriteLock_RecursionMode_Enums ("QtCore", "QReadWriteLock_QFlags_RecursionMode",
  "@qt\n@brief This class represents the QFlags<QReadWriteLock::RecursionMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QReadWriteLock> inject_QReadWriteLock_RecursionMode_Enum_in_parent (decl_QReadWriteLock_RecursionMode_Enum.defs ());
static gsi::ClassExt<QReadWriteLock> decl_QReadWriteLock_RecursionMode_Enum_as_child (decl_QReadWriteLock_RecursionMode_Enum, "RecursionMode");
static gsi::ClassExt<QReadWriteLock> decl_QReadWriteLock_RecursionMode_Enums_as_child (decl_QReadWriteLock_RecursionMode_Enums, "QFlags_RecursionMode");

}

