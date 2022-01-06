
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQAbstractUndoItem.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractUndoItem>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractUndoItem

// void QAbstractUndoItem::redo()


static void _init_f_redo_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_redo_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractUndoItem *)cls)->redo ();
}


// void QAbstractUndoItem::undo()


static void _init_f_undo_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_undo_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractUndoItem *)cls)->undo ();
}


namespace gsi
{

static gsi::Methods methods_QAbstractUndoItem () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("redo", "@brief Method void QAbstractUndoItem::redo()\n", false, &_init_f_redo_0, &_call_f_redo_0);
  methods += new qt_gsi::GenericMethod ("undo", "@brief Method void QAbstractUndoItem::undo()\n", false, &_init_f_undo_0, &_call_f_undo_0);
  return methods;
}

gsi::Class<QAbstractUndoItem> decl_QAbstractUndoItem ("QtGui", "QAbstractUndoItem_Native",
  methods_QAbstractUndoItem (),
  "@hide\n@alias QAbstractUndoItem");

GSI_QTGUI_PUBLIC gsi::Class<QAbstractUndoItem> &qtdecl_QAbstractUndoItem () { return decl_QAbstractUndoItem; }

}


class QAbstractUndoItem_Adaptor : public QAbstractUndoItem, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractUndoItem_Adaptor();

  //  [adaptor ctor] QAbstractUndoItem::QAbstractUndoItem()
  QAbstractUndoItem_Adaptor() : QAbstractUndoItem()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QAbstractUndoItem::redo()
  void cbs_redo_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("redo");
  }

  virtual void redo()
  {
    if (cb_redo_0_0.can_issue()) {
      cb_redo_0_0.issue<QAbstractUndoItem_Adaptor>(&QAbstractUndoItem_Adaptor::cbs_redo_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("redo");
    }
  }

  //  [adaptor impl] void QAbstractUndoItem::undo()
  void cbs_undo_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("undo");
  }

  virtual void undo()
  {
    if (cb_undo_0_0.can_issue()) {
      cb_undo_0_0.issue<QAbstractUndoItem_Adaptor>(&QAbstractUndoItem_Adaptor::cbs_undo_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("undo");
    }
  }

  gsi::Callback cb_redo_0_0;
  gsi::Callback cb_undo_0_0;
};

QAbstractUndoItem_Adaptor::~QAbstractUndoItem_Adaptor() { }

//  Constructor QAbstractUndoItem::QAbstractUndoItem() (adaptor class)

static void _init_ctor_QAbstractUndoItem_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractUndoItem_Adaptor> ();
}

static void _call_ctor_QAbstractUndoItem_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractUndoItem_Adaptor *> (new QAbstractUndoItem_Adaptor ());
}


// void QAbstractUndoItem::redo()

static void _init_cbs_redo_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_redo_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractUndoItem_Adaptor *)cls)->cbs_redo_0_0 ();
}

static void _set_callback_cbs_redo_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractUndoItem_Adaptor *)cls)->cb_redo_0_0 = cb;
}


// void QAbstractUndoItem::undo()

static void _init_cbs_undo_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_undo_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractUndoItem_Adaptor *)cls)->cbs_undo_0_0 ();
}

static void _set_callback_cbs_undo_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractUndoItem_Adaptor *)cls)->cb_undo_0_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractUndoItem> &qtdecl_QAbstractUndoItem ();

static gsi::Methods methods_QAbstractUndoItem_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractUndoItem::QAbstractUndoItem()\nThis method creates an object of class QAbstractUndoItem.", &_init_ctor_QAbstractUndoItem_Adaptor_0, &_call_ctor_QAbstractUndoItem_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("redo", "@brief Virtual method void QAbstractUndoItem::redo()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_redo_0_0, &_call_cbs_redo_0_0);
  methods += new qt_gsi::GenericMethod ("redo", "@hide", false, &_init_cbs_redo_0_0, &_call_cbs_redo_0_0, &_set_callback_cbs_redo_0_0);
  methods += new qt_gsi::GenericMethod ("undo", "@brief Virtual method void QAbstractUndoItem::undo()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_undo_0_0, &_call_cbs_undo_0_0);
  methods += new qt_gsi::GenericMethod ("undo", "@hide", false, &_init_cbs_undo_0_0, &_call_cbs_undo_0_0, &_set_callback_cbs_undo_0_0);
  return methods;
}

gsi::Class<QAbstractUndoItem_Adaptor> decl_QAbstractUndoItem_Adaptor (qtdecl_QAbstractUndoItem (), "QtGui", "QAbstractUndoItem",
  methods_QAbstractUndoItem_Adaptor (),
  "@qt\n@brief Binding of QAbstractUndoItem");

}

