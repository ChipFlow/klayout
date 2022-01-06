
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQNoDebug.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNoDebug>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNoDebug

//  Constructor QNoDebug::QNoDebug()


static void _init_ctor_QNoDebug_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QNoDebug> ();
}

static void _call_ctor_QNoDebug_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNoDebug *> (new QNoDebug ());
}


// QNoDebug &QNoDebug::maybeQuote(const char)


static void _init_f_maybeQuote_1545 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "'\"'");
  decl->add_arg<const char > (argspec_0);
  decl->set_return<QNoDebug & > ();
}

static void _call_f_maybeQuote_1545 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char arg1 = args ? gsi::arg_reader<const char >() (args, heap) : gsi::arg_maker<const char >() ('"', heap);
  ret.write<QNoDebug & > ((QNoDebug &)((QNoDebug *)cls)->maybeQuote (arg1));
}


// QNoDebug &QNoDebug::maybeSpace()


static void _init_f_maybeSpace_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNoDebug & > ();
}

static void _call_f_maybeSpace_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNoDebug & > ((QNoDebug &)((QNoDebug *)cls)->maybeSpace ());
}


// QNoDebug &QNoDebug::noquote()


static void _init_f_noquote_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNoDebug & > ();
}

static void _call_f_noquote_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNoDebug & > ((QNoDebug &)((QNoDebug *)cls)->noquote ());
}


// QNoDebug &QNoDebug::nospace()


static void _init_f_nospace_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNoDebug & > ();
}

static void _call_f_nospace_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNoDebug & > ((QNoDebug &)((QNoDebug *)cls)->nospace ());
}


// QNoDebug &QNoDebug::quote()


static void _init_f_quote_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNoDebug & > ();
}

static void _call_f_quote_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNoDebug & > ((QNoDebug &)((QNoDebug *)cls)->quote ());
}


// QNoDebug &QNoDebug::space()


static void _init_f_space_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNoDebug & > ();
}

static void _call_f_space_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNoDebug & > ((QNoDebug &)((QNoDebug *)cls)->space ());
}


// QNoDebug &QNoDebug::verbosity(int)


static void _init_f_verbosity_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QNoDebug & > ();
}

static void _call_f_verbosity_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QNoDebug & > ((QNoDebug &)((QNoDebug *)cls)->verbosity (arg1));
}



namespace gsi
{

static gsi::Methods methods_QNoDebug () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNoDebug::QNoDebug()\nThis method creates an object of class QNoDebug.", &_init_ctor_QNoDebug_0, &_call_ctor_QNoDebug_0);
  methods += new qt_gsi::GenericMethod ("maybeQuote", "@brief Method QNoDebug &QNoDebug::maybeQuote(const char)\n", false, &_init_f_maybeQuote_1545, &_call_f_maybeQuote_1545);
  methods += new qt_gsi::GenericMethod ("maybeSpace", "@brief Method QNoDebug &QNoDebug::maybeSpace()\n", false, &_init_f_maybeSpace_0, &_call_f_maybeSpace_0);
  methods += new qt_gsi::GenericMethod ("noquote", "@brief Method QNoDebug &QNoDebug::noquote()\n", false, &_init_f_noquote_0, &_call_f_noquote_0);
  methods += new qt_gsi::GenericMethod ("nospace", "@brief Method QNoDebug &QNoDebug::nospace()\n", false, &_init_f_nospace_0, &_call_f_nospace_0);
  methods += new qt_gsi::GenericMethod ("quote", "@brief Method QNoDebug &QNoDebug::quote()\n", false, &_init_f_quote_0, &_call_f_quote_0);
  methods += new qt_gsi::GenericMethod ("space", "@brief Method QNoDebug &QNoDebug::space()\n", false, &_init_f_space_0, &_call_f_space_0);
  methods += new qt_gsi::GenericMethod ("verbosity", "@brief Method QNoDebug &QNoDebug::verbosity(int)\n", false, &_init_f_verbosity_767, &_call_f_verbosity_767);
  return methods;
}

gsi::Class<QNoDebug> decl_QNoDebug ("QtCore", "QNoDebug",
  methods_QNoDebug (),
  "@qt\n@brief Binding of QNoDebug");


GSI_QTCORE_PUBLIC gsi::Class<QNoDebug> &qtdecl_QNoDebug () { return decl_QNoDebug; }

}

