
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
*  @file gsiDeclQCloseEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCloseEvent>
#include <QEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCloseEvent

namespace gsi
{

static gsi::Methods methods_QCloseEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QCloseEvent> decl_QCloseEvent (qtdecl_QEvent (), "Qt", "QCloseEvent_Native",
  methods_QCloseEvent (),
  "@hide\n@alias QCloseEvent");

GSI_QT_PUBLIC gsi::Class<QCloseEvent> &qtdecl_QCloseEvent () { return decl_QCloseEvent; }

}


class QCloseEvent_Adaptor : public QCloseEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QCloseEvent_Adaptor();

  //  [adaptor ctor] QCloseEvent::QCloseEvent()
  QCloseEvent_Adaptor() : QCloseEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QEvent *QCloseEvent::clone()
  QEvent * cbs_clone_c0_0() const
  {
    return QCloseEvent::clone();
  }

  virtual QEvent * clone() const
  {
    if (cb_clone_c0_0.can_issue()) {
      return cb_clone_c0_0.issue<QCloseEvent_Adaptor, QEvent *>(&QCloseEvent_Adaptor::cbs_clone_c0_0);
    } else {
      return QCloseEvent::clone();
    }
  }

  //  [adaptor impl] void QCloseEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QCloseEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QCloseEvent_Adaptor, bool>(&QCloseEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QCloseEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_clone_c0_0;
  gsi::Callback cb_setAccepted_864_0;
};

QCloseEvent_Adaptor::~QCloseEvent_Adaptor() { }

//  Constructor QCloseEvent::QCloseEvent() (adaptor class)

static void _init_ctor_QCloseEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCloseEvent_Adaptor> ();
}

static void _call_ctor_QCloseEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCloseEvent_Adaptor *> (new QCloseEvent_Adaptor ());
}


// QEvent *QCloseEvent::clone()

static void _init_cbs_clone_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QEvent * > ();
}

static void _call_cbs_clone_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QEvent * > ((QEvent *)((QCloseEvent_Adaptor *)cls)->cbs_clone_c0_0 ());
}

static void _set_callback_cbs_clone_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QCloseEvent_Adaptor *)cls)->cb_clone_c0_0 = cb;
}


// void QCloseEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCloseEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QCloseEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QCloseEvent> &qtdecl_QCloseEvent ();

static gsi::Methods methods_QCloseEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCloseEvent::QCloseEvent()\nThis method creates an object of class QCloseEvent.", &_init_ctor_QCloseEvent_Adaptor_0, &_call_ctor_QCloseEvent_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Virtual method QEvent *QCloseEvent::clone()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("clone", "@hide", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0, &_set_callback_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QCloseEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QCloseEvent_Adaptor> decl_QCloseEvent_Adaptor (qtdecl_QCloseEvent (), "Qt", "QCloseEvent",
  methods_QCloseEvent_Adaptor (),
  "@qt\n@brief Binding of QCloseEvent");

}

