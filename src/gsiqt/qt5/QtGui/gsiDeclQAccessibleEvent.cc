
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
*  @file gsiDeclQAccessibleEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleEvent

//  Constructor QAccessibleEvent::QAccessibleEvent(QObject *obj, QAccessible::Event typ)


static void _init_ctor_QAccessibleEvent_3347 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("typ");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Event>::target_type & > (argspec_1);
  decl->set_return_new<QAccessibleEvent> ();
}

static void _call_ctor_QAccessibleEvent_3347 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  const qt_gsi::Converter<QAccessible::Event>::target_type & arg2 = args.read<const qt_gsi::Converter<QAccessible::Event>::target_type & > (heap);
  ret.write<QAccessibleEvent *> (new QAccessibleEvent (arg1, qt_gsi::QtToCppAdaptor<QAccessible::Event>(arg2).cref()));
}


//  Constructor QAccessibleEvent::QAccessibleEvent(QAccessibleInterface *iface, QAccessible::Event typ)


static void _init_ctor_QAccessibleEvent_4667 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("iface");
  decl->add_arg<QAccessibleInterface * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("typ");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Event>::target_type & > (argspec_1);
  decl->set_return_new<QAccessibleEvent> ();
}

static void _call_ctor_QAccessibleEvent_4667 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAccessibleInterface *arg1 = args.read<QAccessibleInterface * > (heap);
  const qt_gsi::Converter<QAccessible::Event>::target_type & arg2 = args.read<const qt_gsi::Converter<QAccessible::Event>::target_type & > (heap);
  ret.write<QAccessibleEvent *> (new QAccessibleEvent (arg1, qt_gsi::QtToCppAdaptor<QAccessible::Event>(arg2).cref()));
}


// QAccessibleInterface *QAccessibleEvent::accessibleInterface()


static void _init_f_accessibleInterface_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_accessibleInterface_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleEvent *)cls)->accessibleInterface ());
}


// int QAccessibleEvent::child()


static void _init_f_child_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_child_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleEvent *)cls)->child ());
}


// QObject *QAccessibleEvent::object()


static void _init_f_object_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_object_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAccessibleEvent *)cls)->object ());
}


// void QAccessibleEvent::setChild(int chld)


static void _init_f_setChild_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("chld");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setChild_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleEvent *)cls)->setChild (arg1);
}


// QAccessible::Event QAccessibleEvent::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAccessible::Event>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAccessible::Event>::target_type > ((qt_gsi::Converter<QAccessible::Event>::target_type)qt_gsi::CppToQtAdaptor<QAccessible::Event>(((QAccessibleEvent *)cls)->type ()));
}


// unsigned int QAccessibleEvent::uniqueId()


static void _init_f_uniqueId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned int > ();
}

static void _call_f_uniqueId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned int > ((unsigned int)((QAccessibleEvent *)cls)->uniqueId ());
}



namespace gsi
{

static gsi::Methods methods_QAccessibleEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleEvent::QAccessibleEvent(QObject *obj, QAccessible::Event typ)\nThis method creates an object of class QAccessibleEvent.", &_init_ctor_QAccessibleEvent_3347, &_call_ctor_QAccessibleEvent_3347);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleEvent::QAccessibleEvent(QAccessibleInterface *iface, QAccessible::Event typ)\nThis method creates an object of class QAccessibleEvent.", &_init_ctor_QAccessibleEvent_4667, &_call_ctor_QAccessibleEvent_4667);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@brief Method QAccessibleInterface *QAccessibleEvent::accessibleInterface()\n", true, &_init_f_accessibleInterface_c0, &_call_f_accessibleInterface_c0);
  methods += new qt_gsi::GenericMethod (":child", "@brief Method int QAccessibleEvent::child()\n", true, &_init_f_child_c0, &_call_f_child_c0);
  methods += new qt_gsi::GenericMethod ("object", "@brief Method QObject *QAccessibleEvent::object()\n", true, &_init_f_object_c0, &_call_f_object_c0);
  methods += new qt_gsi::GenericMethod ("setChild|child=", "@brief Method void QAccessibleEvent::setChild(int chld)\n", false, &_init_f_setChild_767, &_call_f_setChild_767);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QAccessible::Event QAccessibleEvent::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  methods += new qt_gsi::GenericMethod ("uniqueId", "@brief Method unsigned int QAccessibleEvent::uniqueId()\n", true, &_init_f_uniqueId_c0, &_call_f_uniqueId_c0);
  return methods;
}

gsi::Class<QAccessibleEvent> decl_QAccessibleEvent ("QtGui", "QAccessibleEvent",
  methods_QAccessibleEvent (),
  "@qt\n@brief Binding of QAccessibleEvent");


GSI_QTGUI_PUBLIC gsi::Class<QAccessibleEvent> &qtdecl_QAccessibleEvent () { return decl_QAccessibleEvent; }

}

