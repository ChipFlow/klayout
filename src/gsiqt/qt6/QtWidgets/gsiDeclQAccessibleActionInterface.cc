
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
*  @file gsiDeclQAccessibleActionInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleActionInterface>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleActionInterface

// QStringList QAccessibleActionInterface::actionNames()


static void _init_f_actionNames_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_actionNames_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QAccessibleActionInterface *)cls)->actionNames ());
}


// void QAccessibleActionInterface::doAction(const QString &actionName)


static void _init_f_doAction_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("actionName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_doAction_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleActionInterface *)cls)->doAction (arg1);
}


// QStringList QAccessibleActionInterface::keyBindingsForAction(const QString &actionName)


static void _init_f_keyBindingsForAction_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("actionName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_keyBindingsForAction_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QStringList > ((QStringList)((QAccessibleActionInterface *)cls)->keyBindingsForAction (arg1));
}


// QString QAccessibleActionInterface::localizedActionDescription(const QString &name)


static void _init_f_localizedActionDescription_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_localizedActionDescription_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QAccessibleActionInterface *)cls)->localizedActionDescription (arg1));
}


// QString QAccessibleActionInterface::localizedActionName(const QString &name)


static void _init_f_localizedActionName_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_localizedActionName_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QAccessibleActionInterface *)cls)->localizedActionName (arg1));
}


// static const QString &QAccessibleActionInterface::decreaseAction()


static void _init_f_decreaseAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QString & > ();
}

static void _call_f_decreaseAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QString & > ((const QString &)QAccessibleActionInterface::decreaseAction ());
}


// static const QString &QAccessibleActionInterface::increaseAction()


static void _init_f_increaseAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QString & > ();
}

static void _call_f_increaseAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QString & > ((const QString &)QAccessibleActionInterface::increaseAction ());
}


// static QString QAccessibleActionInterface::nextPageAction()


static void _init_f_nextPageAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_nextPageAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QAccessibleActionInterface::nextPageAction ());
}


// static const QString &QAccessibleActionInterface::pressAction()


static void _init_f_pressAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QString & > ();
}

static void _call_f_pressAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QString & > ((const QString &)QAccessibleActionInterface::pressAction ());
}


// static QString QAccessibleActionInterface::previousPageAction()


static void _init_f_previousPageAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_previousPageAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QAccessibleActionInterface::previousPageAction ());
}


// static QString QAccessibleActionInterface::scrollDownAction()


static void _init_f_scrollDownAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_scrollDownAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QAccessibleActionInterface::scrollDownAction ());
}


// static QString QAccessibleActionInterface::scrollLeftAction()


static void _init_f_scrollLeftAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_scrollLeftAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QAccessibleActionInterface::scrollLeftAction ());
}


// static QString QAccessibleActionInterface::scrollRightAction()


static void _init_f_scrollRightAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_scrollRightAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QAccessibleActionInterface::scrollRightAction ());
}


// static QString QAccessibleActionInterface::scrollUpAction()


static void _init_f_scrollUpAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_scrollUpAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QAccessibleActionInterface::scrollUpAction ());
}


// static const QString &QAccessibleActionInterface::setFocusAction()


static void _init_f_setFocusAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QString & > ();
}

static void _call_f_setFocusAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QString & > ((const QString &)QAccessibleActionInterface::setFocusAction ());
}


// static const QString &QAccessibleActionInterface::showMenuAction()


static void _init_f_showMenuAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QString & > ();
}

static void _call_f_showMenuAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QString & > ((const QString &)QAccessibleActionInterface::showMenuAction ());
}


// static const QString &QAccessibleActionInterface::toggleAction()


static void _init_f_toggleAction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QString & > ();
}

static void _call_f_toggleAction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QString & > ((const QString &)QAccessibleActionInterface::toggleAction ());
}


// static QString QAccessibleActionInterface::tr(const char *sourceText, const char *disambiguation, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sourceText");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("disambiguation", true, "nullptr");
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
  ret.write<QString > ((QString)QAccessibleActionInterface::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAccessibleActionInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("actionNames", "@brief Method QStringList QAccessibleActionInterface::actionNames()\n", true, &_init_f_actionNames_c0, &_call_f_actionNames_c0);
  methods += new qt_gsi::GenericMethod ("doAction", "@brief Method void QAccessibleActionInterface::doAction(const QString &actionName)\n", false, &_init_f_doAction_2025, &_call_f_doAction_2025);
  methods += new qt_gsi::GenericMethod ("keyBindingsForAction", "@brief Method QStringList QAccessibleActionInterface::keyBindingsForAction(const QString &actionName)\n", true, &_init_f_keyBindingsForAction_c2025, &_call_f_keyBindingsForAction_c2025);
  methods += new qt_gsi::GenericMethod ("localizedActionDescription", "@brief Method QString QAccessibleActionInterface::localizedActionDescription(const QString &name)\n", true, &_init_f_localizedActionDescription_c2025, &_call_f_localizedActionDescription_c2025);
  methods += new qt_gsi::GenericMethod ("localizedActionName", "@brief Method QString QAccessibleActionInterface::localizedActionName(const QString &name)\n", true, &_init_f_localizedActionName_c2025, &_call_f_localizedActionName_c2025);
  methods += new qt_gsi::GenericStaticMethod ("decreaseAction", "@brief Static method const QString &QAccessibleActionInterface::decreaseAction()\nThis method is static and can be called without an instance.", &_init_f_decreaseAction_0, &_call_f_decreaseAction_0);
  methods += new qt_gsi::GenericStaticMethod ("increaseAction", "@brief Static method const QString &QAccessibleActionInterface::increaseAction()\nThis method is static and can be called without an instance.", &_init_f_increaseAction_0, &_call_f_increaseAction_0);
  methods += new qt_gsi::GenericStaticMethod ("nextPageAction", "@brief Static method QString QAccessibleActionInterface::nextPageAction()\nThis method is static and can be called without an instance.", &_init_f_nextPageAction_0, &_call_f_nextPageAction_0);
  methods += new qt_gsi::GenericStaticMethod ("pressAction", "@brief Static method const QString &QAccessibleActionInterface::pressAction()\nThis method is static and can be called without an instance.", &_init_f_pressAction_0, &_call_f_pressAction_0);
  methods += new qt_gsi::GenericStaticMethod ("previousPageAction", "@brief Static method QString QAccessibleActionInterface::previousPageAction()\nThis method is static and can be called without an instance.", &_init_f_previousPageAction_0, &_call_f_previousPageAction_0);
  methods += new qt_gsi::GenericStaticMethod ("scrollDownAction", "@brief Static method QString QAccessibleActionInterface::scrollDownAction()\nThis method is static and can be called without an instance.", &_init_f_scrollDownAction_0, &_call_f_scrollDownAction_0);
  methods += new qt_gsi::GenericStaticMethod ("scrollLeftAction", "@brief Static method QString QAccessibleActionInterface::scrollLeftAction()\nThis method is static and can be called without an instance.", &_init_f_scrollLeftAction_0, &_call_f_scrollLeftAction_0);
  methods += new qt_gsi::GenericStaticMethod ("scrollRightAction", "@brief Static method QString QAccessibleActionInterface::scrollRightAction()\nThis method is static and can be called without an instance.", &_init_f_scrollRightAction_0, &_call_f_scrollRightAction_0);
  methods += new qt_gsi::GenericStaticMethod ("scrollUpAction", "@brief Static method QString QAccessibleActionInterface::scrollUpAction()\nThis method is static and can be called without an instance.", &_init_f_scrollUpAction_0, &_call_f_scrollUpAction_0);
  methods += new qt_gsi::GenericStaticMethod ("setFocusAction", "@brief Static method const QString &QAccessibleActionInterface::setFocusAction()\nThis method is static and can be called without an instance.", &_init_f_setFocusAction_0, &_call_f_setFocusAction_0);
  methods += new qt_gsi::GenericStaticMethod ("showMenuAction", "@brief Static method const QString &QAccessibleActionInterface::showMenuAction()\nThis method is static and can be called without an instance.", &_init_f_showMenuAction_0, &_call_f_showMenuAction_0);
  methods += new qt_gsi::GenericStaticMethod ("toggleAction", "@brief Static method const QString &QAccessibleActionInterface::toggleAction()\nThis method is static and can be called without an instance.", &_init_f_toggleAction_0, &_call_f_toggleAction_0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAccessibleActionInterface::tr(const char *sourceText, const char *disambiguation, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QAccessibleActionInterface> decl_QAccessibleActionInterface ("Qt", "QAccessibleActionInterface_Native",
  methods_QAccessibleActionInterface (),
  "@hide\n@alias QAccessibleActionInterface");

GSI_QT_PUBLIC gsi::Class<QAccessibleActionInterface> &qtdecl_QAccessibleActionInterface () { return decl_QAccessibleActionInterface; }

}


class QAccessibleActionInterface_Adaptor : public QAccessibleActionInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleActionInterface_Adaptor();

  //  [adaptor ctor] QAccessibleActionInterface::QAccessibleActionInterface()
  QAccessibleActionInterface_Adaptor() : QAccessibleActionInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QStringList QAccessibleActionInterface::actionNames()
  QStringList cbs_actionNames_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("actionNames");
  }

  virtual QStringList actionNames() const
  {
    if (cb_actionNames_c0_0.can_issue()) {
      return cb_actionNames_c0_0.issue<QAccessibleActionInterface_Adaptor, QStringList>(&QAccessibleActionInterface_Adaptor::cbs_actionNames_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("actionNames");
    }
  }

  //  [adaptor impl] void QAccessibleActionInterface::doAction(const QString &actionName)
  void cbs_doAction_2025_0(const QString &actionName)
  {
    __SUPPRESS_UNUSED_WARNING (actionName);
    throw qt_gsi::AbstractMethodCalledException("doAction");
  }

  virtual void doAction(const QString &actionName)
  {
    if (cb_doAction_2025_0.can_issue()) {
      cb_doAction_2025_0.issue<QAccessibleActionInterface_Adaptor, const QString &>(&QAccessibleActionInterface_Adaptor::cbs_doAction_2025_0, actionName);
    } else {
      throw qt_gsi::AbstractMethodCalledException("doAction");
    }
  }

  //  [adaptor impl] QStringList QAccessibleActionInterface::keyBindingsForAction(const QString &actionName)
  QStringList cbs_keyBindingsForAction_c2025_0(const QString &actionName) const
  {
    __SUPPRESS_UNUSED_WARNING (actionName);
    throw qt_gsi::AbstractMethodCalledException("keyBindingsForAction");
  }

  virtual QStringList keyBindingsForAction(const QString &actionName) const
  {
    if (cb_keyBindingsForAction_c2025_0.can_issue()) {
      return cb_keyBindingsForAction_c2025_0.issue<QAccessibleActionInterface_Adaptor, QStringList, const QString &>(&QAccessibleActionInterface_Adaptor::cbs_keyBindingsForAction_c2025_0, actionName);
    } else {
      throw qt_gsi::AbstractMethodCalledException("keyBindingsForAction");
    }
  }

  //  [adaptor impl] QString QAccessibleActionInterface::localizedActionDescription(const QString &name)
  QString cbs_localizedActionDescription_c2025_0(const QString &name) const
  {
    return QAccessibleActionInterface::localizedActionDescription(name);
  }

  virtual QString localizedActionDescription(const QString &name) const
  {
    if (cb_localizedActionDescription_c2025_0.can_issue()) {
      return cb_localizedActionDescription_c2025_0.issue<QAccessibleActionInterface_Adaptor, QString, const QString &>(&QAccessibleActionInterface_Adaptor::cbs_localizedActionDescription_c2025_0, name);
    } else {
      return QAccessibleActionInterface::localizedActionDescription(name);
    }
  }

  //  [adaptor impl] QString QAccessibleActionInterface::localizedActionName(const QString &name)
  QString cbs_localizedActionName_c2025_0(const QString &name) const
  {
    return QAccessibleActionInterface::localizedActionName(name);
  }

  virtual QString localizedActionName(const QString &name) const
  {
    if (cb_localizedActionName_c2025_0.can_issue()) {
      return cb_localizedActionName_c2025_0.issue<QAccessibleActionInterface_Adaptor, QString, const QString &>(&QAccessibleActionInterface_Adaptor::cbs_localizedActionName_c2025_0, name);
    } else {
      return QAccessibleActionInterface::localizedActionName(name);
    }
  }

  gsi::Callback cb_actionNames_c0_0;
  gsi::Callback cb_doAction_2025_0;
  gsi::Callback cb_keyBindingsForAction_c2025_0;
  gsi::Callback cb_localizedActionDescription_c2025_0;
  gsi::Callback cb_localizedActionName_c2025_0;
};

QAccessibleActionInterface_Adaptor::~QAccessibleActionInterface_Adaptor() { }

//  Constructor QAccessibleActionInterface::QAccessibleActionInterface() (adaptor class)

static void _init_ctor_QAccessibleActionInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAccessibleActionInterface_Adaptor> ();
}

static void _call_ctor_QAccessibleActionInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleActionInterface_Adaptor *> (new QAccessibleActionInterface_Adaptor ());
}


// QStringList QAccessibleActionInterface::actionNames()

static void _init_cbs_actionNames_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_actionNames_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QAccessibleActionInterface_Adaptor *)cls)->cbs_actionNames_c0_0 ());
}

static void _set_callback_cbs_actionNames_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleActionInterface_Adaptor *)cls)->cb_actionNames_c0_0 = cb;
}


// void QAccessibleActionInterface::doAction(const QString &actionName)

static void _init_cbs_doAction_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("actionName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_doAction_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleActionInterface_Adaptor *)cls)->cbs_doAction_2025_0 (arg1);
}

static void _set_callback_cbs_doAction_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleActionInterface_Adaptor *)cls)->cb_doAction_2025_0 = cb;
}


// QStringList QAccessibleActionInterface::keyBindingsForAction(const QString &actionName)

static void _init_cbs_keyBindingsForAction_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("actionName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_cbs_keyBindingsForAction_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QStringList > ((QStringList)((QAccessibleActionInterface_Adaptor *)cls)->cbs_keyBindingsForAction_c2025_0 (arg1));
}

static void _set_callback_cbs_keyBindingsForAction_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleActionInterface_Adaptor *)cls)->cb_keyBindingsForAction_c2025_0 = cb;
}


// QString QAccessibleActionInterface::localizedActionDescription(const QString &name)

static void _init_cbs_localizedActionDescription_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_localizedActionDescription_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QAccessibleActionInterface_Adaptor *)cls)->cbs_localizedActionDescription_c2025_0 (arg1));
}

static void _set_callback_cbs_localizedActionDescription_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleActionInterface_Adaptor *)cls)->cb_localizedActionDescription_c2025_0 = cb;
}


// QString QAccessibleActionInterface::localizedActionName(const QString &name)

static void _init_cbs_localizedActionName_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_localizedActionName_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QAccessibleActionInterface_Adaptor *)cls)->cbs_localizedActionName_c2025_0 (arg1));
}

static void _set_callback_cbs_localizedActionName_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleActionInterface_Adaptor *)cls)->cb_localizedActionName_c2025_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleActionInterface> &qtdecl_QAccessibleActionInterface ();

static gsi::Methods methods_QAccessibleActionInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleActionInterface::QAccessibleActionInterface()\nThis method creates an object of class QAccessibleActionInterface.", &_init_ctor_QAccessibleActionInterface_Adaptor_0, &_call_ctor_QAccessibleActionInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("actionNames", "@brief Virtual method QStringList QAccessibleActionInterface::actionNames()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_actionNames_c0_0, &_call_cbs_actionNames_c0_0);
  methods += new qt_gsi::GenericMethod ("actionNames", "@hide", true, &_init_cbs_actionNames_c0_0, &_call_cbs_actionNames_c0_0, &_set_callback_cbs_actionNames_c0_0);
  methods += new qt_gsi::GenericMethod ("doAction", "@brief Virtual method void QAccessibleActionInterface::doAction(const QString &actionName)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_doAction_2025_0, &_call_cbs_doAction_2025_0);
  methods += new qt_gsi::GenericMethod ("doAction", "@hide", false, &_init_cbs_doAction_2025_0, &_call_cbs_doAction_2025_0, &_set_callback_cbs_doAction_2025_0);
  methods += new qt_gsi::GenericMethod ("keyBindingsForAction", "@brief Virtual method QStringList QAccessibleActionInterface::keyBindingsForAction(const QString &actionName)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_keyBindingsForAction_c2025_0, &_call_cbs_keyBindingsForAction_c2025_0);
  methods += new qt_gsi::GenericMethod ("keyBindingsForAction", "@hide", true, &_init_cbs_keyBindingsForAction_c2025_0, &_call_cbs_keyBindingsForAction_c2025_0, &_set_callback_cbs_keyBindingsForAction_c2025_0);
  methods += new qt_gsi::GenericMethod ("localizedActionDescription", "@brief Virtual method QString QAccessibleActionInterface::localizedActionDescription(const QString &name)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_localizedActionDescription_c2025_0, &_call_cbs_localizedActionDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("localizedActionDescription", "@hide", true, &_init_cbs_localizedActionDescription_c2025_0, &_call_cbs_localizedActionDescription_c2025_0, &_set_callback_cbs_localizedActionDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("localizedActionName", "@brief Virtual method QString QAccessibleActionInterface::localizedActionName(const QString &name)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_localizedActionName_c2025_0, &_call_cbs_localizedActionName_c2025_0);
  methods += new qt_gsi::GenericMethod ("localizedActionName", "@hide", true, &_init_cbs_localizedActionName_c2025_0, &_call_cbs_localizedActionName_c2025_0, &_set_callback_cbs_localizedActionName_c2025_0);
  return methods;
}

gsi::Class<QAccessibleActionInterface_Adaptor> decl_QAccessibleActionInterface_Adaptor (qtdecl_QAccessibleActionInterface (), "Qt", "QAccessibleActionInterface",
  methods_QAccessibleActionInterface_Adaptor (),
  "@qt\n@brief Binding of QAccessibleActionInterface");

}

