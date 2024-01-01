
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
*  @file gsiDeclQAccessibleImageInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleImageInterface>
#include <QPoint>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleImageInterface

// QString QAccessibleImageInterface::imageDescription()


static void _init_f_imageDescription_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_imageDescription_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAccessibleImageInterface *)cls)->imageDescription ());
}


// QPoint QAccessibleImageInterface::imagePosition()


static void _init_f_imagePosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_imagePosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QAccessibleImageInterface *)cls)->imagePosition ());
}


// QSize QAccessibleImageInterface::imageSize()


static void _init_f_imageSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_imageSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QAccessibleImageInterface *)cls)->imageSize ());
}


namespace gsi
{

static gsi::Methods methods_QAccessibleImageInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("imageDescription", "@brief Method QString QAccessibleImageInterface::imageDescription()\n", true, &_init_f_imageDescription_c0, &_call_f_imageDescription_c0);
  methods += new qt_gsi::GenericMethod ("imagePosition", "@brief Method QPoint QAccessibleImageInterface::imagePosition()\n", true, &_init_f_imagePosition_c0, &_call_f_imagePosition_c0);
  methods += new qt_gsi::GenericMethod ("imageSize", "@brief Method QSize QAccessibleImageInterface::imageSize()\n", true, &_init_f_imageSize_c0, &_call_f_imageSize_c0);
  return methods;
}

gsi::Class<QAccessibleImageInterface> decl_QAccessibleImageInterface ("QtGui", "QAccessibleImageInterface_Native",
  methods_QAccessibleImageInterface (),
  "@hide\n@alias QAccessibleImageInterface");

GSI_QTGUI_PUBLIC gsi::Class<QAccessibleImageInterface> &qtdecl_QAccessibleImageInterface () { return decl_QAccessibleImageInterface; }

}


class QAccessibleImageInterface_Adaptor : public QAccessibleImageInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleImageInterface_Adaptor();

  //  [adaptor ctor] QAccessibleImageInterface::QAccessibleImageInterface()
  QAccessibleImageInterface_Adaptor() : QAccessibleImageInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QString QAccessibleImageInterface::imageDescription()
  QString cbs_imageDescription_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("imageDescription");
  }

  virtual QString imageDescription() const
  {
    if (cb_imageDescription_c0_0.can_issue()) {
      return cb_imageDescription_c0_0.issue<QAccessibleImageInterface_Adaptor, QString>(&QAccessibleImageInterface_Adaptor::cbs_imageDescription_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("imageDescription");
    }
  }

  //  [adaptor impl] QPoint QAccessibleImageInterface::imagePosition()
  QPoint cbs_imagePosition_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("imagePosition");
  }

  virtual QPoint imagePosition() const
  {
    if (cb_imagePosition_c0_0.can_issue()) {
      return cb_imagePosition_c0_0.issue<QAccessibleImageInterface_Adaptor, QPoint>(&QAccessibleImageInterface_Adaptor::cbs_imagePosition_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("imagePosition");
    }
  }

  //  [adaptor impl] QSize QAccessibleImageInterface::imageSize()
  QSize cbs_imageSize_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("imageSize");
  }

  virtual QSize imageSize() const
  {
    if (cb_imageSize_c0_0.can_issue()) {
      return cb_imageSize_c0_0.issue<QAccessibleImageInterface_Adaptor, QSize>(&QAccessibleImageInterface_Adaptor::cbs_imageSize_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("imageSize");
    }
  }

  gsi::Callback cb_imageDescription_c0_0;
  gsi::Callback cb_imagePosition_c0_0;
  gsi::Callback cb_imageSize_c0_0;
};

QAccessibleImageInterface_Adaptor::~QAccessibleImageInterface_Adaptor() { }

//  Constructor QAccessibleImageInterface::QAccessibleImageInterface() (adaptor class)

static void _init_ctor_QAccessibleImageInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAccessibleImageInterface_Adaptor> ();
}

static void _call_ctor_QAccessibleImageInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleImageInterface_Adaptor *> (new QAccessibleImageInterface_Adaptor ());
}


// QString QAccessibleImageInterface::imageDescription()

static void _init_cbs_imageDescription_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_imageDescription_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAccessibleImageInterface_Adaptor *)cls)->cbs_imageDescription_c0_0 ());
}

static void _set_callback_cbs_imageDescription_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleImageInterface_Adaptor *)cls)->cb_imageDescription_c0_0 = cb;
}


// QPoint QAccessibleImageInterface::imagePosition()

static void _init_cbs_imagePosition_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_cbs_imagePosition_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QAccessibleImageInterface_Adaptor *)cls)->cbs_imagePosition_c0_0 ());
}

static void _set_callback_cbs_imagePosition_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleImageInterface_Adaptor *)cls)->cb_imagePosition_c0_0 = cb;
}


// QSize QAccessibleImageInterface::imageSize()

static void _init_cbs_imageSize_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_cbs_imageSize_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QAccessibleImageInterface_Adaptor *)cls)->cbs_imageSize_c0_0 ());
}

static void _set_callback_cbs_imageSize_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleImageInterface_Adaptor *)cls)->cb_imageSize_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleImageInterface> &qtdecl_QAccessibleImageInterface ();

static gsi::Methods methods_QAccessibleImageInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleImageInterface::QAccessibleImageInterface()\nThis method creates an object of class QAccessibleImageInterface.", &_init_ctor_QAccessibleImageInterface_Adaptor_0, &_call_ctor_QAccessibleImageInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("imageDescription", "@brief Virtual method QString QAccessibleImageInterface::imageDescription()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_imageDescription_c0_0, &_call_cbs_imageDescription_c0_0);
  methods += new qt_gsi::GenericMethod ("imageDescription", "@hide", true, &_init_cbs_imageDescription_c0_0, &_call_cbs_imageDescription_c0_0, &_set_callback_cbs_imageDescription_c0_0);
  methods += new qt_gsi::GenericMethod ("imagePosition", "@brief Virtual method QPoint QAccessibleImageInterface::imagePosition()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_imagePosition_c0_0, &_call_cbs_imagePosition_c0_0);
  methods += new qt_gsi::GenericMethod ("imagePosition", "@hide", true, &_init_cbs_imagePosition_c0_0, &_call_cbs_imagePosition_c0_0, &_set_callback_cbs_imagePosition_c0_0);
  methods += new qt_gsi::GenericMethod ("imageSize", "@brief Virtual method QSize QAccessibleImageInterface::imageSize()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_imageSize_c0_0, &_call_cbs_imageSize_c0_0);
  methods += new qt_gsi::GenericMethod ("imageSize", "@hide", true, &_init_cbs_imageSize_c0_0, &_call_cbs_imageSize_c0_0, &_set_callback_cbs_imageSize_c0_0);
  return methods;
}

gsi::Class<QAccessibleImageInterface_Adaptor> decl_QAccessibleImageInterface_Adaptor (qtdecl_QAccessibleImageInterface (), "QtGui", "QAccessibleImageInterface",
  methods_QAccessibleImageInterface_Adaptor (),
  "@qt\n@brief Binding of QAccessibleImageInterface");

}

