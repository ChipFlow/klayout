
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

/**
*  @file gsiDeclQt_4.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <Qt>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// namespace Qt

class Qt_Namespace { };


//  Implementation of the enum wrapper class for Qt::WindowFrameSection
namespace qt_gsi
{

static gsi::Enum<Qt::WindowFrameSection> decl_Qt_WindowFrameSection_Enum ("QtCore", "Qt_WindowFrameSection",
    gsi::enum_const ("NoSection", Qt::NoSection, "@brief Enum constant Qt::NoSection") +
    gsi::enum_const ("LeftSection", Qt::LeftSection, "@brief Enum constant Qt::LeftSection") +
    gsi::enum_const ("TopLeftSection", Qt::TopLeftSection, "@brief Enum constant Qt::TopLeftSection") +
    gsi::enum_const ("TopSection", Qt::TopSection, "@brief Enum constant Qt::TopSection") +
    gsi::enum_const ("TopRightSection", Qt::TopRightSection, "@brief Enum constant Qt::TopRightSection") +
    gsi::enum_const ("RightSection", Qt::RightSection, "@brief Enum constant Qt::RightSection") +
    gsi::enum_const ("BottomRightSection", Qt::BottomRightSection, "@brief Enum constant Qt::BottomRightSection") +
    gsi::enum_const ("BottomSection", Qt::BottomSection, "@brief Enum constant Qt::BottomSection") +
    gsi::enum_const ("BottomLeftSection", Qt::BottomLeftSection, "@brief Enum constant Qt::BottomLeftSection") +
    gsi::enum_const ("TitleBarArea", Qt::TitleBarArea, "@brief Enum constant Qt::TitleBarArea"),
  "@qt\n@brief This class represents the Qt::WindowFrameSection enum");

static gsi::QFlagsClass<Qt::WindowFrameSection > decl_Qt_WindowFrameSection_Enums ("QtCore", "Qt_QFlags_WindowFrameSection",
  "@qt\n@brief This class represents the QFlags<Qt::WindowFrameSection> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_WindowFrameSection_Enum_in_parent (decl_Qt_WindowFrameSection_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowFrameSection_Enum_as_child (decl_Qt_WindowFrameSection_Enum, "WindowFrameSection");
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowFrameSection_Enums_as_child (decl_Qt_WindowFrameSection_Enums, "QFlags_WindowFrameSection");

}


//  Implementation of the enum wrapper class for Qt::WindowModality
namespace qt_gsi
{

static gsi::Enum<Qt::WindowModality> decl_Qt_WindowModality_Enum ("QtCore", "Qt_WindowModality",
    gsi::enum_const ("NonModal", Qt::NonModal, "@brief Enum constant Qt::NonModal") +
    gsi::enum_const ("WindowModal", Qt::WindowModal, "@brief Enum constant Qt::WindowModal") +
    gsi::enum_const ("ApplicationModal", Qt::ApplicationModal, "@brief Enum constant Qt::ApplicationModal"),
  "@qt\n@brief This class represents the Qt::WindowModality enum");

static gsi::QFlagsClass<Qt::WindowModality > decl_Qt_WindowModality_Enums ("QtCore", "Qt_QFlags_WindowModality",
  "@qt\n@brief This class represents the QFlags<Qt::WindowModality> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_WindowModality_Enum_in_parent (decl_Qt_WindowModality_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowModality_Enum_as_child (decl_Qt_WindowModality_Enum, "WindowModality");
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowModality_Enums_as_child (decl_Qt_WindowModality_Enums, "QFlags_WindowModality");

}


//  Implementation of the enum wrapper class for Qt::WindowState
namespace qt_gsi
{

static gsi::Enum<Qt::WindowState> decl_Qt_WindowState_Enum ("QtCore", "Qt_WindowState",
    gsi::enum_const ("WindowNoState", Qt::WindowNoState, "@brief Enum constant Qt::WindowNoState") +
    gsi::enum_const ("WindowMinimized", Qt::WindowMinimized, "@brief Enum constant Qt::WindowMinimized") +
    gsi::enum_const ("WindowMaximized", Qt::WindowMaximized, "@brief Enum constant Qt::WindowMaximized") +
    gsi::enum_const ("WindowFullScreen", Qt::WindowFullScreen, "@brief Enum constant Qt::WindowFullScreen") +
    gsi::enum_const ("WindowActive", Qt::WindowActive, "@brief Enum constant Qt::WindowActive"),
  "@qt\n@brief This class represents the Qt::WindowState enum");

static gsi::QFlagsClass<Qt::WindowState > decl_Qt_WindowState_Enums ("QtCore", "Qt_QFlags_WindowState",
  "@qt\n@brief This class represents the QFlags<Qt::WindowState> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_WindowState_Enum_in_parent (decl_Qt_WindowState_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowState_Enum_as_child (decl_Qt_WindowState_Enum, "WindowState");
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowState_Enums_as_child (decl_Qt_WindowState_Enums, "QFlags_WindowState");

}


//  Implementation of the enum wrapper class for Qt::WindowType
namespace qt_gsi
{

static gsi::Enum<Qt::WindowType> decl_Qt_WindowType_Enum ("QtCore", "Qt_WindowType",
    gsi::enum_const ("Widget", Qt::Widget, "@brief Enum constant Qt::Widget") +
    gsi::enum_const ("Window", Qt::Window, "@brief Enum constant Qt::Window") +
    gsi::enum_const ("Dialog", Qt::Dialog, "@brief Enum constant Qt::Dialog") +
    gsi::enum_const ("Sheet", Qt::Sheet, "@brief Enum constant Qt::Sheet") +
    gsi::enum_const ("Drawer", Qt::Drawer, "@brief Enum constant Qt::Drawer") +
    gsi::enum_const ("Popup", Qt::Popup, "@brief Enum constant Qt::Popup") +
    gsi::enum_const ("Tool", Qt::Tool, "@brief Enum constant Qt::Tool") +
    gsi::enum_const ("ToolTip", Qt::ToolTip, "@brief Enum constant Qt::ToolTip") +
    gsi::enum_const ("SplashScreen", Qt::SplashScreen, "@brief Enum constant Qt::SplashScreen") +
    gsi::enum_const ("Desktop", Qt::Desktop, "@brief Enum constant Qt::Desktop") +
    gsi::enum_const ("SubWindow", Qt::SubWindow, "@brief Enum constant Qt::SubWindow") +
    gsi::enum_const ("ForeignWindow", Qt::ForeignWindow, "@brief Enum constant Qt::ForeignWindow") +
    gsi::enum_const ("CoverWindow", Qt::CoverWindow, "@brief Enum constant Qt::CoverWindow") +
    gsi::enum_const ("WindowType_Mask", Qt::WindowType_Mask, "@brief Enum constant Qt::WindowType_Mask") +
    gsi::enum_const ("MSWindowsFixedSizeDialogHint", Qt::MSWindowsFixedSizeDialogHint, "@brief Enum constant Qt::MSWindowsFixedSizeDialogHint") +
    gsi::enum_const ("MSWindowsOwnDC", Qt::MSWindowsOwnDC, "@brief Enum constant Qt::MSWindowsOwnDC") +
    gsi::enum_const ("BypassWindowManagerHint", Qt::BypassWindowManagerHint, "@brief Enum constant Qt::BypassWindowManagerHint") +
    gsi::enum_const ("X11BypassWindowManagerHint", Qt::X11BypassWindowManagerHint, "@brief Enum constant Qt::X11BypassWindowManagerHint") +
    gsi::enum_const ("FramelessWindowHint", Qt::FramelessWindowHint, "@brief Enum constant Qt::FramelessWindowHint") +
    gsi::enum_const ("WindowTitleHint", Qt::WindowTitleHint, "@brief Enum constant Qt::WindowTitleHint") +
    gsi::enum_const ("WindowSystemMenuHint", Qt::WindowSystemMenuHint, "@brief Enum constant Qt::WindowSystemMenuHint") +
    gsi::enum_const ("WindowMinimizeButtonHint", Qt::WindowMinimizeButtonHint, "@brief Enum constant Qt::WindowMinimizeButtonHint") +
    gsi::enum_const ("WindowMaximizeButtonHint", Qt::WindowMaximizeButtonHint, "@brief Enum constant Qt::WindowMaximizeButtonHint") +
    gsi::enum_const ("WindowMinMaxButtonsHint", Qt::WindowMinMaxButtonsHint, "@brief Enum constant Qt::WindowMinMaxButtonsHint") +
    gsi::enum_const ("WindowContextHelpButtonHint", Qt::WindowContextHelpButtonHint, "@brief Enum constant Qt::WindowContextHelpButtonHint") +
    gsi::enum_const ("WindowShadeButtonHint", Qt::WindowShadeButtonHint, "@brief Enum constant Qt::WindowShadeButtonHint") +
    gsi::enum_const ("WindowStaysOnTopHint", Qt::WindowStaysOnTopHint, "@brief Enum constant Qt::WindowStaysOnTopHint") +
    gsi::enum_const ("WindowTransparentForInput", Qt::WindowTransparentForInput, "@brief Enum constant Qt::WindowTransparentForInput") +
    gsi::enum_const ("WindowOverridesSystemGestures", Qt::WindowOverridesSystemGestures, "@brief Enum constant Qt::WindowOverridesSystemGestures") +
    gsi::enum_const ("WindowDoesNotAcceptFocus", Qt::WindowDoesNotAcceptFocus, "@brief Enum constant Qt::WindowDoesNotAcceptFocus") +
    gsi::enum_const ("MaximizeUsingFullscreenGeometryHint", Qt::MaximizeUsingFullscreenGeometryHint, "@brief Enum constant Qt::MaximizeUsingFullscreenGeometryHint") +
    gsi::enum_const ("CustomizeWindowHint", Qt::CustomizeWindowHint, "@brief Enum constant Qt::CustomizeWindowHint") +
    gsi::enum_const ("WindowStaysOnBottomHint", Qt::WindowStaysOnBottomHint, "@brief Enum constant Qt::WindowStaysOnBottomHint") +
    gsi::enum_const ("WindowCloseButtonHint", Qt::WindowCloseButtonHint, "@brief Enum constant Qt::WindowCloseButtonHint") +
    gsi::enum_const ("MacWindowToolBarButtonHint", Qt::MacWindowToolBarButtonHint, "@brief Enum constant Qt::MacWindowToolBarButtonHint") +
    gsi::enum_const ("BypassGraphicsProxyWidget", Qt::BypassGraphicsProxyWidget, "@brief Enum constant Qt::BypassGraphicsProxyWidget") +
    gsi::enum_const ("NoDropShadowWindowHint", Qt::NoDropShadowWindowHint, "@brief Enum constant Qt::NoDropShadowWindowHint") +
    gsi::enum_const ("WindowFullscreenButtonHint", Qt::WindowFullscreenButtonHint, "@brief Enum constant Qt::WindowFullscreenButtonHint"),
  "@qt\n@brief This class represents the Qt::WindowType enum");

static gsi::QFlagsClass<Qt::WindowType > decl_Qt_WindowType_Enums ("QtCore", "Qt_QFlags_WindowType",
  "@qt\n@brief This class represents the QFlags<Qt::WindowType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_WindowType_Enum_in_parent (decl_Qt_WindowType_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowType_Enum_as_child (decl_Qt_WindowType_Enum, "WindowType");
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowType_Enums_as_child (decl_Qt_WindowType_Enums, "QFlags_WindowType");

}

