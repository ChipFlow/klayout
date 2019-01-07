
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

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

/*
  External declarations for for Qt bindings

  DO NOT EDIT THIS FILE. 
  This file has been created automatically
*/

#if !defined(HDR_gsiQtCoreExternals)
#define HDR_gsiQtCoreExternals

#include "gsiClass.h"
#include "gsiQtCoreCommon.h"

class QAbstractAnimation;

namespace tl { template <> struct type_traits<QAbstractAnimation> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractAnimation> &qtdecl_QAbstractAnimation (); }

class QAbstractEventDispatcher;

namespace tl { template <> struct type_traits<QAbstractEventDispatcher> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractEventDispatcher> &qtdecl_QAbstractEventDispatcher (); }

class QAbstractItemModel;

namespace tl { template <> struct type_traits<QAbstractItemModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractItemModel> &qtdecl_QAbstractItemModel (); }

class QAbstractListModel;

namespace tl { template <> struct type_traits<QAbstractListModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractListModel> &qtdecl_QAbstractListModel (); }

class QAbstractNativeEventFilter;

namespace tl { template <> struct type_traits<QAbstractNativeEventFilter> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractNativeEventFilter> &qtdecl_QAbstractNativeEventFilter (); }

class QAbstractProxyModel;

namespace tl { template <> struct type_traits<QAbstractProxyModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractProxyModel> &qtdecl_QAbstractProxyModel (); }

class QAbstractState;

namespace tl { template <> struct type_traits<QAbstractState> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractState> &qtdecl_QAbstractState (); }

class QAbstractTableModel;

namespace tl { template <> struct type_traits<QAbstractTableModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractTableModel> &qtdecl_QAbstractTableModel (); }

class QAbstractTransition;

namespace tl { template <> struct type_traits<QAbstractTransition> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAbstractTransition> &qtdecl_QAbstractTransition (); }

class QAnimationDriver;

namespace tl { template <> struct type_traits<QAnimationDriver> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAnimationDriver> &qtdecl_QAnimationDriver (); }

class QAnimationGroup;

namespace tl { template <> struct type_traits<QAnimationGroup> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAnimationGroup> &qtdecl_QAnimationGroup (); }

class QAssociativeIterable;

namespace tl { template <> struct type_traits<QAssociativeIterable> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QAssociativeIterable> &qtdecl_QAssociativeIterable (); }

class QBasicMutex;

namespace tl { template <> struct type_traits<QBasicMutex> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QBasicMutex> &qtdecl_QBasicMutex (); }

class QBasicTimer;

namespace tl { template <> struct type_traits<QBasicTimer> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QBasicTimer> &qtdecl_QBasicTimer (); }

class QBuffer;

namespace tl { template <> struct type_traits<QBuffer> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QBuffer> &qtdecl_QBuffer (); }

struct QByteArrayDataPtr;

namespace tl { template <> struct type_traits<QByteArrayDataPtr> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QByteArrayDataPtr> &qtdecl_QByteArrayDataPtr (); }

class QByteArrayMatcher;

namespace tl { template <> struct type_traits<QByteArrayMatcher> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QByteArrayMatcher> &qtdecl_QByteArrayMatcher (); }

class QChildEvent;

namespace tl { template <> struct type_traits<QChildEvent> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QChildEvent> &qtdecl_QChildEvent (); }

class QCollator;

namespace tl { template <> struct type_traits<QCollator> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QCollator> &qtdecl_QCollator (); }

class QCollatorSortKey;

namespace tl { template <> struct type_traits<QCollatorSortKey> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QCollatorSortKey> &qtdecl_QCollatorSortKey (); }

class QCommandLineOption;

namespace tl { template <> struct type_traits<QCommandLineOption> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QCommandLineOption> &qtdecl_QCommandLineOption (); }

class QCommandLineParser;

namespace tl { template <> struct type_traits<QCommandLineParser> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QCommandLineParser> &qtdecl_QCommandLineParser (); }

class QCoreApplication;

namespace tl { template <> struct type_traits<QCoreApplication> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QCoreApplication> &qtdecl_QCoreApplication (); }

class QCryptographicHash;

namespace tl { template <> struct type_traits<QCryptographicHash> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QCryptographicHash> &qtdecl_QCryptographicHash (); }

class QDataStream;

namespace tl { template <> struct type_traits<QDataStream> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDataStream> &qtdecl_QDataStream (); }

class QDate;

namespace tl { template <> struct type_traits<QDate> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDate> &qtdecl_QDate (); }

class QDateTime;

namespace tl { template <> struct type_traits<QDateTime> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDateTime> &qtdecl_QDateTime (); }

class QDebug;

namespace tl { template <> struct type_traits<QDebug> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDebug> &qtdecl_QDebug (); }

class QDebugStateSaver;

namespace tl { template <> struct type_traits<QDebugStateSaver> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDebugStateSaver> &qtdecl_QDebugStateSaver (); }

class QDeferredDeleteEvent;

namespace tl { template <> struct type_traits<QDeferredDeleteEvent> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDeferredDeleteEvent> &qtdecl_QDeferredDeleteEvent (); }

class QDir;

namespace tl { template <> struct type_traits<QDir> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDir> &qtdecl_QDir (); }

class QDirIterator;

namespace tl { template <> struct type_traits<QDirIterator> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDirIterator> &qtdecl_QDirIterator (); }

class QDynamicPropertyChangeEvent;

namespace tl { template <> struct type_traits<QDynamicPropertyChangeEvent> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QDynamicPropertyChangeEvent> &qtdecl_QDynamicPropertyChangeEvent (); }

class QEasingCurve;

namespace tl { template <> struct type_traits<QEasingCurve> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QEasingCurve> &qtdecl_QEasingCurve (); }

class QElapsedTimer;

namespace tl { template <> struct type_traits<QElapsedTimer> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QElapsedTimer> &qtdecl_QElapsedTimer (); }

class QEvent;

namespace tl { template <> struct type_traits<QEvent> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QEvent> &qtdecl_QEvent (); }

class QEventLoop;

namespace tl { template <> struct type_traits<QEventLoop> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QEventLoop> &qtdecl_QEventLoop (); }

class QEventLoopLocker;

namespace tl { template <> struct type_traits<QEventLoopLocker> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QEventLoopLocker> &qtdecl_QEventLoopLocker (); }

class QEventTransition;

namespace tl { template <> struct type_traits<QEventTransition> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QEventTransition> &qtdecl_QEventTransition (); }

struct QFactoryInterface;

namespace tl { template <> struct type_traits<QFactoryInterface> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFactoryInterface> &qtdecl_QFactoryInterface (); }

class QFile;

namespace tl { template <> struct type_traits<QFile> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFile> &qtdecl_QFile (); }

class QFileDevice;

namespace tl { template <> struct type_traits<QFileDevice> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFileDevice> &qtdecl_QFileDevice (); }

class QFileInfo;

namespace tl { template <> struct type_traits<QFileInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFileInfo> &qtdecl_QFileInfo (); }

class QFileSelector;

namespace tl { template <> struct type_traits<QFileSelector> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFileSelector> &qtdecl_QFileSelector (); }

class QFileSystemWatcher;

namespace tl { template <> struct type_traits<QFileSystemWatcher> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFileSystemWatcher> &qtdecl_QFileSystemWatcher (); }

class QFinalState;

namespace tl { template <> struct type_traits<QFinalState> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QFinalState> &qtdecl_QFinalState (); }

class QHistoryState;

namespace tl { template <> struct type_traits<QHistoryState> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QHistoryState> &qtdecl_QHistoryState (); }

class QIODevice;

namespace tl { template <> struct type_traits<QIODevice> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QIODevice> &qtdecl_QIODevice (); }

class QIdentityProxyModel;

namespace tl { template <> struct type_traits<QIdentityProxyModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QIdentityProxyModel> &qtdecl_QIdentityProxyModel (); }

class QItemSelection;

namespace tl { template <> struct type_traits<QItemSelection> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QItemSelection> &qtdecl_QItemSelection (); }

class QItemSelectionModel;

namespace tl { template <> struct type_traits<QItemSelectionModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QItemSelectionModel> &qtdecl_QItemSelectionModel (); }

class QItemSelectionRange;

namespace tl { template <> struct type_traits<QItemSelectionRange> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QItemSelectionRange> &qtdecl_QItemSelectionRange (); }

class QJsonArray;

namespace tl { template <> struct type_traits<QJsonArray> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QJsonArray> &qtdecl_QJsonArray (); }

class QJsonDocument;

namespace tl { template <> struct type_traits<QJsonDocument> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QJsonDocument> &qtdecl_QJsonDocument (); }

class QJsonObject;

namespace tl { template <> struct type_traits<QJsonObject> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QJsonObject> &qtdecl_QJsonObject (); }

struct QJsonParseError;

namespace tl { template <> struct type_traits<QJsonParseError> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QJsonParseError> &qtdecl_QJsonParseError (); }

class QJsonValue;

namespace tl { template <> struct type_traits<QJsonValue> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QJsonValue> &qtdecl_QJsonValue (); }

class QJsonValuePtr;

namespace tl { template <> struct type_traits<QJsonValuePtr> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QJsonValuePtr> &qtdecl_QJsonValuePtr (); }

class QJsonValueRef;

namespace tl { template <> struct type_traits<QJsonValueRef> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QJsonValueRef> &qtdecl_QJsonValueRef (); }

class QJsonValueRefPtr;

namespace tl { template <> struct type_traits<QJsonValueRefPtr> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QJsonValueRefPtr> &qtdecl_QJsonValueRefPtr (); }

class QLibrary;

namespace tl { template <> struct type_traits<QLibrary> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLibrary> &qtdecl_QLibrary (); }

class QLibraryInfo;

namespace tl { template <> struct type_traits<QLibraryInfo> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLibraryInfo> &qtdecl_QLibraryInfo (); }

class QLine;

namespace tl { template <> struct type_traits<QLine> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLine> &qtdecl_QLine (); }

class QLineF;

namespace tl { template <> struct type_traits<QLineF> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLineF> &qtdecl_QLineF (); }

class QLocale;

namespace tl { template <> struct type_traits<QLocale> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLocale> &qtdecl_QLocale (); }

class QLockFile;

namespace tl { template <> struct type_traits<QLockFile> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLockFile> &qtdecl_QLockFile (); }

class QLoggingCategory;

namespace tl { template <> struct type_traits<QLoggingCategory> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QLoggingCategory> &qtdecl_QLoggingCategory (); }

struct QMapDataBase;

namespace tl { template <> struct type_traits<QMapDataBase> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMapDataBase> &qtdecl_QMapDataBase (); }

struct QMapNodeBase;

namespace tl { template <> struct type_traits<QMapNodeBase> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMapNodeBase> &qtdecl_QMapNodeBase (); }

class QMargins;

namespace tl { template <> struct type_traits<QMargins> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMargins> &qtdecl_QMargins (); }

class QMarginsF;

namespace tl { template <> struct type_traits<QMarginsF> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMarginsF> &qtdecl_QMarginsF (); }

class QMessageAuthenticationCode;

namespace tl { template <> struct type_traits<QMessageAuthenticationCode> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMessageAuthenticationCode> &qtdecl_QMessageAuthenticationCode (); }

class QMessageLogContext;

namespace tl { template <> struct type_traits<QMessageLogContext> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMessageLogContext> &qtdecl_QMessageLogContext (); }

class QMessageLogger;

namespace tl { template <> struct type_traits<QMessageLogger> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMessageLogger> &qtdecl_QMessageLogger (); }

class QMetaClassInfo;

namespace tl { template <> struct type_traits<QMetaClassInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaClassInfo> &qtdecl_QMetaClassInfo (); }

class QMetaEnum;

namespace tl { template <> struct type_traits<QMetaEnum> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaEnum> &qtdecl_QMetaEnum (); }

class QMetaMethod;

namespace tl { template <> struct type_traits<QMetaMethod> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaMethod> &qtdecl_QMetaMethod (); }

struct QMetaObject;

namespace tl { template <> struct type_traits<QMetaObject> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaObject> &qtdecl_QMetaObject (); }

class QMetaProperty;

namespace tl { template <> struct type_traits<QMetaProperty> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMetaProperty> &qtdecl_QMetaProperty (); }

class QMimeData;

namespace tl { template <> struct type_traits<QMimeData> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMimeData> &qtdecl_QMimeData (); }

class QMimeDatabase;

namespace tl { template <> struct type_traits<QMimeDatabase> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMimeDatabase> &qtdecl_QMimeDatabase (); }

class QMimeType;

namespace tl { template <> struct type_traits<QMimeType> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMimeType> &qtdecl_QMimeType (); }

class QModelIndex;

namespace tl { template <> struct type_traits<QModelIndex> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QModelIndex> &qtdecl_QModelIndex (); }

class QMutex;

namespace tl { template <> struct type_traits<QMutex> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QMutex> &qtdecl_QMutex (); }

class QNoDebug;

namespace tl { template <> struct type_traits<QNoDebug> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QNoDebug> &qtdecl_QNoDebug (); }

class QObject;

namespace tl { template <> struct type_traits<QObject> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QObject> &qtdecl_QObject (); }

class QParallelAnimationGroup;

namespace tl { template <> struct type_traits<QParallelAnimationGroup> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QParallelAnimationGroup> &qtdecl_QParallelAnimationGroup (); }

class QPauseAnimation;

namespace tl { template <> struct type_traits<QPauseAnimation> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPauseAnimation> &qtdecl_QPauseAnimation (); }

class QPersistentModelIndex;

namespace tl { template <> struct type_traits<QPersistentModelIndex> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPersistentModelIndex> &qtdecl_QPersistentModelIndex (); }

class QPluginLoader;

namespace tl { template <> struct type_traits<QPluginLoader> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPluginLoader> &qtdecl_QPluginLoader (); }

class QPoint;

namespace tl { template <> struct type_traits<QPoint> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPoint> &qtdecl_QPoint (); }

class QPointF;

namespace tl { template <> struct type_traits<QPointF> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPointF> &qtdecl_QPointF (); }

class QProcess;

namespace tl { template <> struct type_traits<QProcess> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QProcess> &qtdecl_QProcess (); }

class QProcessEnvironment;

namespace tl { template <> struct type_traits<QProcessEnvironment> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QProcessEnvironment> &qtdecl_QProcessEnvironment (); }

class QPropertyAnimation;

namespace tl { template <> struct type_traits<QPropertyAnimation> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QPropertyAnimation> &qtdecl_QPropertyAnimation (); }

class QReadLocker;

namespace tl { template <> struct type_traits<QReadLocker> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QReadLocker> &qtdecl_QReadLocker (); }

class QReadWriteLock;

namespace tl { template <> struct type_traits<QReadWriteLock> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QReadWriteLock> &qtdecl_QReadWriteLock (); }

class QRect;

namespace tl { template <> struct type_traits<QRect> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRect> &qtdecl_QRect (); }

class QRectF;

namespace tl { template <> struct type_traits<QRectF> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRectF> &qtdecl_QRectF (); }

class QRegExp;

namespace tl { template <> struct type_traits<QRegExp> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRegExp> &qtdecl_QRegExp (); }

class QRegularExpression;

namespace tl { template <> struct type_traits<QRegularExpression> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRegularExpression> &qtdecl_QRegularExpression (); }

class QRegularExpressionMatch;

namespace tl { template <> struct type_traits<QRegularExpressionMatch> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRegularExpressionMatch> &qtdecl_QRegularExpressionMatch (); }

class QRegularExpressionMatchIterator;

namespace tl { template <> struct type_traits<QRegularExpressionMatchIterator> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRegularExpressionMatchIterator> &qtdecl_QRegularExpressionMatchIterator (); }

class QResource;

namespace tl { template <> struct type_traits<QResource> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QResource> &qtdecl_QResource (); }

class QRunnable;

namespace tl { template <> struct type_traits<QRunnable> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QRunnable> &qtdecl_QRunnable (); }

class QSaveFile;

namespace tl { template <> struct type_traits<QSaveFile> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSaveFile> &qtdecl_QSaveFile (); }

class QSemaphore;

namespace tl { template <> struct type_traits<QSemaphore> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSemaphore> &qtdecl_QSemaphore (); }

class QSequentialAnimationGroup;

namespace tl { template <> struct type_traits<QSequentialAnimationGroup> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSequentialAnimationGroup> &qtdecl_QSequentialAnimationGroup (); }

class QSequentialIterable;

namespace tl { template <> struct type_traits<QSequentialIterable> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSequentialIterable> &qtdecl_QSequentialIterable (); }

class QSettings;

namespace tl { template <> struct type_traits<QSettings> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSettings> &qtdecl_QSettings (); }

class QSharedMemory;

namespace tl { template <> struct type_traits<QSharedMemory> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSharedMemory> &qtdecl_QSharedMemory (); }

class QSignalBlocker;

namespace tl { template <> struct type_traits<QSignalBlocker> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSignalBlocker> &qtdecl_QSignalBlocker (); }

class QSignalMapper;

namespace tl { template <> struct type_traits<QSignalMapper> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSignalMapper> &qtdecl_QSignalMapper (); }

class QSignalTransition;

namespace tl { template <> struct type_traits<QSignalTransition> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSignalTransition> &qtdecl_QSignalTransition (); }

class QSize;

namespace tl { template <> struct type_traits<QSize> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSize> &qtdecl_QSize (); }

class QSizeF;

namespace tl { template <> struct type_traits<QSizeF> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSizeF> &qtdecl_QSizeF (); }

class QSocketNotifier;

namespace tl { template <> struct type_traits<QSocketNotifier> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSocketNotifier> &qtdecl_QSocketNotifier (); }

class QSortFilterProxyModel;

namespace tl { template <> struct type_traits<QSortFilterProxyModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSortFilterProxyModel> &qtdecl_QSortFilterProxyModel (); }

class QStandardPaths;

namespace tl { template <> struct type_traits<QStandardPaths> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
  typedef tl::false_tag has_public_destructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QStandardPaths> &qtdecl_QStandardPaths (); }

class QState;

namespace tl { template <> struct type_traits<QState> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QState> &qtdecl_QState (); }

class QStateMachine;

namespace tl { template <> struct type_traits<QStateMachine> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QStateMachine> &qtdecl_QStateMachine (); }

struct QStaticPlugin;

namespace tl { template <> struct type_traits<QStaticPlugin> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QStaticPlugin> &qtdecl_QStaticPlugin (); }

class QStorageInfo;

namespace tl { template <> struct type_traits<QStorageInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QStorageInfo> &qtdecl_QStorageInfo (); }

struct QStringDataPtr;

namespace tl { template <> struct type_traits<QStringDataPtr> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QStringDataPtr> &qtdecl_QStringDataPtr (); }

class QStringListModel;

namespace tl { template <> struct type_traits<QStringListModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QStringListModel> &qtdecl_QStringListModel (); }

class QStringMatcher;

namespace tl { template <> struct type_traits<QStringMatcher> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QStringMatcher> &qtdecl_QStringMatcher (); }

class QSysInfo;

namespace tl { template <> struct type_traits<QSysInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSysInfo> &qtdecl_QSysInfo (); }

class QSystemSemaphore;

namespace tl { template <> struct type_traits<QSystemSemaphore> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QSystemSemaphore> &qtdecl_QSystemSemaphore (); }

class QTemporaryDir;

namespace tl { template <> struct type_traits<QTemporaryDir> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTemporaryDir> &qtdecl_QTemporaryDir (); }

class QTemporaryFile;

namespace tl { template <> struct type_traits<QTemporaryFile> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTemporaryFile> &qtdecl_QTemporaryFile (); }

class QTextBoundaryFinder;

namespace tl { template <> struct type_traits<QTextBoundaryFinder> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTextBoundaryFinder> &qtdecl_QTextBoundaryFinder (); }

class QTextCodec;

namespace tl { template <> struct type_traits<QTextCodec> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
  typedef tl::false_tag has_public_destructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTextCodec> &qtdecl_QTextCodec (); }

class QTextDecoder;

namespace tl { template <> struct type_traits<QTextDecoder> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTextDecoder> &qtdecl_QTextDecoder (); }

class QTextEncoder;

namespace tl { template <> struct type_traits<QTextEncoder> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTextEncoder> &qtdecl_QTextEncoder (); }

class QTextStream;

namespace tl { template <> struct type_traits<QTextStream> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTextStream> &qtdecl_QTextStream (); }

class QThread;

namespace tl { template <> struct type_traits<QThread> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QThread> &qtdecl_QThread (); }

class QThreadPool;

namespace tl { template <> struct type_traits<QThreadPool> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QThreadPool> &qtdecl_QThreadPool (); }

class QTime;

namespace tl { template <> struct type_traits<QTime> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTime> &qtdecl_QTime (); }

class QTimeLine;

namespace tl { template <> struct type_traits<QTimeLine> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTimeLine> &qtdecl_QTimeLine (); }

class QTimeZone;

namespace tl { template <> struct type_traits<QTimeZone> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTimeZone> &qtdecl_QTimeZone (); }

class QTimer;

namespace tl { template <> struct type_traits<QTimer> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTimer> &qtdecl_QTimer (); }

class QTimerEvent;

namespace tl { template <> struct type_traits<QTimerEvent> : public type_traits<void> {
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTimerEvent> &qtdecl_QTimerEvent (); }

class QTranslator;

namespace tl { template <> struct type_traits<QTranslator> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QTranslator> &qtdecl_QTranslator (); }

class QUrl;

namespace tl { template <> struct type_traits<QUrl> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QUrl> &qtdecl_QUrl (); }

class QUrlQuery;

namespace tl { template <> struct type_traits<QUrlQuery> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QUrlQuery> &qtdecl_QUrlQuery (); }

class QVariantAnimation;

namespace tl { template <> struct type_traits<QVariantAnimation> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QVariantAnimation> &qtdecl_QVariantAnimation (); }

class QWaitCondition;

namespace tl { template <> struct type_traits<QWaitCondition> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QWaitCondition> &qtdecl_QWaitCondition (); }

class QWriteLocker;

namespace tl { template <> struct type_traits<QWriteLocker> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QWriteLocker> &qtdecl_QWriteLocker (); }

class QXmlStreamAttribute;

namespace tl { template <> struct type_traits<QXmlStreamAttribute> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamAttribute> &qtdecl_QXmlStreamAttribute (); }

class QXmlStreamAttributes;

namespace tl { template <> struct type_traits<QXmlStreamAttributes> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamAttributes> &qtdecl_QXmlStreamAttributes (); }

class QXmlStreamEntityDeclaration;

namespace tl { template <> struct type_traits<QXmlStreamEntityDeclaration> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamEntityDeclaration> &qtdecl_QXmlStreamEntityDeclaration (); }

class QXmlStreamEntityResolver;

namespace tl { template <> struct type_traits<QXmlStreamEntityResolver> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamEntityResolver> &qtdecl_QXmlStreamEntityResolver (); }

class QXmlStreamNamespaceDeclaration;

namespace tl { template <> struct type_traits<QXmlStreamNamespaceDeclaration> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamNamespaceDeclaration> &qtdecl_QXmlStreamNamespaceDeclaration (); }

class QXmlStreamNotationDeclaration;

namespace tl { template <> struct type_traits<QXmlStreamNotationDeclaration> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamNotationDeclaration> &qtdecl_QXmlStreamNotationDeclaration (); }

class QXmlStreamReader;

namespace tl { template <> struct type_traits<QXmlStreamReader> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamReader> &qtdecl_QXmlStreamReader (); }

class QXmlStreamStringRef;

namespace tl { template <> struct type_traits<QXmlStreamStringRef> : public type_traits<void> {
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamStringRef> &qtdecl_QXmlStreamStringRef (); }

class QXmlStreamWriter;

namespace tl { template <> struct type_traits<QXmlStreamWriter> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamWriter> &qtdecl_QXmlStreamWriter (); }


#define QT_EXTERNAL_BASE(X) gsi::qtdecl_##X(),

#endif

