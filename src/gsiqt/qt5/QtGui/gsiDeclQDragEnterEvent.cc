
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
*  @file gsiDeclQDragEnterEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDragEnterEvent>
#include <QEvent>
#include <QMimeData>
#include <QObject>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDragEnterEvent

namespace gsi
{

static gsi::Methods methods_QDragEnterEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QDragMoveEvent> &qtdecl_QDragMoveEvent ();

gsi::Class<QDragEnterEvent> decl_QDragEnterEvent (qtdecl_QDragMoveEvent (), "QtGui", "QDragEnterEvent_Native",
  methods_QDragEnterEvent (),
  "@hide\n@alias QDragEnterEvent");

GSI_QTGUI_PUBLIC gsi::Class<QDragEnterEvent> &qtdecl_QDragEnterEvent () { return decl_QDragEnterEvent; }

}


class QDragEnterEvent_Adaptor : public QDragEnterEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDragEnterEvent_Adaptor();

  //  [adaptor ctor] QDragEnterEvent::QDragEnterEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)
  QDragEnterEvent_Adaptor(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QDragEnterEvent(pos, actions, data, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QDragEnterEvent_Adaptor::~QDragEnterEvent_Adaptor() { }

//  Constructor QDragEnterEvent::QDragEnterEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) (adaptor class)

static void _init_ctor_QDragEnterEvent_Adaptor_11787 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("actions");
  decl->add_arg<QFlags<Qt::DropAction> > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("data");
  decl->add_arg<const QMimeData * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_4);
  decl->set_return_new<QDragEnterEvent_Adaptor> ();
}

static void _call_ctor_QDragEnterEvent_Adaptor_11787 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  QFlags<Qt::DropAction> arg2 = gsi::arg_reader<QFlags<Qt::DropAction> >() (args, heap);
  const QMimeData *arg3 = gsi::arg_reader<const QMimeData * >() (args, heap);
  QFlags<Qt::MouseButton> arg4 = gsi::arg_reader<QFlags<Qt::MouseButton> >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg5 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  ret.write<QDragEnterEvent_Adaptor *> (new QDragEnterEvent_Adaptor (arg1, arg2, arg3, arg4, arg5));
}


namespace gsi
{

gsi::Class<QDragEnterEvent> &qtdecl_QDragEnterEvent ();

static gsi::Methods methods_QDragEnterEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDragEnterEvent::QDragEnterEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)\nThis method creates an object of class QDragEnterEvent.", &_init_ctor_QDragEnterEvent_Adaptor_11787, &_call_ctor_QDragEnterEvent_Adaptor_11787);
  return methods;
}

gsi::Class<QDragEnterEvent_Adaptor> decl_QDragEnterEvent_Adaptor (qtdecl_QDragEnterEvent (), "QtGui", "QDragEnterEvent",
  methods_QDragEnterEvent_Adaptor (),
  "@qt\n@brief Binding of QDragEnterEvent");

}

