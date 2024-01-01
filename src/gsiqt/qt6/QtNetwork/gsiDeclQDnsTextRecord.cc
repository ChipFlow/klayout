
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2024 Matthias Koefferlein

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
*  @file gsiDeclQDnsTextRecord.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDnsTextRecord>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDnsTextRecord

//  Constructor QDnsTextRecord::QDnsTextRecord()


static void _init_ctor_QDnsTextRecord_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDnsTextRecord> ();
}

static void _call_ctor_QDnsTextRecord_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDnsTextRecord *> (new QDnsTextRecord ());
}


//  Constructor QDnsTextRecord::QDnsTextRecord(const QDnsTextRecord &other)


static void _init_ctor_QDnsTextRecord_2715 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsTextRecord & > (argspec_0);
  decl->set_return_new<QDnsTextRecord> ();
}

static void _call_ctor_QDnsTextRecord_2715 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsTextRecord &arg1 = gsi::arg_reader<const QDnsTextRecord & >() (args, heap);
  ret.write<QDnsTextRecord *> (new QDnsTextRecord (arg1));
}


// QString QDnsTextRecord::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDnsTextRecord *)cls)->name ());
}


// QDnsTextRecord &QDnsTextRecord::operator=(const QDnsTextRecord &other)


static void _init_f_operator_eq__2715 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDnsTextRecord & > (argspec_0);
  decl->set_return<QDnsTextRecord & > ();
}

static void _call_f_operator_eq__2715 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDnsTextRecord &arg1 = gsi::arg_reader<const QDnsTextRecord & >() (args, heap);
  ret.write<QDnsTextRecord & > ((QDnsTextRecord &)((QDnsTextRecord *)cls)->operator= (arg1));
}


// void QDnsTextRecord::swap(QDnsTextRecord &other)


static void _init_f_swap_2020 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QDnsTextRecord & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2020 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDnsTextRecord &arg1 = gsi::arg_reader<QDnsTextRecord & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDnsTextRecord *)cls)->swap (arg1);
}


// quint32 QDnsTextRecord::timeToLive()


static void _init_f_timeToLive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint32 > ();
}

static void _call_f_timeToLive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint32 > ((quint32)((QDnsTextRecord *)cls)->timeToLive ());
}


// QList<QByteArray> QDnsTextRecord::values()


static void _init_f_values_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_values_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QDnsTextRecord *)cls)->values ());
}



namespace gsi
{

static gsi::Methods methods_QDnsTextRecord () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsTextRecord::QDnsTextRecord()\nThis method creates an object of class QDnsTextRecord.", &_init_ctor_QDnsTextRecord_0, &_call_ctor_QDnsTextRecord_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDnsTextRecord::QDnsTextRecord(const QDnsTextRecord &other)\nThis method creates an object of class QDnsTextRecord.", &_init_ctor_QDnsTextRecord_2715, &_call_ctor_QDnsTextRecord_2715);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QDnsTextRecord::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDnsTextRecord &QDnsTextRecord::operator=(const QDnsTextRecord &other)\n", false, &_init_f_operator_eq__2715, &_call_f_operator_eq__2715);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QDnsTextRecord::swap(QDnsTextRecord &other)\n", false, &_init_f_swap_2020, &_call_f_swap_2020);
  methods += new qt_gsi::GenericMethod ("timeToLive", "@brief Method quint32 QDnsTextRecord::timeToLive()\n", true, &_init_f_timeToLive_c0, &_call_f_timeToLive_c0);
  methods += new qt_gsi::GenericMethod ("values", "@brief Method QList<QByteArray> QDnsTextRecord::values()\n", true, &_init_f_values_c0, &_call_f_values_c0);
  return methods;
}

gsi::Class<QDnsTextRecord> decl_QDnsTextRecord ("QtNetwork", "QDnsTextRecord",
  methods_QDnsTextRecord (),
  "@qt\n@brief Binding of QDnsTextRecord");


GSI_QTNETWORK_PUBLIC gsi::Class<QDnsTextRecord> &qtdecl_QDnsTextRecord () { return decl_QDnsTextRecord; }

}

