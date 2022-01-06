
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
*  @file gsiDeclQTabletEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTabletEvent>
#include <QEventPoint>
#include <QInputDevice>
#include <QObject>
#include <QPoint>
#include <QPointF>
#include <QPointingDevice>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTabletEvent

// QTabletEvent *QTabletEvent::clone()


static void _init_f_clone_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTabletEvent * > ();
}

static void _call_f_clone_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTabletEvent * > ((QTabletEvent *)((QTabletEvent *)cls)->clone ());
}


// QPoint QTabletEvent::globalPos()


static void _init_f_globalPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_globalPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QTabletEvent *)cls)->globalPos ());
}


// const QPointF QTabletEvent::globalPosF()


static void _init_f_globalPosF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPointF > ();
}

static void _call_f_globalPosF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPointF > ((const QPointF)((QTabletEvent *)cls)->globalPosF ());
}


// int QTabletEvent::globalX()


static void _init_f_globalX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->globalX ());
}


// int QTabletEvent::globalY()


static void _init_f_globalY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->globalY ());
}


// double QTabletEvent::hiResGlobalX()


static void _init_f_hiResGlobalX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_hiResGlobalX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->hiResGlobalX ());
}


// double QTabletEvent::hiResGlobalY()


static void _init_f_hiResGlobalY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_hiResGlobalY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->hiResGlobalY ());
}


// QPoint QTabletEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QTabletEvent *)cls)->pos ());
}


// const QPointF QTabletEvent::posF()


static void _init_f_posF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPointF > ();
}

static void _call_f_posF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPointF > ((const QPointF)((QTabletEvent *)cls)->posF ());
}


// double QTabletEvent::pressure()


static void _init_f_pressure_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_pressure_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->pressure ());
}


// double QTabletEvent::rotation()


static void _init_f_rotation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_rotation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->rotation ());
}


// double QTabletEvent::tangentialPressure()


static void _init_f_tangentialPressure_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_tangentialPressure_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->tangentialPressure ());
}


// qint64 QTabletEvent::uniqueId()


static void _init_f_uniqueId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_uniqueId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QTabletEvent *)cls)->uniqueId ());
}


// int QTabletEvent::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->x ());
}


// double QTabletEvent::xTilt()


static void _init_f_xTilt_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_xTilt_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->xTilt ());
}


// int QTabletEvent::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTabletEvent *)cls)->y ());
}


// double QTabletEvent::yTilt()


static void _init_f_yTilt_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_yTilt_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->yTilt ());
}


// double QTabletEvent::z()


static void _init_f_z_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_z_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTabletEvent *)cls)->z ());
}


namespace gsi
{

static gsi::Methods methods_QTabletEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("clone", "@brief Method QTabletEvent *QTabletEvent::clone()\nThis is a reimplementation of QSinglePointEvent::clone", true, &_init_f_clone_c0, &_call_f_clone_c0);
  methods += new qt_gsi::GenericMethod ("globalPos", "@brief Method QPoint QTabletEvent::globalPos()\n", true, &_init_f_globalPos_c0, &_call_f_globalPos_c0);
  methods += new qt_gsi::GenericMethod ("globalPosF", "@brief Method const QPointF QTabletEvent::globalPosF()\n", true, &_init_f_globalPosF_c0, &_call_f_globalPosF_c0);
  methods += new qt_gsi::GenericMethod ("globalX", "@brief Method int QTabletEvent::globalX()\n", true, &_init_f_globalX_c0, &_call_f_globalX_c0);
  methods += new qt_gsi::GenericMethod ("globalY", "@brief Method int QTabletEvent::globalY()\n", true, &_init_f_globalY_c0, &_call_f_globalY_c0);
  methods += new qt_gsi::GenericMethod ("hiResGlobalX", "@brief Method double QTabletEvent::hiResGlobalX()\n", true, &_init_f_hiResGlobalX_c0, &_call_f_hiResGlobalX_c0);
  methods += new qt_gsi::GenericMethod ("hiResGlobalY", "@brief Method double QTabletEvent::hiResGlobalY()\n", true, &_init_f_hiResGlobalY_c0, &_call_f_hiResGlobalY_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method QPoint QTabletEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("posF", "@brief Method const QPointF QTabletEvent::posF()\n", true, &_init_f_posF_c0, &_call_f_posF_c0);
  methods += new qt_gsi::GenericMethod ("pressure", "@brief Method double QTabletEvent::pressure()\n", true, &_init_f_pressure_c0, &_call_f_pressure_c0);
  methods += new qt_gsi::GenericMethod ("rotation", "@brief Method double QTabletEvent::rotation()\n", true, &_init_f_rotation_c0, &_call_f_rotation_c0);
  methods += new qt_gsi::GenericMethod ("tangentialPressure", "@brief Method double QTabletEvent::tangentialPressure()\n", true, &_init_f_tangentialPressure_c0, &_call_f_tangentialPressure_c0);
  methods += new qt_gsi::GenericMethod ("uniqueId", "@brief Method qint64 QTabletEvent::uniqueId()\n", true, &_init_f_uniqueId_c0, &_call_f_uniqueId_c0);
  methods += new qt_gsi::GenericMethod ("x", "@brief Method int QTabletEvent::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod ("xTilt", "@brief Method double QTabletEvent::xTilt()\n", true, &_init_f_xTilt_c0, &_call_f_xTilt_c0);
  methods += new qt_gsi::GenericMethod ("y", "@brief Method int QTabletEvent::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  methods += new qt_gsi::GenericMethod ("yTilt", "@brief Method double QTabletEvent::yTilt()\n", true, &_init_f_yTilt_c0, &_call_f_yTilt_c0);
  methods += new qt_gsi::GenericMethod ("z", "@brief Method double QTabletEvent::z()\n", true, &_init_f_z_c0, &_call_f_z_c0);
  return methods;
}

gsi::Class<QSinglePointEvent> &qtdecl_QSinglePointEvent ();

gsi::Class<QTabletEvent> decl_QTabletEvent (qtdecl_QSinglePointEvent (), "QtGui", "QTabletEvent_Native",
  methods_QTabletEvent (),
  "@hide\n@alias QTabletEvent");

GSI_QTGUI_PUBLIC gsi::Class<QTabletEvent> &qtdecl_QTabletEvent () { return decl_QTabletEvent; }

}


class QTabletEvent_Adaptor : public QTabletEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTabletEvent_Adaptor();

  //  [adaptor impl] QTabletEvent *QTabletEvent::clone()
  QTabletEvent * cbs_clone_c0_0() const
  {
    return QTabletEvent::clone();
  }

  virtual QTabletEvent * clone() const
  {
    if (cb_clone_c0_0.can_issue()) {
      return cb_clone_c0_0.issue<QTabletEvent_Adaptor, QTabletEvent *>(&QTabletEvent_Adaptor::cbs_clone_c0_0);
    } else {
      return QTabletEvent::clone();
    }
  }

  //  [adaptor impl] bool QTabletEvent::isBeginEvent()
  bool cbs_isBeginEvent_c0_0() const
  {
    return QTabletEvent::isBeginEvent();
  }

  virtual bool isBeginEvent() const
  {
    if (cb_isBeginEvent_c0_0.can_issue()) {
      return cb_isBeginEvent_c0_0.issue<QTabletEvent_Adaptor, bool>(&QTabletEvent_Adaptor::cbs_isBeginEvent_c0_0);
    } else {
      return QTabletEvent::isBeginEvent();
    }
  }

  //  [adaptor impl] bool QTabletEvent::isEndEvent()
  bool cbs_isEndEvent_c0_0() const
  {
    return QTabletEvent::isEndEvent();
  }

  virtual bool isEndEvent() const
  {
    if (cb_isEndEvent_c0_0.can_issue()) {
      return cb_isEndEvent_c0_0.issue<QTabletEvent_Adaptor, bool>(&QTabletEvent_Adaptor::cbs_isEndEvent_c0_0);
    } else {
      return QTabletEvent::isEndEvent();
    }
  }

  //  [adaptor impl] bool QTabletEvent::isUpdateEvent()
  bool cbs_isUpdateEvent_c0_0() const
  {
    return QTabletEvent::isUpdateEvent();
  }

  virtual bool isUpdateEvent() const
  {
    if (cb_isUpdateEvent_c0_0.can_issue()) {
      return cb_isUpdateEvent_c0_0.issue<QTabletEvent_Adaptor, bool>(&QTabletEvent_Adaptor::cbs_isUpdateEvent_c0_0);
    } else {
      return QTabletEvent::isUpdateEvent();
    }
  }

  //  [adaptor impl] void QTabletEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QTabletEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QTabletEvent_Adaptor, bool>(&QTabletEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QTabletEvent::setAccepted(accepted);
    }
  }

  //  [adaptor impl] void QTabletEvent::setTimestamp(quint64 timestamp)
  void cbs_setTimestamp_1103_0(quint64 timestamp)
  {
    QTabletEvent::setTimestamp(timestamp);
  }

  virtual void setTimestamp(quint64 timestamp)
  {
    if (cb_setTimestamp_1103_0.can_issue()) {
      cb_setTimestamp_1103_0.issue<QTabletEvent_Adaptor, quint64>(&QTabletEvent_Adaptor::cbs_setTimestamp_1103_0, timestamp);
    } else {
      QTabletEvent::setTimestamp(timestamp);
    }
  }

  gsi::Callback cb_clone_c0_0;
  gsi::Callback cb_isBeginEvent_c0_0;
  gsi::Callback cb_isEndEvent_c0_0;
  gsi::Callback cb_isUpdateEvent_c0_0;
  gsi::Callback cb_setAccepted_864_0;
  gsi::Callback cb_setTimestamp_1103_0;
};

QTabletEvent_Adaptor::~QTabletEvent_Adaptor() { }

// QTabletEvent *QTabletEvent::clone()

static void _init_cbs_clone_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTabletEvent * > ();
}

static void _call_cbs_clone_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTabletEvent * > ((QTabletEvent *)((QTabletEvent_Adaptor *)cls)->cbs_clone_c0_0 ());
}

static void _set_callback_cbs_clone_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTabletEvent_Adaptor *)cls)->cb_clone_c0_0 = cb;
}


// bool QTabletEvent::isBeginEvent()

static void _init_cbs_isBeginEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isBeginEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTabletEvent_Adaptor *)cls)->cbs_isBeginEvent_c0_0 ());
}

static void _set_callback_cbs_isBeginEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTabletEvent_Adaptor *)cls)->cb_isBeginEvent_c0_0 = cb;
}


// bool QTabletEvent::isEndEvent()

static void _init_cbs_isEndEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEndEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTabletEvent_Adaptor *)cls)->cbs_isEndEvent_c0_0 ());
}

static void _set_callback_cbs_isEndEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTabletEvent_Adaptor *)cls)->cb_isEndEvent_c0_0 = cb;
}


// bool QTabletEvent::isUpdateEvent()

static void _init_cbs_isUpdateEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isUpdateEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTabletEvent_Adaptor *)cls)->cbs_isUpdateEvent_c0_0 ());
}

static void _set_callback_cbs_isUpdateEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTabletEvent_Adaptor *)cls)->cb_isUpdateEvent_c0_0 = cb;
}


// void QTabletEvent::setAccepted(bool accepted)

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
  ((QTabletEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QTabletEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


// void QTabletEvent::setTimestamp(quint64 timestamp)

static void _init_cbs_setTimestamp_1103_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timestamp");
  decl->add_arg<quint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setTimestamp_1103_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint64 arg1 = args.read<quint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTabletEvent_Adaptor *)cls)->cbs_setTimestamp_1103_0 (arg1);
}

static void _set_callback_cbs_setTimestamp_1103_0 (void *cls, const gsi::Callback &cb)
{
  ((QTabletEvent_Adaptor *)cls)->cb_setTimestamp_1103_0 = cb;
}


namespace gsi
{

gsi::Class<QTabletEvent> &qtdecl_QTabletEvent ();

static gsi::Methods methods_QTabletEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("clone", "@brief Virtual method QTabletEvent *QTabletEvent::clone()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("clone", "@hide", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0, &_set_callback_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@brief Virtual method bool QTabletEvent::isBeginEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@hide", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0, &_set_callback_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@brief Virtual method bool QTabletEvent::isEndEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@hide", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0, &_set_callback_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@brief Virtual method bool QTabletEvent::isUpdateEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@hide", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0, &_set_callback_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QTabletEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@brief Virtual method void QTabletEvent::setTimestamp(quint64 timestamp)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@hide", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0, &_set_callback_cbs_setTimestamp_1103_0);
  return methods;
}

gsi::Class<QTabletEvent_Adaptor> decl_QTabletEvent_Adaptor (qtdecl_QTabletEvent (), "QtGui", "QTabletEvent",
  methods_QTabletEvent_Adaptor (),
  "@qt\n@brief Binding of QTabletEvent");

}

