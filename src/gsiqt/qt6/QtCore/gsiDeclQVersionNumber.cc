
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
*  @file gsiDeclQVersionNumber.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVersionNumber>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVersionNumber

//  Constructor QVersionNumber::QVersionNumber()


static void _init_ctor_QVersionNumber_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVersionNumber> ();
}

static void _call_ctor_QVersionNumber_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVersionNumber *> (new QVersionNumber ());
}


//  Constructor QVersionNumber::QVersionNumber(const QList<int> &seg)


static void _init_ctor_QVersionNumber_2259 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("seg");
  decl->add_arg<const QList<int> & > (argspec_0);
  decl->set_return_new<QVersionNumber> ();
}

static void _call_ctor_QVersionNumber_2259 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<int> &arg1 = gsi::arg_reader<const QList<int> & >() (args, heap);
  ret.write<QVersionNumber *> (new QVersionNumber (arg1));
}


//  Constructor QVersionNumber::QVersionNumber(int maj)


static void _init_ctor_QVersionNumber_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("maj");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QVersionNumber> ();
}

static void _call_ctor_QVersionNumber_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QVersionNumber *> (new QVersionNumber (arg1));
}


//  Constructor QVersionNumber::QVersionNumber(int maj, int min)


static void _init_ctor_QVersionNumber_1426 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("maj");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("min");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QVersionNumber> ();
}

static void _call_ctor_QVersionNumber_1426 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QVersionNumber *> (new QVersionNumber (arg1, arg2));
}


//  Constructor QVersionNumber::QVersionNumber(int maj, int min, int mic)


static void _init_ctor_QVersionNumber_2085 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("maj");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("min");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mic");
  decl->add_arg<int > (argspec_2);
  decl->set_return_new<QVersionNumber> ();
}

static void _call_ctor_QVersionNumber_2085 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QVersionNumber *> (new QVersionNumber (arg1, arg2, arg3));
}


// bool QVersionNumber::isNormalized()


static void _init_f_isNormalized_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNormalized_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVersionNumber *)cls)->isNormalized ());
}


// bool QVersionNumber::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVersionNumber *)cls)->isNull ());
}


// bool QVersionNumber::isPrefixOf(const QVersionNumber &other)


static void _init_f_isPrefixOf_c2753 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QVersionNumber & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isPrefixOf_c2753 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVersionNumber &arg1 = gsi::arg_reader<const QVersionNumber & >() (args, heap);
  ret.write<bool > ((bool)((QVersionNumber *)cls)->isPrefixOf (arg1));
}


// int QVersionNumber::majorVersion()


static void _init_f_majorVersion_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_majorVersion_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVersionNumber *)cls)->majorVersion ());
}


// int QVersionNumber::microVersion()


static void _init_f_microVersion_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_microVersion_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVersionNumber *)cls)->microVersion ());
}


// int QVersionNumber::minorVersion()


static void _init_f_minorVersion_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_minorVersion_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVersionNumber *)cls)->minorVersion ());
}


// QVersionNumber QVersionNumber::normalized()


static void _init_f_normalized_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVersionNumber > ();
}

static void _call_f_normalized_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVersionNumber > ((QVersionNumber)((QVersionNumber *)cls)->normalized ());
}


// int QVersionNumber::segmentAt(int index)


static void _init_f_segmentAt_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_segmentAt_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QVersionNumber *)cls)->segmentAt (arg1));
}


// int QVersionNumber::segmentCount()


static void _init_f_segmentCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_segmentCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVersionNumber *)cls)->segmentCount ());
}


// QList<int> QVersionNumber::segments()


static void _init_f_segments_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<int> > ();
}

static void _call_f_segments_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<int> > ((QList<int>)((QVersionNumber *)cls)->segments ());
}


// QString QVersionNumber::toString()


static void _init_f_toString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_toString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QVersionNumber *)cls)->toString ());
}


// static QVersionNumber QVersionNumber::commonPrefix(const QVersionNumber &v1, const QVersionNumber &v2)


static void _init_f_commonPrefix_5398 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v1");
  decl->add_arg<const QVersionNumber & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("v2");
  decl->add_arg<const QVersionNumber & > (argspec_1);
  decl->set_return<QVersionNumber > ();
}

static void _call_f_commonPrefix_5398 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVersionNumber &arg1 = gsi::arg_reader<const QVersionNumber & >() (args, heap);
  const QVersionNumber &arg2 = gsi::arg_reader<const QVersionNumber & >() (args, heap);
  ret.write<QVersionNumber > ((QVersionNumber)QVersionNumber::commonPrefix (arg1, arg2));
}


// static int QVersionNumber::compare(const QVersionNumber &v1, const QVersionNumber &v2)


static void _init_f_compare_5398 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v1");
  decl->add_arg<const QVersionNumber & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("v2");
  decl->add_arg<const QVersionNumber & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_compare_5398 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVersionNumber &arg1 = gsi::arg_reader<const QVersionNumber & >() (args, heap);
  const QVersionNumber &arg2 = gsi::arg_reader<const QVersionNumber & >() (args, heap);
  ret.write<int > ((int)QVersionNumber::compare (arg1, arg2));
}


// static QVersionNumber QVersionNumber::fromString(const QString &string, int *suffixIndex)


static void _init_f_fromString_2870 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("string");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("suffixIndex", true, "nullptr");
  decl->add_arg<int * > (argspec_1);
  decl->set_return<QVersionNumber > ();
}

static void _call_f_fromString_2870 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  int *arg2 = args ? gsi::arg_reader<int * >() (args, heap) : gsi::arg_maker<int * >() (nullptr, heap);
  ret.write<QVersionNumber > ((QVersionNumber)QVersionNumber::fromString (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QVersionNumber () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVersionNumber::QVersionNumber()\nThis method creates an object of class QVersionNumber.", &_init_ctor_QVersionNumber_0, &_call_ctor_QVersionNumber_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVersionNumber::QVersionNumber(const QList<int> &seg)\nThis method creates an object of class QVersionNumber.", &_init_ctor_QVersionNumber_2259, &_call_ctor_QVersionNumber_2259);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVersionNumber::QVersionNumber(int maj)\nThis method creates an object of class QVersionNumber.", &_init_ctor_QVersionNumber_767, &_call_ctor_QVersionNumber_767);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVersionNumber::QVersionNumber(int maj, int min)\nThis method creates an object of class QVersionNumber.", &_init_ctor_QVersionNumber_1426, &_call_ctor_QVersionNumber_1426);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVersionNumber::QVersionNumber(int maj, int min, int mic)\nThis method creates an object of class QVersionNumber.", &_init_ctor_QVersionNumber_2085, &_call_ctor_QVersionNumber_2085);
  methods += new qt_gsi::GenericMethod ("isNormalized?", "@brief Method bool QVersionNumber::isNormalized()\n", true, &_init_f_isNormalized_c0, &_call_f_isNormalized_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QVersionNumber::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isPrefixOf?", "@brief Method bool QVersionNumber::isPrefixOf(const QVersionNumber &other)\n", true, &_init_f_isPrefixOf_c2753, &_call_f_isPrefixOf_c2753);
  methods += new qt_gsi::GenericMethod ("majorVersion", "@brief Method int QVersionNumber::majorVersion()\n", true, &_init_f_majorVersion_c0, &_call_f_majorVersion_c0);
  methods += new qt_gsi::GenericMethod ("microVersion", "@brief Method int QVersionNumber::microVersion()\n", true, &_init_f_microVersion_c0, &_call_f_microVersion_c0);
  methods += new qt_gsi::GenericMethod ("minorVersion", "@brief Method int QVersionNumber::minorVersion()\n", true, &_init_f_minorVersion_c0, &_call_f_minorVersion_c0);
  methods += new qt_gsi::GenericMethod ("normalized", "@brief Method QVersionNumber QVersionNumber::normalized()\n", true, &_init_f_normalized_c0, &_call_f_normalized_c0);
  methods += new qt_gsi::GenericMethod ("segmentAt", "@brief Method int QVersionNumber::segmentAt(int index)\n", true, &_init_f_segmentAt_c767, &_call_f_segmentAt_c767);
  methods += new qt_gsi::GenericMethod ("segmentCount", "@brief Method int QVersionNumber::segmentCount()\n", true, &_init_f_segmentCount_c0, &_call_f_segmentCount_c0);
  methods += new qt_gsi::GenericMethod ("segments", "@brief Method QList<int> QVersionNumber::segments()\n", true, &_init_f_segments_c0, &_call_f_segments_c0);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QVersionNumber::toString()\n", true, &_init_f_toString_c0, &_call_f_toString_c0);
  methods += new qt_gsi::GenericStaticMethod ("commonPrefix", "@brief Static method QVersionNumber QVersionNumber::commonPrefix(const QVersionNumber &v1, const QVersionNumber &v2)\nThis method is static and can be called without an instance.", &_init_f_commonPrefix_5398, &_call_f_commonPrefix_5398);
  methods += new qt_gsi::GenericStaticMethod ("compare", "@brief Static method int QVersionNumber::compare(const QVersionNumber &v1, const QVersionNumber &v2)\nThis method is static and can be called without an instance.", &_init_f_compare_5398, &_call_f_compare_5398);
  methods += new qt_gsi::GenericStaticMethod ("fromString", "@brief Static method QVersionNumber QVersionNumber::fromString(const QString &string, int *suffixIndex)\nThis method is static and can be called without an instance.", &_init_f_fromString_2870, &_call_f_fromString_2870);
  return methods;
}

gsi::Class<QVersionNumber> decl_QVersionNumber ("QtCore", "QVersionNumber",
  methods_QVersionNumber (),
  "@qt\n@brief Binding of QVersionNumber");


GSI_QTCORE_PUBLIC gsi::Class<QVersionNumber> &qtdecl_QVersionNumber () { return decl_QVersionNumber; }

}

