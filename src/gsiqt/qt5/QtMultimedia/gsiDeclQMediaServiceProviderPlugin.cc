
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
*  @file gsiDeclQMediaServiceProviderPlugin.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaServiceProviderPlugin>
#include <QChildEvent>
#include <QEvent>
#include <QMediaService>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaServiceProviderPlugin

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMediaServiceProviderPlugin::staticMetaObject);
}


// QMediaService *QMediaServiceProviderPlugin::create(const QString &key)


static void _init_f_create_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QMediaService * > ();
}

static void _call_f_create_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QMediaService * > ((QMediaService *)((QMediaServiceProviderPlugin *)cls)->create (arg1));
}


// void QMediaServiceProviderPlugin::release(QMediaService *service)


static void _init_f_release_1904 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<QMediaService * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_release_1904 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaService *arg1 = gsi::arg_reader<QMediaService * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaServiceProviderPlugin *)cls)->release (arg1);
}


// static QString QMediaServiceProviderPlugin::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaServiceProviderPlugin::tr (arg1, arg2, arg3));
}


// static QString QMediaServiceProviderPlugin::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaServiceProviderPlugin::trUtf8 (arg1, arg2, arg3));
}


//  base class cast for QObject

static void _init_f_QMediaServiceProviderPlugin_as_QObject (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject *> ();
}

static void _call_f_QMediaServiceProviderPlugin_as_QObject (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<QObject *> ((QObject *)(QMediaServiceProviderPlugin *)cls);
}

static void _init_f_QMediaServiceProviderPlugin_as_const_QObject (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QObject *> ();
}

static void _call_f_QMediaServiceProviderPlugin_as_const_QObject (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QObject *> ((const QObject *)(const QMediaServiceProviderPlugin *)cls);
}

//  base class cast for QMediaServiceProviderFactoryInterface

static void _init_f_QMediaServiceProviderPlugin_as_QMediaServiceProviderFactoryInterface (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMediaServiceProviderFactoryInterface *> ();
}

static void _call_f_QMediaServiceProviderPlugin_as_QMediaServiceProviderFactoryInterface (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<QMediaServiceProviderFactoryInterface *> ((QMediaServiceProviderFactoryInterface *)(QMediaServiceProviderPlugin *)cls);
}

static void _init_f_QMediaServiceProviderPlugin_as_const_QMediaServiceProviderFactoryInterface (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMediaServiceProviderFactoryInterface *> ();
}

static void _call_f_QMediaServiceProviderPlugin_as_const_QMediaServiceProviderFactoryInterface (const qt_gsi::GenericMethod *, void *cls, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMediaServiceProviderFactoryInterface *> ((const QMediaServiceProviderFactoryInterface *)(const QMediaServiceProviderPlugin *)cls);
}


namespace gsi
{

static gsi::Methods methods_QMediaServiceProviderPlugin () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("create|qt_create", "@brief Method QMediaService *QMediaServiceProviderPlugin::create(const QString &key)\nThis is a reimplementation of QMediaServiceProviderFactoryInterface::create", false, &_init_f_create_2025, &_call_f_create_2025);
  methods += new qt_gsi::GenericMethod ("release", "@brief Method void QMediaServiceProviderPlugin::release(QMediaService *service)\nThis is a reimplementation of QMediaServiceProviderFactoryInterface::release", false, &_init_f_release_1904, &_call_f_release_1904);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QMediaServiceProviderPlugin::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QMediaServiceProviderPlugin::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMediaServiceProviderPlugin::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMediaServiceProviderPlugin::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  methods += new qt_gsi::GenericMethod ("asQObject", "@brief Delivers the base class interface QObject of QMediaServiceProviderPlugin\nClass QMediaServiceProviderPlugin is derived from multiple base classes. This method delivers the QObject base class aspect.", false, &_init_f_QMediaServiceProviderPlugin_as_QObject, &_call_f_QMediaServiceProviderPlugin_as_QObject);
  methods += new qt_gsi::GenericMethod ("asConstQObject", "@brief Delivers the base class interface QObject of QMediaServiceProviderPlugin\nClass QMediaServiceProviderPlugin is derived from multiple base classes. This method delivers the QObject base class aspect.\n\nUse this version if you have a const reference.", true, &_init_f_QMediaServiceProviderPlugin_as_const_QObject, &_call_f_QMediaServiceProviderPlugin_as_const_QObject);
  methods += new qt_gsi::GenericMethod ("asQMediaServiceProviderFactoryInterface", "@brief Delivers the base class interface QMediaServiceProviderFactoryInterface of QMediaServiceProviderPlugin\nClass QMediaServiceProviderPlugin is derived from multiple base classes. This method delivers the QMediaServiceProviderFactoryInterface base class aspect.", false, &_init_f_QMediaServiceProviderPlugin_as_QMediaServiceProviderFactoryInterface, &_call_f_QMediaServiceProviderPlugin_as_QMediaServiceProviderFactoryInterface);
  methods += new qt_gsi::GenericMethod ("asConstQMediaServiceProviderFactoryInterface", "@brief Delivers the base class interface QMediaServiceProviderFactoryInterface of QMediaServiceProviderPlugin\nClass QMediaServiceProviderPlugin is derived from multiple base classes. This method delivers the QMediaServiceProviderFactoryInterface base class aspect.\n\nUse this version if you have a const reference.", true, &_init_f_QMediaServiceProviderPlugin_as_const_QMediaServiceProviderFactoryInterface, &_call_f_QMediaServiceProviderPlugin_as_const_QMediaServiceProviderFactoryInterface);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QMediaServiceProviderPlugin> decl_QMediaServiceProviderPlugin (qtdecl_QObject (), "QtMultimedia", "QMediaServiceProviderPlugin_Native",
  methods_QMediaServiceProviderPlugin (),
  "@hide\n@alias QMediaServiceProviderPlugin");

//  Additional base classes

gsi::Class<QMediaServiceProviderFactoryInterface> &qtdecl_QMediaServiceProviderFactoryInterface ();

gsi::ClassExt<QMediaServiceProviderPlugin> base_class_QMediaServiceProviderFactoryInterface_in_QMediaServiceProviderPlugin (qtdecl_QMediaServiceProviderFactoryInterface ());

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaServiceProviderPlugin> &qtdecl_QMediaServiceProviderPlugin () { return decl_QMediaServiceProviderPlugin; }

}


class QMediaServiceProviderPlugin_Adaptor : public QMediaServiceProviderPlugin, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaServiceProviderPlugin_Adaptor();

  //  [adaptor ctor] QMediaServiceProviderPlugin::QMediaServiceProviderPlugin()
  QMediaServiceProviderPlugin_Adaptor() : QMediaServiceProviderPlugin()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QMediaServiceProviderPlugin::isSignalConnected(const QMetaMethod &signal)
  bool fp_QMediaServiceProviderPlugin_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QMediaServiceProviderPlugin::isSignalConnected(signal);
  }

  //  [expose] int QMediaServiceProviderPlugin::receivers(const char *signal)
  int fp_QMediaServiceProviderPlugin_receivers_c1731 (const char *signal) const {
    return QMediaServiceProviderPlugin::receivers(signal);
  }

  //  [expose] QObject *QMediaServiceProviderPlugin::sender()
  QObject * fp_QMediaServiceProviderPlugin_sender_c0 () const {
    return QMediaServiceProviderPlugin::sender();
  }

  //  [expose] int QMediaServiceProviderPlugin::senderSignalIndex()
  int fp_QMediaServiceProviderPlugin_senderSignalIndex_c0 () const {
    return QMediaServiceProviderPlugin::senderSignalIndex();
  }

  //  [adaptor impl] QMediaService *QMediaServiceProviderPlugin::create(const QString &key)
  QMediaService * cbs_create_2025_0(const QString &key)
  {
    __SUPPRESS_UNUSED_WARNING (key);
    throw qt_gsi::AbstractMethodCalledException("create");
  }

  virtual QMediaService * create(const QString &key)
  {
    if (cb_create_2025_0.can_issue()) {
      return cb_create_2025_0.issue<QMediaServiceProviderPlugin_Adaptor, QMediaService *, const QString &>(&QMediaServiceProviderPlugin_Adaptor::cbs_create_2025_0, key);
    } else {
      throw qt_gsi::AbstractMethodCalledException("create");
    }
  }

  //  [emitter impl] void QMediaServiceProviderPlugin::destroyed(QObject *)
  void emitter_QMediaServiceProviderPlugin_destroyed_1302(QObject *arg1)
  {
    emit QMediaServiceProviderPlugin::destroyed(arg1);
  }

  //  [adaptor impl] bool QMediaServiceProviderPlugin::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QMediaServiceProviderPlugin::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMediaServiceProviderPlugin_Adaptor, bool, QEvent *>(&QMediaServiceProviderPlugin_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QMediaServiceProviderPlugin::event(_event);
    }
  }

  //  [adaptor impl] bool QMediaServiceProviderPlugin::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QMediaServiceProviderPlugin::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMediaServiceProviderPlugin_Adaptor, bool, QObject *, QEvent *>(&QMediaServiceProviderPlugin_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QMediaServiceProviderPlugin::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QMediaServiceProviderPlugin::objectNameChanged(const QString &objectName)
  void emitter_QMediaServiceProviderPlugin_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QMediaServiceProviderPlugin::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QMediaServiceProviderPlugin::release(QMediaService *service)
  void cbs_release_1904_0(QMediaService *service)
  {
    __SUPPRESS_UNUSED_WARNING (service);
    throw qt_gsi::AbstractMethodCalledException("release");
  }

  virtual void release(QMediaService *service)
  {
    if (cb_release_1904_0.can_issue()) {
      cb_release_1904_0.issue<QMediaServiceProviderPlugin_Adaptor, QMediaService *>(&QMediaServiceProviderPlugin_Adaptor::cbs_release_1904_0, service);
    } else {
      throw qt_gsi::AbstractMethodCalledException("release");
    }
  }

  //  [adaptor impl] void QMediaServiceProviderPlugin::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QMediaServiceProviderPlugin::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMediaServiceProviderPlugin_Adaptor, QChildEvent *>(&QMediaServiceProviderPlugin_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QMediaServiceProviderPlugin::childEvent(event);
    }
  }

  //  [adaptor impl] void QMediaServiceProviderPlugin::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QMediaServiceProviderPlugin::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMediaServiceProviderPlugin_Adaptor, QEvent *>(&QMediaServiceProviderPlugin_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QMediaServiceProviderPlugin::customEvent(event);
    }
  }

  //  [adaptor impl] void QMediaServiceProviderPlugin::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QMediaServiceProviderPlugin::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QMediaServiceProviderPlugin_Adaptor, const QMetaMethod &>(&QMediaServiceProviderPlugin_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QMediaServiceProviderPlugin::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QMediaServiceProviderPlugin::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QMediaServiceProviderPlugin::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMediaServiceProviderPlugin_Adaptor, QTimerEvent *>(&QMediaServiceProviderPlugin_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QMediaServiceProviderPlugin::timerEvent(event);
    }
  }

  gsi::Callback cb_create_2025_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_release_1904_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMediaServiceProviderPlugin_Adaptor::~QMediaServiceProviderPlugin_Adaptor() { }

//  Constructor QMediaServiceProviderPlugin::QMediaServiceProviderPlugin() (adaptor class)

static void _init_ctor_QMediaServiceProviderPlugin_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaServiceProviderPlugin_Adaptor> ();
}

static void _call_ctor_QMediaServiceProviderPlugin_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaServiceProviderPlugin_Adaptor *> (new QMediaServiceProviderPlugin_Adaptor ());
}


// void QMediaServiceProviderPlugin::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QMediaService *QMediaServiceProviderPlugin::create(const QString &key)

static void _init_cbs_create_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QMediaService * > ();
}

static void _call_cbs_create_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QMediaService * > ((QMediaService *)((QMediaServiceProviderPlugin_Adaptor *)cls)->cbs_create_2025_0 (arg1));
}

static void _set_callback_cbs_create_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cb_create_2025_0 = cb;
}


// void QMediaServiceProviderPlugin::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QMediaServiceProviderPlugin::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->emitter_QMediaServiceProviderPlugin_destroyed_1302 (arg1);
}


// void QMediaServiceProviderPlugin::disconnectNotify(const QMetaMethod &signal)

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
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QMediaServiceProviderPlugin::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMediaServiceProviderPlugin_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMediaServiceProviderPlugin::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMediaServiceProviderPlugin_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QMediaServiceProviderPlugin::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QMediaServiceProviderPlugin_Adaptor *)cls)->fp_QMediaServiceProviderPlugin_isSignalConnected_c2394 (arg1));
}


// emitter void QMediaServiceProviderPlugin::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->emitter_QMediaServiceProviderPlugin_objectNameChanged_4567 (arg1);
}


// exposed int QMediaServiceProviderPlugin::receivers(const char *signal)

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
  ret.write<int > ((int)((QMediaServiceProviderPlugin_Adaptor *)cls)->fp_QMediaServiceProviderPlugin_receivers_c1731 (arg1));
}


// void QMediaServiceProviderPlugin::release(QMediaService *service)

static void _init_cbs_release_1904_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<QMediaService * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_release_1904_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaService *arg1 = args.read<QMediaService * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cbs_release_1904_0 (arg1);
}

static void _set_callback_cbs_release_1904_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cb_release_1904_0 = cb;
}


// exposed QObject *QMediaServiceProviderPlugin::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMediaServiceProviderPlugin_Adaptor *)cls)->fp_QMediaServiceProviderPlugin_sender_c0 ());
}


// exposed int QMediaServiceProviderPlugin::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaServiceProviderPlugin_Adaptor *)cls)->fp_QMediaServiceProviderPlugin_senderSignalIndex_c0 ());
}


// void QMediaServiceProviderPlugin::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderPlugin_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaServiceProviderPlugin> &qtdecl_QMediaServiceProviderPlugin ();

static gsi::Methods methods_QMediaServiceProviderPlugin_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceProviderPlugin::QMediaServiceProviderPlugin()\nThis method creates an object of class QMediaServiceProviderPlugin.", &_init_ctor_QMediaServiceProviderPlugin_Adaptor_0, &_call_ctor_QMediaServiceProviderPlugin_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMediaServiceProviderPlugin::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("create|qt_create", "@brief Virtual method QMediaService *QMediaServiceProviderPlugin::create(const QString &key)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_create_2025_0, &_call_cbs_create_2025_0);
  methods += new qt_gsi::GenericMethod ("create|qt_create", "@hide", false, &_init_cbs_create_2025_0, &_call_cbs_create_2025_0, &_set_callback_cbs_create_2025_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMediaServiceProviderPlugin::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QMediaServiceProviderPlugin::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMediaServiceProviderPlugin::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMediaServiceProviderPlugin::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMediaServiceProviderPlugin::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QMediaServiceProviderPlugin::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QMediaServiceProviderPlugin::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMediaServiceProviderPlugin::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("release", "@brief Virtual method void QMediaServiceProviderPlugin::release(QMediaService *service)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_release_1904_0, &_call_cbs_release_1904_0);
  methods += new qt_gsi::GenericMethod ("release", "@hide", false, &_init_cbs_release_1904_0, &_call_cbs_release_1904_0, &_set_callback_cbs_release_1904_0);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMediaServiceProviderPlugin::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QMediaServiceProviderPlugin::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMediaServiceProviderPlugin::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QMediaServiceProviderPlugin_Adaptor> decl_QMediaServiceProviderPlugin_Adaptor (qtdecl_QMediaServiceProviderPlugin (), "QtMultimedia", "QMediaServiceProviderPlugin",
  methods_QMediaServiceProviderPlugin_Adaptor (),
  "@qt\n@brief Binding of QMediaServiceProviderPlugin");

}

