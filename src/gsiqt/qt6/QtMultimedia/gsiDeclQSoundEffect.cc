
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
*  @file gsiDeclQSoundEffect.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSoundEffect>
#include <QAudioDevice>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSoundEffect

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QSoundEffect::staticMetaObject);
}


// QAudioDevice QSoundEffect::audioDevice()


static void _init_f_audioDevice_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAudioDevice > ();
}

static void _call_f_audioDevice_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioDevice > ((QAudioDevice)((QSoundEffect *)cls)->audioDevice ());
}


// void QSoundEffect::audioDeviceChanged()


static void _init_f_audioDeviceChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_audioDeviceChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->audioDeviceChanged ();
}


// bool QSoundEffect::isLoaded()


static void _init_f_isLoaded_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isLoaded_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSoundEffect *)cls)->isLoaded ());
}


// bool QSoundEffect::isMuted()


static void _init_f_isMuted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isMuted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSoundEffect *)cls)->isMuted ());
}


// bool QSoundEffect::isPlaying()


static void _init_f_isPlaying_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isPlaying_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSoundEffect *)cls)->isPlaying ());
}


// void QSoundEffect::loadedChanged()


static void _init_f_loadedChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_loadedChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->loadedChanged ();
}


// int QSoundEffect::loopCount()


static void _init_f_loopCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_loopCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSoundEffect *)cls)->loopCount ());
}


// void QSoundEffect::loopCountChanged()


static void _init_f_loopCountChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_loopCountChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->loopCountChanged ();
}


// int QSoundEffect::loopsRemaining()


static void _init_f_loopsRemaining_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_loopsRemaining_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSoundEffect *)cls)->loopsRemaining ());
}


// void QSoundEffect::loopsRemainingChanged()


static void _init_f_loopsRemainingChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_loopsRemainingChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->loopsRemainingChanged ();
}


// void QSoundEffect::mutedChanged()


static void _init_f_mutedChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_mutedChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->mutedChanged ();
}


// void QSoundEffect::play()


static void _init_f_play_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_play_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->play ();
}


// void QSoundEffect::playingChanged()


static void _init_f_playingChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_playingChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->playingChanged ();
}


// void QSoundEffect::setAudioDevice(const QAudioDevice &device)


static void _init_f_setAudioDevice_2484 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QAudioDevice & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAudioDevice_2484 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDevice &arg1 = gsi::arg_reader<const QAudioDevice & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->setAudioDevice (arg1);
}


// void QSoundEffect::setLoopCount(int loopCount)


static void _init_f_setLoopCount_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("loopCount");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLoopCount_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->setLoopCount (arg1);
}


// void QSoundEffect::setMuted(bool muted)


static void _init_f_setMuted_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("muted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMuted_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->setMuted (arg1);
}


// void QSoundEffect::setSource(const QUrl &url)


static void _init_f_setSource_1701 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("url");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSource_1701 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = gsi::arg_reader<const QUrl & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->setSource (arg1);
}


// void QSoundEffect::setVolume(float volume)


static void _init_f_setVolume_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("volume");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVolume_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->setVolume (arg1);
}


// QUrl QSoundEffect::source()


static void _init_f_source_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QUrl > ();
}

static void _call_f_source_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QUrl > ((QUrl)((QSoundEffect *)cls)->source ());
}


// void QSoundEffect::sourceChanged()


static void _init_f_sourceChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_sourceChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->sourceChanged ();
}


// QSoundEffect::Status QSoundEffect::status()


static void _init_f_status_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSoundEffect::Status>::target_type > ();
}

static void _call_f_status_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSoundEffect::Status>::target_type > ((qt_gsi::Converter<QSoundEffect::Status>::target_type)qt_gsi::CppToQtAdaptor<QSoundEffect::Status>(((QSoundEffect *)cls)->status ()));
}


// void QSoundEffect::statusChanged()


static void _init_f_statusChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_statusChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->statusChanged ();
}


// void QSoundEffect::stop()


static void _init_f_stop_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_stop_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->stop ();
}


// float QSoundEffect::volume()


static void _init_f_volume_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_volume_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QSoundEffect *)cls)->volume ());
}


// void QSoundEffect::volumeChanged()


static void _init_f_volumeChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_volumeChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSoundEffect *)cls)->volumeChanged ();
}


// static QStringList QSoundEffect::supportedMimeTypes()


static void _init_f_supportedMimeTypes_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_supportedMimeTypes_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)QSoundEffect::supportedMimeTypes ());
}


// static QString QSoundEffect::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSoundEffect::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QSoundEffect () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("audioDevice", "@brief Method QAudioDevice QSoundEffect::audioDevice()\n", false, &_init_f_audioDevice_0, &_call_f_audioDevice_0);
  methods += new qt_gsi::GenericMethod ("audioDeviceChanged", "@brief Method void QSoundEffect::audioDeviceChanged()\n", false, &_init_f_audioDeviceChanged_0, &_call_f_audioDeviceChanged_0);
  methods += new qt_gsi::GenericMethod ("isLoaded?", "@brief Method bool QSoundEffect::isLoaded()\n", true, &_init_f_isLoaded_c0, &_call_f_isLoaded_c0);
  methods += new qt_gsi::GenericMethod ("isMuted?|:muted", "@brief Method bool QSoundEffect::isMuted()\n", true, &_init_f_isMuted_c0, &_call_f_isMuted_c0);
  methods += new qt_gsi::GenericMethod ("isPlaying?|:playing", "@brief Method bool QSoundEffect::isPlaying()\n", true, &_init_f_isPlaying_c0, &_call_f_isPlaying_c0);
  methods += new qt_gsi::GenericMethod ("loadedChanged", "@brief Method void QSoundEffect::loadedChanged()\n", false, &_init_f_loadedChanged_0, &_call_f_loadedChanged_0);
  methods += new qt_gsi::GenericMethod (":loopCount", "@brief Method int QSoundEffect::loopCount()\n", true, &_init_f_loopCount_c0, &_call_f_loopCount_c0);
  methods += new qt_gsi::GenericMethod ("loopCountChanged", "@brief Method void QSoundEffect::loopCountChanged()\n", false, &_init_f_loopCountChanged_0, &_call_f_loopCountChanged_0);
  methods += new qt_gsi::GenericMethod (":loopsRemaining", "@brief Method int QSoundEffect::loopsRemaining()\n", true, &_init_f_loopsRemaining_c0, &_call_f_loopsRemaining_c0);
  methods += new qt_gsi::GenericMethod ("loopsRemainingChanged", "@brief Method void QSoundEffect::loopsRemainingChanged()\n", false, &_init_f_loopsRemainingChanged_0, &_call_f_loopsRemainingChanged_0);
  methods += new qt_gsi::GenericMethod ("mutedChanged", "@brief Method void QSoundEffect::mutedChanged()\n", false, &_init_f_mutedChanged_0, &_call_f_mutedChanged_0);
  methods += new qt_gsi::GenericMethod ("play", "@brief Method void QSoundEffect::play()\n", false, &_init_f_play_0, &_call_f_play_0);
  methods += new qt_gsi::GenericMethod ("playingChanged", "@brief Method void QSoundEffect::playingChanged()\n", false, &_init_f_playingChanged_0, &_call_f_playingChanged_0);
  methods += new qt_gsi::GenericMethod ("setAudioDevice", "@brief Method void QSoundEffect::setAudioDevice(const QAudioDevice &device)\n", false, &_init_f_setAudioDevice_2484, &_call_f_setAudioDevice_2484);
  methods += new qt_gsi::GenericMethod ("setLoopCount|loopCount=", "@brief Method void QSoundEffect::setLoopCount(int loopCount)\n", false, &_init_f_setLoopCount_767, &_call_f_setLoopCount_767);
  methods += new qt_gsi::GenericMethod ("setMuted|muted=", "@brief Method void QSoundEffect::setMuted(bool muted)\n", false, &_init_f_setMuted_864, &_call_f_setMuted_864);
  methods += new qt_gsi::GenericMethod ("setSource|source=", "@brief Method void QSoundEffect::setSource(const QUrl &url)\n", false, &_init_f_setSource_1701, &_call_f_setSource_1701);
  methods += new qt_gsi::GenericMethod ("setVolume|volume=", "@brief Method void QSoundEffect::setVolume(float volume)\n", false, &_init_f_setVolume_970, &_call_f_setVolume_970);
  methods += new qt_gsi::GenericMethod (":source", "@brief Method QUrl QSoundEffect::source()\n", true, &_init_f_source_c0, &_call_f_source_c0);
  methods += new qt_gsi::GenericMethod ("sourceChanged", "@brief Method void QSoundEffect::sourceChanged()\n", false, &_init_f_sourceChanged_0, &_call_f_sourceChanged_0);
  methods += new qt_gsi::GenericMethod (":status", "@brief Method QSoundEffect::Status QSoundEffect::status()\n", true, &_init_f_status_c0, &_call_f_status_c0);
  methods += new qt_gsi::GenericMethod ("statusChanged", "@brief Method void QSoundEffect::statusChanged()\n", false, &_init_f_statusChanged_0, &_call_f_statusChanged_0);
  methods += new qt_gsi::GenericMethod ("stop", "@brief Method void QSoundEffect::stop()\n", false, &_init_f_stop_0, &_call_f_stop_0);
  methods += new qt_gsi::GenericMethod (":volume", "@brief Method float QSoundEffect::volume()\n", true, &_init_f_volume_c0, &_call_f_volume_c0);
  methods += new qt_gsi::GenericMethod ("volumeChanged", "@brief Method void QSoundEffect::volumeChanged()\n", false, &_init_f_volumeChanged_0, &_call_f_volumeChanged_0);
  methods += new qt_gsi::GenericStaticMethod ("supportedMimeTypes", "@brief Static method QStringList QSoundEffect::supportedMimeTypes()\nThis method is static and can be called without an instance.", &_init_f_supportedMimeTypes_0, &_call_f_supportedMimeTypes_0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QSoundEffect::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QSoundEffect> decl_QSoundEffect (qtdecl_QObject (), "QtMultimedia", "QSoundEffect_Native",
  methods_QSoundEffect (),
  "@hide\n@alias QSoundEffect");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QSoundEffect> &qtdecl_QSoundEffect () { return decl_QSoundEffect; }

}


class QSoundEffect_Adaptor : public QSoundEffect, public qt_gsi::QtObjectBase
{
public:

  virtual ~QSoundEffect_Adaptor();

  //  [adaptor ctor] QSoundEffect::QSoundEffect(QObject *parent)
  QSoundEffect_Adaptor() : QSoundEffect()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSoundEffect::QSoundEffect(QObject *parent)
  QSoundEffect_Adaptor(QObject *parent) : QSoundEffect(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSoundEffect::QSoundEffect(const QAudioDevice &audioDevice, QObject *parent)
  QSoundEffect_Adaptor(const QAudioDevice &audioDevice) : QSoundEffect(audioDevice)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QSoundEffect::QSoundEffect(const QAudioDevice &audioDevice, QObject *parent)
  QSoundEffect_Adaptor(const QAudioDevice &audioDevice, QObject *parent) : QSoundEffect(audioDevice, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QSoundEffect::isSignalConnected(const QMetaMethod &signal)
  bool fp_QSoundEffect_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QSoundEffect::isSignalConnected(signal);
  }

  //  [expose] int QSoundEffect::receivers(const char *signal)
  int fp_QSoundEffect_receivers_c1731 (const char *signal) const {
    return QSoundEffect::receivers(signal);
  }

  //  [expose] QObject *QSoundEffect::sender()
  QObject * fp_QSoundEffect_sender_c0 () const {
    return QSoundEffect::sender();
  }

  //  [expose] int QSoundEffect::senderSignalIndex()
  int fp_QSoundEffect_senderSignalIndex_c0 () const {
    return QSoundEffect::senderSignalIndex();
  }

  //  [adaptor impl] bool QSoundEffect::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QSoundEffect::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QSoundEffect_Adaptor, bool, QEvent *>(&QSoundEffect_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QSoundEffect::event(_event);
    }
  }

  //  [adaptor impl] bool QSoundEffect::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QSoundEffect::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QSoundEffect_Adaptor, bool, QObject *, QEvent *>(&QSoundEffect_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QSoundEffect::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] void QSoundEffect::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QSoundEffect::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QSoundEffect_Adaptor, QChildEvent *>(&QSoundEffect_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QSoundEffect::childEvent(event);
    }
  }

  //  [adaptor impl] void QSoundEffect::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QSoundEffect::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QSoundEffect_Adaptor, QEvent *>(&QSoundEffect_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QSoundEffect::customEvent(event);
    }
  }

  //  [adaptor impl] void QSoundEffect::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QSoundEffect::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QSoundEffect_Adaptor, const QMetaMethod &>(&QSoundEffect_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QSoundEffect::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QSoundEffect::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QSoundEffect::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QSoundEffect_Adaptor, QTimerEvent *>(&QSoundEffect_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QSoundEffect::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QSoundEffect_Adaptor::~QSoundEffect_Adaptor() { }

//  Constructor QSoundEffect::QSoundEffect(QObject *parent) (adaptor class)

static void _init_ctor_QSoundEffect_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QSoundEffect_Adaptor> ();
}

static void _call_ctor_QSoundEffect_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QSoundEffect_Adaptor *> (new QSoundEffect_Adaptor (arg1));
}


//  Constructor QSoundEffect::QSoundEffect(const QAudioDevice &audioDevice, QObject *parent) (adaptor class)

static void _init_ctor_QSoundEffect_Adaptor_3678 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("audioDevice");
  decl->add_arg<const QAudioDevice & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QSoundEffect_Adaptor> ();
}

static void _call_ctor_QSoundEffect_Adaptor_3678 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDevice &arg1 = gsi::arg_reader<const QAudioDevice & >() (args, heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QSoundEffect_Adaptor *> (new QSoundEffect_Adaptor (arg1, arg2));
}


// void QSoundEffect::childEvent(QChildEvent *event)

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
  ((QSoundEffect_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QSoundEffect_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QSoundEffect::customEvent(QEvent *event)

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
  ((QSoundEffect_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSoundEffect_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QSoundEffect::disconnectNotify(const QMetaMethod &signal)

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
  ((QSoundEffect_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QSoundEffect_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QSoundEffect::event(QEvent *event)

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
  ret.write<bool > ((bool)((QSoundEffect_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QSoundEffect_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QSoundEffect::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QSoundEffect_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QSoundEffect_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QSoundEffect::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QSoundEffect_Adaptor *)cls)->fp_QSoundEffect_isSignalConnected_c2394 (arg1));
}


// exposed int QSoundEffect::receivers(const char *signal)

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
  ret.write<int > ((int)((QSoundEffect_Adaptor *)cls)->fp_QSoundEffect_receivers_c1731 (arg1));
}


// exposed QObject *QSoundEffect::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QSoundEffect_Adaptor *)cls)->fp_QSoundEffect_sender_c0 ());
}


// exposed int QSoundEffect::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSoundEffect_Adaptor *)cls)->fp_QSoundEffect_senderSignalIndex_c0 ());
}


// void QSoundEffect::timerEvent(QTimerEvent *event)

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
  ((QSoundEffect_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QSoundEffect_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QSoundEffect> &qtdecl_QSoundEffect ();

static gsi::Methods methods_QSoundEffect_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSoundEffect::QSoundEffect(QObject *parent)\nThis method creates an object of class QSoundEffect.", &_init_ctor_QSoundEffect_Adaptor_1302, &_call_ctor_QSoundEffect_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSoundEffect::QSoundEffect(const QAudioDevice &audioDevice, QObject *parent)\nThis method creates an object of class QSoundEffect.", &_init_ctor_QSoundEffect_Adaptor_3678, &_call_ctor_QSoundEffect_Adaptor_3678);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QSoundEffect::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QSoundEffect::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QSoundEffect::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QSoundEffect::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QSoundEffect::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QSoundEffect::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QSoundEffect::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QSoundEffect::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QSoundEffect::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QSoundEffect::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QSoundEffect_Adaptor> decl_QSoundEffect_Adaptor (qtdecl_QSoundEffect (), "QtMultimedia", "QSoundEffect",
  methods_QSoundEffect_Adaptor (),
  "@qt\n@brief Binding of QSoundEffect");

}


//  Implementation of the enum wrapper class for QSoundEffect::Status
namespace qt_gsi
{

static gsi::Enum<QSoundEffect::Status> decl_QSoundEffect_Status_Enum ("QtMultimedia", "QSoundEffect_Status",
    gsi::enum_const ("Null", QSoundEffect::Null, "@brief Enum constant QSoundEffect::Null") +
    gsi::enum_const ("Loading", QSoundEffect::Loading, "@brief Enum constant QSoundEffect::Loading") +
    gsi::enum_const ("Ready", QSoundEffect::Ready, "@brief Enum constant QSoundEffect::Ready") +
    gsi::enum_const ("Error", QSoundEffect::Error, "@brief Enum constant QSoundEffect::Error"),
  "@qt\n@brief This class represents the QSoundEffect::Status enum");

static gsi::QFlagsClass<QSoundEffect::Status > decl_QSoundEffect_Status_Enums ("QtMultimedia", "QSoundEffect_QFlags_Status",
  "@qt\n@brief This class represents the QFlags<QSoundEffect::Status> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSoundEffect> inject_QSoundEffect_Status_Enum_in_parent (decl_QSoundEffect_Status_Enum.defs ());
static gsi::ClassExt<QSoundEffect> decl_QSoundEffect_Status_Enum_as_child (decl_QSoundEffect_Status_Enum, "Status");
static gsi::ClassExt<QSoundEffect> decl_QSoundEffect_Status_Enums_as_child (decl_QSoundEffect_Status_Enums, "QFlags_Status");

}

