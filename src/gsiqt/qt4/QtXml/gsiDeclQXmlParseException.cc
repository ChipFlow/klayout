
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
*  @file gsiDeclQXmlParseException.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlParseException>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include "gsiDeclQtXmlTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlParseException

//  Constructor QXmlParseException::QXmlParseException(const QString &name, int c, int l, const QString &p, const QString &s)


static void _init_ctor_QXmlParseException_7177 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name", true, "QString()");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "-1");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("l", true, "-1");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("p", true, "QString()");
  decl->add_arg<const QString & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("s", true, "QString()");
  decl->add_arg<const QString & > (argspec_4);
  decl->set_return_new<QXmlParseException> ();
}

static void _call_ctor_QXmlParseException_7177 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  int arg2 = args ? args.read<int > (heap) : (int)(-1);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  const QString &arg4 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const QString &arg5 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<QXmlParseException *> (new QXmlParseException (arg1, arg2, arg3, arg4, arg5));
}


//  Constructor QXmlParseException::QXmlParseException(const QXmlParseException &other)


static void _init_ctor_QXmlParseException_3149 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlParseException & > (argspec_0);
  decl->set_return_new<QXmlParseException> ();
}

static void _call_ctor_QXmlParseException_3149 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlParseException &arg1 = args.read<const QXmlParseException & > (heap);
  ret.write<QXmlParseException *> (new QXmlParseException (arg1));
}


// int QXmlParseException::columnNumber()


static void _init_f_columnNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_columnNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlParseException *)cls)->columnNumber ());
}


// int QXmlParseException::lineNumber()


static void _init_f_lineNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lineNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlParseException *)cls)->lineNumber ());
}


// QString QXmlParseException::message()


static void _init_f_message_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_message_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlParseException *)cls)->message ());
}


// QString QXmlParseException::publicId()


static void _init_f_publicId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_publicId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlParseException *)cls)->publicId ());
}


// QString QXmlParseException::systemId()


static void _init_f_systemId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_systemId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QXmlParseException *)cls)->systemId ());
}



namespace gsi
{

static gsi::Methods methods_QXmlParseException () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlParseException::QXmlParseException(const QString &name, int c, int l, const QString &p, const QString &s)\nThis method creates an object of class QXmlParseException.", &_init_ctor_QXmlParseException_7177, &_call_ctor_QXmlParseException_7177);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlParseException::QXmlParseException(const QXmlParseException &other)\nThis method creates an object of class QXmlParseException.", &_init_ctor_QXmlParseException_3149, &_call_ctor_QXmlParseException_3149);
  methods += new qt_gsi::GenericMethod ("columnNumber", "@brief Method int QXmlParseException::columnNumber()\n", true, &_init_f_columnNumber_c0, &_call_f_columnNumber_c0);
  methods += new qt_gsi::GenericMethod ("lineNumber", "@brief Method int QXmlParseException::lineNumber()\n", true, &_init_f_lineNumber_c0, &_call_f_lineNumber_c0);
  methods += new qt_gsi::GenericMethod ("message", "@brief Method QString QXmlParseException::message()\n", true, &_init_f_message_c0, &_call_f_message_c0);
  methods += new qt_gsi::GenericMethod ("publicId", "@brief Method QString QXmlParseException::publicId()\n", true, &_init_f_publicId_c0, &_call_f_publicId_c0);
  methods += new qt_gsi::GenericMethod ("systemId", "@brief Method QString QXmlParseException::systemId()\n", true, &_init_f_systemId_c0, &_call_f_systemId_c0);
  return methods;
}

gsi::Class<QXmlParseException> decl_QXmlParseException ("QtXml", "QXmlParseException",
  methods_QXmlParseException (),
  "@qt\n@brief Binding of QXmlParseException");


GSI_QTXML_PUBLIC gsi::Class<QXmlParseException> &qtdecl_QXmlParseException () { return decl_QXmlParseException; }

}

