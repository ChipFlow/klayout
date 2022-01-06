
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
*  @file gsiDeclQWidgetAction.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QWidgetAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QKeySequence>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QWidgetAction

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QWidgetAction::staticMetaObject);
}


// QWidget *QWidgetAction::defaultWidget()


static void _init_f_defaultWidget_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QWidget * > ();
}

static void _call_f_defaultWidget_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWidget * > ((QWidget *)((QWidgetAction *)cls)->defaultWidget ());
}


// void QWidgetAction::releaseWidget(QWidget *widget)


static void _init_f_releaseWidget_1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("widget");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_releaseWidget_1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWidgetAction *)cls)->releaseWidget (arg1);
}


// QWidget *QWidgetAction::requestWidget(QWidget *parent)


static void _init_f_requestWidget_1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<QWidget * > ();
}

static void _call_f_requestWidget_1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  ret.write<QWidget * > ((QWidget *)((QWidgetAction *)cls)->requestWidget (arg1));
}


// void QWidgetAction::setDefaultWidget(QWidget *w)


static void _init_f_setDefaultWidget_1315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDefaultWidget_1315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = gsi::arg_reader<QWidget * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWidgetAction *)cls)->setDefaultWidget (arg1);
}


// static QString QWidgetAction::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QWidgetAction::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QWidgetAction () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":defaultWidget", "@brief Method QWidget *QWidgetAction::defaultWidget()\n", true, &_init_f_defaultWidget_c0, &_call_f_defaultWidget_c0);
  methods += new qt_gsi::GenericMethod ("releaseWidget", "@brief Method void QWidgetAction::releaseWidget(QWidget *widget)\n", false, &_init_f_releaseWidget_1315, &_call_f_releaseWidget_1315);
  methods += new qt_gsi::GenericMethod ("requestWidget", "@brief Method QWidget *QWidgetAction::requestWidget(QWidget *parent)\n", false, &_init_f_requestWidget_1315, &_call_f_requestWidget_1315);
  methods += new qt_gsi::GenericMethod ("setDefaultWidget|defaultWidget=", "@brief Method void QWidgetAction::setDefaultWidget(QWidget *w)\n", false, &_init_f_setDefaultWidget_1315, &_call_f_setDefaultWidget_1315);
  methods += gsi::qt_signal ("changed()", "changed", "@brief Signal declaration for QWidgetAction::changed()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QWidgetAction::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("hovered()", "hovered", "@brief Signal declaration for QWidgetAction::hovered()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QWidgetAction::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<bool > ("toggled(bool)", "toggled", gsi::arg("arg1"), "@brief Signal declaration for QWidgetAction::toggled(bool)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<bool > ("triggered(bool)", "triggered", gsi::arg("checked"), "@brief Signal declaration for QWidgetAction::triggered(bool checked)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QWidgetAction::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QAction> &qtdecl_QAction ();

qt_gsi::QtNativeClass<QWidgetAction> decl_QWidgetAction (qtdecl_QAction (), "QtWidgets", "QWidgetAction_Native",
  methods_QWidgetAction (),
  "@hide\n@alias QWidgetAction");

GSI_QTWIDGETS_PUBLIC gsi::Class<QWidgetAction> &qtdecl_QWidgetAction () { return decl_QWidgetAction; }

}


class QWidgetAction_Adaptor : public QWidgetAction, public qt_gsi::QtObjectBase
{
public:

  virtual ~QWidgetAction_Adaptor();

  //  [adaptor ctor] QWidgetAction::QWidgetAction(QObject *parent)
  QWidgetAction_Adaptor(QObject *parent) : QWidgetAction(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] QList<QWidget *> QWidgetAction::createdWidgets()
  QList<QWidget *> fp_QWidgetAction_createdWidgets_c0 () const {
    return QWidgetAction::createdWidgets();
  }

  //  [expose] bool QWidgetAction::isSignalConnected(const QMetaMethod &signal)
  bool fp_QWidgetAction_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QWidgetAction::isSignalConnected(signal);
  }

  //  [expose] int QWidgetAction::receivers(const char *signal)
  int fp_QWidgetAction_receivers_c1731 (const char *signal) const {
    return QWidgetAction::receivers(signal);
  }

  //  [expose] QObject *QWidgetAction::sender()
  QObject * fp_QWidgetAction_sender_c0 () const {
    return QWidgetAction::sender();
  }

  //  [expose] int QWidgetAction::senderSignalIndex()
  int fp_QWidgetAction_senderSignalIndex_c0 () const {
    return QWidgetAction::senderSignalIndex();
  }

  //  [emitter impl] void QWidgetAction::changed()
  void emitter_QWidgetAction_changed_0()
  {
    emit QWidgetAction::changed();
  }

  //  [emitter impl] void QWidgetAction::destroyed(QObject *)
  void emitter_QWidgetAction_destroyed_1302(QObject *arg1)
  {
    emit QWidgetAction::destroyed(arg1);
  }

  //  [emitter impl] void QWidgetAction::hovered()
  void emitter_QWidgetAction_hovered_0()
  {
    emit QWidgetAction::hovered();
  }

  //  [emitter impl] void QWidgetAction::objectNameChanged(const QString &objectName)
  void emitter_QWidgetAction_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QWidgetAction::objectNameChanged(const QString &objectName)'");
  }

  //  [emitter impl] void QWidgetAction::toggled(bool)
  void emitter_QWidgetAction_toggled_864(bool arg1)
  {
    emit QWidgetAction::toggled(arg1);
  }

  //  [emitter impl] void QWidgetAction::triggered(bool checked)
  void emitter_QWidgetAction_triggered_864(bool checked)
  {
    emit QWidgetAction::triggered(checked);
  }

  //  [adaptor impl] void QWidgetAction::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QWidgetAction::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QWidgetAction_Adaptor, QChildEvent *>(&QWidgetAction_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QWidgetAction::childEvent(event);
    }
  }

  //  [adaptor impl] QWidget *QWidgetAction::createWidget(QWidget *parent)
  QWidget * cbs_createWidget_1315_0(QWidget *parent)
  {
    return QWidgetAction::createWidget(parent);
  }

  virtual QWidget * createWidget(QWidget *parent)
  {
    if (cb_createWidget_1315_0.can_issue()) {
      return cb_createWidget_1315_0.issue<QWidgetAction_Adaptor, QWidget *, QWidget *>(&QWidgetAction_Adaptor::cbs_createWidget_1315_0, parent);
    } else {
      return QWidgetAction::createWidget(parent);
    }
  }

  //  [adaptor impl] void QWidgetAction::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QWidgetAction::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QWidgetAction_Adaptor, QEvent *>(&QWidgetAction_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QWidgetAction::customEvent(event);
    }
  }

  //  [adaptor impl] void QWidgetAction::deleteWidget(QWidget *widget)
  void cbs_deleteWidget_1315_0(QWidget *widget)
  {
    QWidgetAction::deleteWidget(widget);
  }

  virtual void deleteWidget(QWidget *widget)
  {
    if (cb_deleteWidget_1315_0.can_issue()) {
      cb_deleteWidget_1315_0.issue<QWidgetAction_Adaptor, QWidget *>(&QWidgetAction_Adaptor::cbs_deleteWidget_1315_0, widget);
    } else {
      QWidgetAction::deleteWidget(widget);
    }
  }

  //  [adaptor impl] void QWidgetAction::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QWidgetAction::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QWidgetAction_Adaptor, const QMetaMethod &>(&QWidgetAction_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QWidgetAction::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QWidgetAction::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QWidgetAction::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QWidgetAction_Adaptor, bool, QEvent *>(&QWidgetAction_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QWidgetAction::event(arg1);
    }
  }

  //  [adaptor impl] bool QWidgetAction::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QWidgetAction::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QWidgetAction_Adaptor, bool, QObject *, QEvent *>(&QWidgetAction_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QWidgetAction::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QWidgetAction::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QWidgetAction::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QWidgetAction_Adaptor, QTimerEvent *>(&QWidgetAction_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QWidgetAction::timerEvent(event);
    }
  }

  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_createWidget_1315_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_deleteWidget_1315_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QWidgetAction_Adaptor::~QWidgetAction_Adaptor() { }

//  Constructor QWidgetAction::QWidgetAction(QObject *parent) (adaptor class)

static void _init_ctor_QWidgetAction_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QWidgetAction_Adaptor> ();
}

static void _call_ctor_QWidgetAction_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<QWidgetAction_Adaptor *> (new QWidgetAction_Adaptor (arg1));
}


// emitter void QWidgetAction::changed()

static void _init_emitter_changed_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_changed_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QWidgetAction_Adaptor *)cls)->emitter_QWidgetAction_changed_0 ();
}


// void QWidgetAction::childEvent(QChildEvent *event)

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
  ((QWidgetAction_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetAction_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QWidget *QWidgetAction::createWidget(QWidget *parent)

static void _init_cbs_createWidget_1315_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<QWidget * > ();
}

static void _call_cbs_createWidget_1315_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = args.read<QWidget * > (heap);
  ret.write<QWidget * > ((QWidget *)((QWidgetAction_Adaptor *)cls)->cbs_createWidget_1315_0 (arg1));
}

static void _set_callback_cbs_createWidget_1315_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetAction_Adaptor *)cls)->cb_createWidget_1315_0 = cb;
}


// exposed QList<QWidget *> QWidgetAction::createdWidgets()

static void _init_fp_createdWidgets_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QWidget *> > ();
}

static void _call_fp_createdWidgets_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QWidget *> > ((QList<QWidget *>)((QWidgetAction_Adaptor *)cls)->fp_QWidgetAction_createdWidgets_c0 ());
}


// void QWidgetAction::customEvent(QEvent *event)

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
  ((QWidgetAction_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetAction_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QWidgetAction::deleteWidget(QWidget *widget)

static void _init_cbs_deleteWidget_1315_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("widget");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_deleteWidget_1315_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = args.read<QWidget * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWidgetAction_Adaptor *)cls)->cbs_deleteWidget_1315_0 (arg1);
}

static void _set_callback_cbs_deleteWidget_1315_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetAction_Adaptor *)cls)->cb_deleteWidget_1315_0 = cb;
}


// emitter void QWidgetAction::destroyed(QObject *)

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
  ((QWidgetAction_Adaptor *)cls)->emitter_QWidgetAction_destroyed_1302 (arg1);
}


// void QWidgetAction::disconnectNotify(const QMetaMethod &signal)

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
  ((QWidgetAction_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetAction_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QWidgetAction::event(QEvent *)

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
  ret.write<bool > ((bool)((QWidgetAction_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetAction_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QWidgetAction::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QWidgetAction_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetAction_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QWidgetAction::hovered()

static void _init_emitter_hovered_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_hovered_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QWidgetAction_Adaptor *)cls)->emitter_QWidgetAction_hovered_0 ();
}


// exposed bool QWidgetAction::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QWidgetAction_Adaptor *)cls)->fp_QWidgetAction_isSignalConnected_c2394 (arg1));
}


// emitter void QWidgetAction::objectNameChanged(const QString &objectName)

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
  ((QWidgetAction_Adaptor *)cls)->emitter_QWidgetAction_objectNameChanged_4567 (arg1);
}


// exposed int QWidgetAction::receivers(const char *signal)

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
  ret.write<int > ((int)((QWidgetAction_Adaptor *)cls)->fp_QWidgetAction_receivers_c1731 (arg1));
}


// exposed QObject *QWidgetAction::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QWidgetAction_Adaptor *)cls)->fp_QWidgetAction_sender_c0 ());
}


// exposed int QWidgetAction::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QWidgetAction_Adaptor *)cls)->fp_QWidgetAction_senderSignalIndex_c0 ());
}


// void QWidgetAction::timerEvent(QTimerEvent *event)

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
  ((QWidgetAction_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QWidgetAction_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// emitter void QWidgetAction::toggled(bool)

static void _init_emitter_toggled_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_toggled_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  ((QWidgetAction_Adaptor *)cls)->emitter_QWidgetAction_toggled_864 (arg1);
}


// emitter void QWidgetAction::triggered(bool checked)

static void _init_emitter_triggered_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("checked", true, "false");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_triggered_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args ? gsi::arg_reader<bool >() (args, heap) : gsi::arg_maker<bool >() (false, heap);
  ((QWidgetAction_Adaptor *)cls)->emitter_QWidgetAction_triggered_864 (arg1);
}


namespace gsi
{

gsi::Class<QWidgetAction> &qtdecl_QWidgetAction ();

static gsi::Methods methods_QWidgetAction_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWidgetAction::QWidgetAction(QObject *parent)\nThis method creates an object of class QWidgetAction.", &_init_ctor_QWidgetAction_Adaptor_1302, &_call_ctor_QWidgetAction_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("emit_changed", "@brief Emitter for signal void QWidgetAction::changed()\nCall this method to emit this signal.", false, &_init_emitter_changed_0, &_call_emitter_changed_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QWidgetAction::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*createWidget", "@brief Virtual method QWidget *QWidgetAction::createWidget(QWidget *parent)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_createWidget_1315_0, &_call_cbs_createWidget_1315_0);
  methods += new qt_gsi::GenericMethod ("*createWidget", "@hide", false, &_init_cbs_createWidget_1315_0, &_call_cbs_createWidget_1315_0, &_set_callback_cbs_createWidget_1315_0);
  methods += new qt_gsi::GenericMethod ("*createdWidgets", "@brief Method QList<QWidget *> QWidgetAction::createdWidgets()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_createdWidgets_c0, &_call_fp_createdWidgets_c0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QWidgetAction::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*deleteWidget", "@brief Virtual method void QWidgetAction::deleteWidget(QWidget *widget)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_deleteWidget_1315_0, &_call_cbs_deleteWidget_1315_0);
  methods += new qt_gsi::GenericMethod ("*deleteWidget", "@hide", false, &_init_cbs_deleteWidget_1315_0, &_call_cbs_deleteWidget_1315_0, &_set_callback_cbs_deleteWidget_1315_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QWidgetAction::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QWidgetAction::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QWidgetAction::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*eventFilter", "@brief Virtual method bool QWidgetAction::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_hovered", "@brief Emitter for signal void QWidgetAction::hovered()\nCall this method to emit this signal.", false, &_init_emitter_hovered_0, &_call_emitter_hovered_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QWidgetAction::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QWidgetAction::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QWidgetAction::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QWidgetAction::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QWidgetAction::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QWidgetAction::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("emit_toggled", "@brief Emitter for signal void QWidgetAction::toggled(bool)\nCall this method to emit this signal.", false, &_init_emitter_toggled_864, &_call_emitter_toggled_864);
  methods += new qt_gsi::GenericMethod ("emit_triggered", "@brief Emitter for signal void QWidgetAction::triggered(bool checked)\nCall this method to emit this signal.", false, &_init_emitter_triggered_864, &_call_emitter_triggered_864);
  return methods;
}

gsi::Class<QWidgetAction_Adaptor> decl_QWidgetAction_Adaptor (qtdecl_QWidgetAction (), "QtWidgets", "QWidgetAction",
  methods_QWidgetAction_Adaptor (),
  "@qt\n@brief Binding of QWidgetAction");

}

