
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
*  @file gsiDeclQWriteLocker.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QWriteLocker>
#include <QReadWriteLock>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QWriteLocker

//  Constructor QWriteLocker::QWriteLocker(QReadWriteLock *readWriteLock)


static void _init_ctor_QWriteLocker_1999 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("readWriteLock");
  decl->add_arg<QReadWriteLock * > (argspec_0);
  decl->set_return_new<QWriteLocker> ();
}

static void _call_ctor_QWriteLocker_1999 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QReadWriteLock *arg1 = args.read<QReadWriteLock * > (heap);
  ret.write<QWriteLocker *> (new QWriteLocker (arg1));
}


// QReadWriteLock *QWriteLocker::readWriteLock()


static void _init_f_readWriteLock_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QReadWriteLock * > ();
}

static void _call_f_readWriteLock_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QReadWriteLock * > ((QReadWriteLock *)((QWriteLocker *)cls)->readWriteLock ());
}


// void QWriteLocker::relock()


static void _init_f_relock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_relock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWriteLocker *)cls)->relock ();
}


// void QWriteLocker::unlock()


static void _init_f_unlock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unlock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWriteLocker *)cls)->unlock ();
}



namespace gsi
{

static gsi::Methods methods_QWriteLocker () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWriteLocker::QWriteLocker(QReadWriteLock *readWriteLock)\nThis method creates an object of class QWriteLocker.", &_init_ctor_QWriteLocker_1999, &_call_ctor_QWriteLocker_1999);
  methods += new qt_gsi::GenericMethod ("readWriteLock", "@brief Method QReadWriteLock *QWriteLocker::readWriteLock()\n", true, &_init_f_readWriteLock_c0, &_call_f_readWriteLock_c0);
  methods += new qt_gsi::GenericMethod ("relock", "@brief Method void QWriteLocker::relock()\n", false, &_init_f_relock_0, &_call_f_relock_0);
  methods += new qt_gsi::GenericMethod ("unlock", "@brief Method void QWriteLocker::unlock()\n", false, &_init_f_unlock_0, &_call_f_unlock_0);
  return methods;
}

gsi::Class<QWriteLocker> decl_QWriteLocker ("QtCore", "QWriteLocker",
  methods_QWriteLocker (),
  "@qt\n@brief Binding of QWriteLocker");


GSI_QTCORE_PUBLIC gsi::Class<QWriteLocker> &qtdecl_QWriteLocker () { return decl_QWriteLocker; }

}

