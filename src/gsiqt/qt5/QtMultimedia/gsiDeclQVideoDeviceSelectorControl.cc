
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
*  @file gsiDeclQVideoDeviceSelectorControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVideoDeviceSelectorControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVideoDeviceSelectorControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QVideoDeviceSelectorControl::staticMetaObject);
}


// int QVideoDeviceSelectorControl::defaultDevice()


static void _init_f_defaultDevice_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_defaultDevice_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoDeviceSelectorControl *)cls)->defaultDevice ());
}


// int QVideoDeviceSelectorControl::deviceCount()


static void _init_f_deviceCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_deviceCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoDeviceSelectorControl *)cls)->deviceCount ());
}


// QString QVideoDeviceSelectorControl::deviceDescription(int index)


static void _init_f_deviceDescription_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_deviceDescription_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QVideoDeviceSelectorControl *)cls)->deviceDescription (arg1));
}


// QString QVideoDeviceSelectorControl::deviceName(int index)


static void _init_f_deviceName_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_deviceName_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QVideoDeviceSelectorControl *)cls)->deviceName (arg1));
}


// void QVideoDeviceSelectorControl::devicesChanged()


static void _init_f_devicesChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_devicesChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoDeviceSelectorControl *)cls)->devicesChanged ();
}


// int QVideoDeviceSelectorControl::selectedDevice()


static void _init_f_selectedDevice_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_selectedDevice_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoDeviceSelectorControl *)cls)->selectedDevice ());
}


// void QVideoDeviceSelectorControl::selectedDeviceChanged(int index)


static void _init_f_selectedDeviceChanged_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_selectedDeviceChanged_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoDeviceSelectorControl *)cls)->selectedDeviceChanged (arg1);
}


// void QVideoDeviceSelectorControl::selectedDeviceChanged(const QString &deviceName)


static void _init_f_selectedDeviceChanged_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("deviceName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_selectedDeviceChanged_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoDeviceSelectorControl *)cls)->selectedDeviceChanged (arg1);
}


// void QVideoDeviceSelectorControl::setSelectedDevice(int index)


static void _init_f_setSelectedDevice_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSelectedDevice_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoDeviceSelectorControl *)cls)->setSelectedDevice (arg1);
}


// static QString QVideoDeviceSelectorControl::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QVideoDeviceSelectorControl::tr (arg1, arg2, arg3));
}


// static QString QVideoDeviceSelectorControl::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QVideoDeviceSelectorControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QVideoDeviceSelectorControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("defaultDevice", "@brief Method int QVideoDeviceSelectorControl::defaultDevice()\n", true, &_init_f_defaultDevice_c0, &_call_f_defaultDevice_c0);
  methods += new qt_gsi::GenericMethod ("deviceCount", "@brief Method int QVideoDeviceSelectorControl::deviceCount()\n", true, &_init_f_deviceCount_c0, &_call_f_deviceCount_c0);
  methods += new qt_gsi::GenericMethod ("deviceDescription", "@brief Method QString QVideoDeviceSelectorControl::deviceDescription(int index)\n", true, &_init_f_deviceDescription_c767, &_call_f_deviceDescription_c767);
  methods += new qt_gsi::GenericMethod ("deviceName", "@brief Method QString QVideoDeviceSelectorControl::deviceName(int index)\n", true, &_init_f_deviceName_c767, &_call_f_deviceName_c767);
  methods += new qt_gsi::GenericMethod ("devicesChanged", "@brief Method void QVideoDeviceSelectorControl::devicesChanged()\n", false, &_init_f_devicesChanged_0, &_call_f_devicesChanged_0);
  methods += new qt_gsi::GenericMethod (":selectedDevice", "@brief Method int QVideoDeviceSelectorControl::selectedDevice()\n", true, &_init_f_selectedDevice_c0, &_call_f_selectedDevice_c0);
  methods += new qt_gsi::GenericMethod ("selectedDeviceChanged_int", "@brief Method void QVideoDeviceSelectorControl::selectedDeviceChanged(int index)\n", false, &_init_f_selectedDeviceChanged_767, &_call_f_selectedDeviceChanged_767);
  methods += new qt_gsi::GenericMethod ("selectedDeviceChanged_string", "@brief Method void QVideoDeviceSelectorControl::selectedDeviceChanged(const QString &deviceName)\n", false, &_init_f_selectedDeviceChanged_2025, &_call_f_selectedDeviceChanged_2025);
  methods += new qt_gsi::GenericMethod ("setSelectedDevice|selectedDevice=", "@brief Method void QVideoDeviceSelectorControl::setSelectedDevice(int index)\n", false, &_init_f_setSelectedDevice_767, &_call_f_setSelectedDevice_767);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QVideoDeviceSelectorControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QVideoDeviceSelectorControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QVideoDeviceSelectorControl> decl_QVideoDeviceSelectorControl (qtdecl_QMediaControl (), "QtMultimedia", "QVideoDeviceSelectorControl_Native",
  methods_QVideoDeviceSelectorControl (),
  "@hide\n@alias QVideoDeviceSelectorControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QVideoDeviceSelectorControl> &qtdecl_QVideoDeviceSelectorControl () { return decl_QVideoDeviceSelectorControl; }

}


class QVideoDeviceSelectorControl_Adaptor : public QVideoDeviceSelectorControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QVideoDeviceSelectorControl_Adaptor();

  //  [adaptor ctor] QVideoDeviceSelectorControl::QVideoDeviceSelectorControl()
  QVideoDeviceSelectorControl_Adaptor() : QVideoDeviceSelectorControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QVideoDeviceSelectorControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QVideoDeviceSelectorControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QVideoDeviceSelectorControl::isSignalConnected(signal);
  }

  //  [expose] int QVideoDeviceSelectorControl::receivers(const char *signal)
  int fp_QVideoDeviceSelectorControl_receivers_c1731 (const char *signal) const {
    return QVideoDeviceSelectorControl::receivers(signal);
  }

  //  [expose] QObject *QVideoDeviceSelectorControl::sender()
  QObject * fp_QVideoDeviceSelectorControl_sender_c0 () const {
    return QVideoDeviceSelectorControl::sender();
  }

  //  [expose] int QVideoDeviceSelectorControl::senderSignalIndex()
  int fp_QVideoDeviceSelectorControl_senderSignalIndex_c0 () const {
    return QVideoDeviceSelectorControl::senderSignalIndex();
  }

  //  [adaptor impl] int QVideoDeviceSelectorControl::defaultDevice()
  int cbs_defaultDevice_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("defaultDevice");
  }

  virtual int defaultDevice() const
  {
    if (cb_defaultDevice_c0_0.can_issue()) {
      return cb_defaultDevice_c0_0.issue<QVideoDeviceSelectorControl_Adaptor, int>(&QVideoDeviceSelectorControl_Adaptor::cbs_defaultDevice_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("defaultDevice");
    }
  }

  //  [adaptor impl] int QVideoDeviceSelectorControl::deviceCount()
  int cbs_deviceCount_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("deviceCount");
  }

  virtual int deviceCount() const
  {
    if (cb_deviceCount_c0_0.can_issue()) {
      return cb_deviceCount_c0_0.issue<QVideoDeviceSelectorControl_Adaptor, int>(&QVideoDeviceSelectorControl_Adaptor::cbs_deviceCount_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("deviceCount");
    }
  }

  //  [adaptor impl] QString QVideoDeviceSelectorControl::deviceDescription(int index)
  QString cbs_deviceDescription_c767_0(int index) const
  {
    __SUPPRESS_UNUSED_WARNING (index);
    throw qt_gsi::AbstractMethodCalledException("deviceDescription");
  }

  virtual QString deviceDescription(int index) const
  {
    if (cb_deviceDescription_c767_0.can_issue()) {
      return cb_deviceDescription_c767_0.issue<QVideoDeviceSelectorControl_Adaptor, QString, int>(&QVideoDeviceSelectorControl_Adaptor::cbs_deviceDescription_c767_0, index);
    } else {
      throw qt_gsi::AbstractMethodCalledException("deviceDescription");
    }
  }

  //  [adaptor impl] QString QVideoDeviceSelectorControl::deviceName(int index)
  QString cbs_deviceName_c767_0(int index) const
  {
    __SUPPRESS_UNUSED_WARNING (index);
    throw qt_gsi::AbstractMethodCalledException("deviceName");
  }

  virtual QString deviceName(int index) const
  {
    if (cb_deviceName_c767_0.can_issue()) {
      return cb_deviceName_c767_0.issue<QVideoDeviceSelectorControl_Adaptor, QString, int>(&QVideoDeviceSelectorControl_Adaptor::cbs_deviceName_c767_0, index);
    } else {
      throw qt_gsi::AbstractMethodCalledException("deviceName");
    }
  }

  //  [adaptor impl] bool QVideoDeviceSelectorControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QVideoDeviceSelectorControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QVideoDeviceSelectorControl_Adaptor, bool, QEvent *>(&QVideoDeviceSelectorControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QVideoDeviceSelectorControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QVideoDeviceSelectorControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QVideoDeviceSelectorControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QVideoDeviceSelectorControl_Adaptor, bool, QObject *, QEvent *>(&QVideoDeviceSelectorControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QVideoDeviceSelectorControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] int QVideoDeviceSelectorControl::selectedDevice()
  int cbs_selectedDevice_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("selectedDevice");
  }

  virtual int selectedDevice() const
  {
    if (cb_selectedDevice_c0_0.can_issue()) {
      return cb_selectedDevice_c0_0.issue<QVideoDeviceSelectorControl_Adaptor, int>(&QVideoDeviceSelectorControl_Adaptor::cbs_selectedDevice_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("selectedDevice");
    }
  }

  //  [adaptor impl] void QVideoDeviceSelectorControl::setSelectedDevice(int index)
  void cbs_setSelectedDevice_767_0(int index)
  {
    __SUPPRESS_UNUSED_WARNING (index);
    throw qt_gsi::AbstractMethodCalledException("setSelectedDevice");
  }

  virtual void setSelectedDevice(int index)
  {
    if (cb_setSelectedDevice_767_0.can_issue()) {
      cb_setSelectedDevice_767_0.issue<QVideoDeviceSelectorControl_Adaptor, int>(&QVideoDeviceSelectorControl_Adaptor::cbs_setSelectedDevice_767_0, index);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setSelectedDevice");
    }
  }

  //  [adaptor impl] void QVideoDeviceSelectorControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QVideoDeviceSelectorControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QVideoDeviceSelectorControl_Adaptor, QChildEvent *>(&QVideoDeviceSelectorControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QVideoDeviceSelectorControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QVideoDeviceSelectorControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QVideoDeviceSelectorControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QVideoDeviceSelectorControl_Adaptor, QEvent *>(&QVideoDeviceSelectorControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QVideoDeviceSelectorControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QVideoDeviceSelectorControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QVideoDeviceSelectorControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QVideoDeviceSelectorControl_Adaptor, const QMetaMethod &>(&QVideoDeviceSelectorControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QVideoDeviceSelectorControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QVideoDeviceSelectorControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QVideoDeviceSelectorControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QVideoDeviceSelectorControl_Adaptor, QTimerEvent *>(&QVideoDeviceSelectorControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QVideoDeviceSelectorControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_defaultDevice_c0_0;
  gsi::Callback cb_deviceCount_c0_0;
  gsi::Callback cb_deviceDescription_c767_0;
  gsi::Callback cb_deviceName_c767_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_selectedDevice_c0_0;
  gsi::Callback cb_setSelectedDevice_767_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QVideoDeviceSelectorControl_Adaptor::~QVideoDeviceSelectorControl_Adaptor() { }

//  Constructor QVideoDeviceSelectorControl::QVideoDeviceSelectorControl() (adaptor class)

static void _init_ctor_QVideoDeviceSelectorControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVideoDeviceSelectorControl_Adaptor> ();
}

static void _call_ctor_QVideoDeviceSelectorControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoDeviceSelectorControl_Adaptor *> (new QVideoDeviceSelectorControl_Adaptor ());
}


// void QVideoDeviceSelectorControl::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QVideoDeviceSelectorControl::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// int QVideoDeviceSelectorControl::defaultDevice()

static void _init_cbs_defaultDevice_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_defaultDevice_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_defaultDevice_c0_0 ());
}

static void _set_callback_cbs_defaultDevice_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_defaultDevice_c0_0 = cb;
}


// int QVideoDeviceSelectorControl::deviceCount()

static void _init_cbs_deviceCount_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_deviceCount_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_deviceCount_c0_0 ());
}

static void _set_callback_cbs_deviceCount_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_deviceCount_c0_0 = cb;
}


// QString QVideoDeviceSelectorControl::deviceDescription(int index)

static void _init_cbs_deviceDescription_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_deviceDescription_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QString > ((QString)((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_deviceDescription_c767_0 (arg1));
}

static void _set_callback_cbs_deviceDescription_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_deviceDescription_c767_0 = cb;
}


// QString QVideoDeviceSelectorControl::deviceName(int index)

static void _init_cbs_deviceName_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_deviceName_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QString > ((QString)((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_deviceName_c767_0 (arg1));
}

static void _set_callback_cbs_deviceName_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_deviceName_c767_0 = cb;
}


// void QVideoDeviceSelectorControl::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QVideoDeviceSelectorControl::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QVideoDeviceSelectorControl::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QVideoDeviceSelectorControl::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QVideoDeviceSelectorControl_Adaptor *)cls)->fp_QVideoDeviceSelectorControl_isSignalConnected_c2394 (arg1));
}


// exposed int QVideoDeviceSelectorControl::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QVideoDeviceSelectorControl_Adaptor *)cls)->fp_QVideoDeviceSelectorControl_receivers_c1731 (arg1));
}


// int QVideoDeviceSelectorControl::selectedDevice()

static void _init_cbs_selectedDevice_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_selectedDevice_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_selectedDevice_c0_0 ());
}

static void _set_callback_cbs_selectedDevice_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_selectedDevice_c0_0 = cb;
}


// exposed QObject *QVideoDeviceSelectorControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QVideoDeviceSelectorControl_Adaptor *)cls)->fp_QVideoDeviceSelectorControl_sender_c0 ());
}


// exposed int QVideoDeviceSelectorControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoDeviceSelectorControl_Adaptor *)cls)->fp_QVideoDeviceSelectorControl_senderSignalIndex_c0 ());
}


// void QVideoDeviceSelectorControl::setSelectedDevice(int index)

static void _init_cbs_setSelectedDevice_767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setSelectedDevice_767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_setSelectedDevice_767_0 (arg1);
}

static void _set_callback_cbs_setSelectedDevice_767_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_setSelectedDevice_767_0 = cb;
}


// void QVideoDeviceSelectorControl::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QVideoDeviceSelectorControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QVideoDeviceSelectorControl> &qtdecl_QVideoDeviceSelectorControl ();

static gsi::Methods methods_QVideoDeviceSelectorControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoDeviceSelectorControl::QVideoDeviceSelectorControl()\nThis method creates an object of class QVideoDeviceSelectorControl.", &_init_ctor_QVideoDeviceSelectorControl_Adaptor_0, &_call_ctor_QVideoDeviceSelectorControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QVideoDeviceSelectorControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QVideoDeviceSelectorControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("defaultDevice", "@brief Virtual method int QVideoDeviceSelectorControl::defaultDevice()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_defaultDevice_c0_0, &_call_cbs_defaultDevice_c0_0);
  methods += new qt_gsi::GenericMethod ("defaultDevice", "@hide", true, &_init_cbs_defaultDevice_c0_0, &_call_cbs_defaultDevice_c0_0, &_set_callback_cbs_defaultDevice_c0_0);
  methods += new qt_gsi::GenericMethod ("deviceCount", "@brief Virtual method int QVideoDeviceSelectorControl::deviceCount()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_deviceCount_c0_0, &_call_cbs_deviceCount_c0_0);
  methods += new qt_gsi::GenericMethod ("deviceCount", "@hide", true, &_init_cbs_deviceCount_c0_0, &_call_cbs_deviceCount_c0_0, &_set_callback_cbs_deviceCount_c0_0);
  methods += new qt_gsi::GenericMethod ("deviceDescription", "@brief Virtual method QString QVideoDeviceSelectorControl::deviceDescription(int index)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_deviceDescription_c767_0, &_call_cbs_deviceDescription_c767_0);
  methods += new qt_gsi::GenericMethod ("deviceDescription", "@hide", true, &_init_cbs_deviceDescription_c767_0, &_call_cbs_deviceDescription_c767_0, &_set_callback_cbs_deviceDescription_c767_0);
  methods += new qt_gsi::GenericMethod ("deviceName", "@brief Virtual method QString QVideoDeviceSelectorControl::deviceName(int index)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_deviceName_c767_0, &_call_cbs_deviceName_c767_0);
  methods += new qt_gsi::GenericMethod ("deviceName", "@hide", true, &_init_cbs_deviceName_c767_0, &_call_cbs_deviceName_c767_0, &_set_callback_cbs_deviceName_c767_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QVideoDeviceSelectorControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QVideoDeviceSelectorControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QVideoDeviceSelectorControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QVideoDeviceSelectorControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QVideoDeviceSelectorControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("selectedDevice", "@brief Virtual method int QVideoDeviceSelectorControl::selectedDevice()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_selectedDevice_c0_0, &_call_cbs_selectedDevice_c0_0);
  methods += new qt_gsi::GenericMethod ("selectedDevice", "@hide", true, &_init_cbs_selectedDevice_c0_0, &_call_cbs_selectedDevice_c0_0, &_set_callback_cbs_selectedDevice_c0_0);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QVideoDeviceSelectorControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QVideoDeviceSelectorControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setSelectedDevice", "@brief Virtual method void QVideoDeviceSelectorControl::setSelectedDevice(int index)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setSelectedDevice_767_0, &_call_cbs_setSelectedDevice_767_0);
  methods += new qt_gsi::GenericMethod ("setSelectedDevice", "@hide", false, &_init_cbs_setSelectedDevice_767_0, &_call_cbs_setSelectedDevice_767_0, &_set_callback_cbs_setSelectedDevice_767_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QVideoDeviceSelectorControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QVideoDeviceSelectorControl_Adaptor> decl_QVideoDeviceSelectorControl_Adaptor (qtdecl_QVideoDeviceSelectorControl (), "QtMultimedia", "QVideoDeviceSelectorControl",
  methods_QVideoDeviceSelectorControl_Adaptor (),
  "@qt\n@brief Binding of QVideoDeviceSelectorControl");

}

