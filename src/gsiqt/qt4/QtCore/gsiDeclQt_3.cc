
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
*  @file gsiDeclQt_3.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <Qt>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// namespace Qt

class Qt_Namespace { };


//  Implementation of the enum wrapper class for Qt::ToolBarArea
namespace qt_gsi
{

static gsi::Enum<Qt::ToolBarArea> decl_Qt_ToolBarArea_Enum ("QtCore", "Qt_ToolBarArea",
    gsi::enum_const ("LeftToolBarArea", Qt::LeftToolBarArea, "@brief Enum constant Qt::LeftToolBarArea") +
    gsi::enum_const ("RightToolBarArea", Qt::RightToolBarArea, "@brief Enum constant Qt::RightToolBarArea") +
    gsi::enum_const ("TopToolBarArea", Qt::TopToolBarArea, "@brief Enum constant Qt::TopToolBarArea") +
    gsi::enum_const ("BottomToolBarArea", Qt::BottomToolBarArea, "@brief Enum constant Qt::BottomToolBarArea") +
    gsi::enum_const ("ToolBarArea_Mask", Qt::ToolBarArea_Mask, "@brief Enum constant Qt::ToolBarArea_Mask") +
    gsi::enum_const ("AllToolBarAreas", Qt::AllToolBarAreas, "@brief Enum constant Qt::AllToolBarAreas") +
    gsi::enum_const ("NoToolBarArea", Qt::NoToolBarArea, "@brief Enum constant Qt::NoToolBarArea"),
  "@qt\n@brief This class represents the Qt::ToolBarArea enum");

static gsi::QFlagsClass<Qt::ToolBarArea > decl_Qt_ToolBarArea_Enums ("QtCore", "Qt_QFlags_ToolBarArea",
  "@qt\n@brief This class represents the QFlags<Qt::ToolBarArea> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ToolBarArea_Enum_in_parent (decl_Qt_ToolBarArea_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ToolBarArea_Enum_as_child (decl_Qt_ToolBarArea_Enum, "ToolBarArea");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ToolBarArea_Enums_as_child (decl_Qt_ToolBarArea_Enums, "QFlags_ToolBarArea");

}


//  Implementation of the enum wrapper class for Qt::ToolBarAreaSizes
namespace qt_gsi
{

static gsi::Enum<Qt::ToolBarAreaSizes> decl_Qt_ToolBarAreaSizes_Enum ("QtCore", "Qt_ToolBarAreaSizes",
    gsi::enum_const ("NToolBarAreas", Qt::NToolBarAreas, "@brief Enum constant Qt::NToolBarAreas"),
  "@qt\n@brief This class represents the Qt::ToolBarAreaSizes enum");

static gsi::QFlagsClass<Qt::ToolBarAreaSizes > decl_Qt_ToolBarAreaSizes_Enums ("QtCore", "Qt_QFlags_ToolBarAreaSizes",
  "@qt\n@brief This class represents the QFlags<Qt::ToolBarAreaSizes> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ToolBarAreaSizes_Enum_in_parent (decl_Qt_ToolBarAreaSizes_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ToolBarAreaSizes_Enum_as_child (decl_Qt_ToolBarAreaSizes_Enum, "ToolBarAreaSizes");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ToolBarAreaSizes_Enums_as_child (decl_Qt_ToolBarAreaSizes_Enums, "QFlags_ToolBarAreaSizes");

}


//  Implementation of the enum wrapper class for Qt::ToolButtonStyle
namespace qt_gsi
{

static gsi::Enum<Qt::ToolButtonStyle> decl_Qt_ToolButtonStyle_Enum ("QtCore", "Qt_ToolButtonStyle",
    gsi::enum_const ("ToolButtonIconOnly", Qt::ToolButtonIconOnly, "@brief Enum constant Qt::ToolButtonIconOnly") +
    gsi::enum_const ("ToolButtonTextOnly", Qt::ToolButtonTextOnly, "@brief Enum constant Qt::ToolButtonTextOnly") +
    gsi::enum_const ("ToolButtonTextBesideIcon", Qt::ToolButtonTextBesideIcon, "@brief Enum constant Qt::ToolButtonTextBesideIcon") +
    gsi::enum_const ("ToolButtonTextUnderIcon", Qt::ToolButtonTextUnderIcon, "@brief Enum constant Qt::ToolButtonTextUnderIcon") +
    gsi::enum_const ("ToolButtonFollowStyle", Qt::ToolButtonFollowStyle, "@brief Enum constant Qt::ToolButtonFollowStyle"),
  "@qt\n@brief This class represents the Qt::ToolButtonStyle enum");

static gsi::QFlagsClass<Qt::ToolButtonStyle > decl_Qt_ToolButtonStyle_Enums ("QtCore", "Qt_QFlags_ToolButtonStyle",
  "@qt\n@brief This class represents the QFlags<Qt::ToolButtonStyle> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_ToolButtonStyle_Enum_in_parent (decl_Qt_ToolButtonStyle_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_ToolButtonStyle_Enum_as_child (decl_Qt_ToolButtonStyle_Enum, "ToolButtonStyle");
static gsi::ClassExt<Qt_Namespace> decl_Qt_ToolButtonStyle_Enums_as_child (decl_Qt_ToolButtonStyle_Enums, "QFlags_ToolButtonStyle");

}


//  Implementation of the enum wrapper class for Qt::TouchPointState
namespace qt_gsi
{

static gsi::Enum<Qt::TouchPointState> decl_Qt_TouchPointState_Enum ("QtCore", "Qt_TouchPointState",
    gsi::enum_const ("TouchPointPressed", Qt::TouchPointPressed, "@brief Enum constant Qt::TouchPointPressed") +
    gsi::enum_const ("TouchPointMoved", Qt::TouchPointMoved, "@brief Enum constant Qt::TouchPointMoved") +
    gsi::enum_const ("TouchPointStationary", Qt::TouchPointStationary, "@brief Enum constant Qt::TouchPointStationary") +
    gsi::enum_const ("TouchPointReleased", Qt::TouchPointReleased, "@brief Enum constant Qt::TouchPointReleased") +
    gsi::enum_const ("TouchPointStateMask", Qt::TouchPointStateMask, "@brief Enum constant Qt::TouchPointStateMask") +
    gsi::enum_const ("TouchPointPrimary", Qt::TouchPointPrimary, "@brief Enum constant Qt::TouchPointPrimary"),
  "@qt\n@brief This class represents the Qt::TouchPointState enum");

static gsi::QFlagsClass<Qt::TouchPointState > decl_Qt_TouchPointState_Enums ("QtCore", "Qt_QFlags_TouchPointState",
  "@qt\n@brief This class represents the QFlags<Qt::TouchPointState> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_TouchPointState_Enum_in_parent (decl_Qt_TouchPointState_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_TouchPointState_Enum_as_child (decl_Qt_TouchPointState_Enum, "TouchPointState");
static gsi::ClassExt<Qt_Namespace> decl_Qt_TouchPointState_Enums_as_child (decl_Qt_TouchPointState_Enums, "QFlags_TouchPointState");

}


//  Implementation of the enum wrapper class for Qt::TransformationMode
namespace qt_gsi
{

static gsi::Enum<Qt::TransformationMode> decl_Qt_TransformationMode_Enum ("QtCore", "Qt_TransformationMode",
    gsi::enum_const ("FastTransformation", Qt::FastTransformation, "@brief Enum constant Qt::FastTransformation") +
    gsi::enum_const ("SmoothTransformation", Qt::SmoothTransformation, "@brief Enum constant Qt::SmoothTransformation"),
  "@qt\n@brief This class represents the Qt::TransformationMode enum");

static gsi::QFlagsClass<Qt::TransformationMode > decl_Qt_TransformationMode_Enums ("QtCore", "Qt_QFlags_TransformationMode",
  "@qt\n@brief This class represents the QFlags<Qt::TransformationMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_TransformationMode_Enum_in_parent (decl_Qt_TransformationMode_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_TransformationMode_Enum_as_child (decl_Qt_TransformationMode_Enum, "TransformationMode");
static gsi::ClassExt<Qt_Namespace> decl_Qt_TransformationMode_Enums_as_child (decl_Qt_TransformationMode_Enums, "QFlags_TransformationMode");

}


//  Implementation of the enum wrapper class for Qt::UIEffect
namespace qt_gsi
{

static gsi::Enum<Qt::UIEffect> decl_Qt_UIEffect_Enum ("QtCore", "Qt_UIEffect",
    gsi::enum_const ("UI_General", Qt::UI_General, "@brief Enum constant Qt::UI_General") +
    gsi::enum_const ("UI_AnimateMenu", Qt::UI_AnimateMenu, "@brief Enum constant Qt::UI_AnimateMenu") +
    gsi::enum_const ("UI_FadeMenu", Qt::UI_FadeMenu, "@brief Enum constant Qt::UI_FadeMenu") +
    gsi::enum_const ("UI_AnimateCombo", Qt::UI_AnimateCombo, "@brief Enum constant Qt::UI_AnimateCombo") +
    gsi::enum_const ("UI_AnimateTooltip", Qt::UI_AnimateTooltip, "@brief Enum constant Qt::UI_AnimateTooltip") +
    gsi::enum_const ("UI_FadeTooltip", Qt::UI_FadeTooltip, "@brief Enum constant Qt::UI_FadeTooltip") +
    gsi::enum_const ("UI_AnimateToolBox", Qt::UI_AnimateToolBox, "@brief Enum constant Qt::UI_AnimateToolBox"),
  "@qt\n@brief This class represents the Qt::UIEffect enum");

static gsi::QFlagsClass<Qt::UIEffect > decl_Qt_UIEffect_Enums ("QtCore", "Qt_QFlags_UIEffect",
  "@qt\n@brief This class represents the QFlags<Qt::UIEffect> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_UIEffect_Enum_in_parent (decl_Qt_UIEffect_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_UIEffect_Enum_as_child (decl_Qt_UIEffect_Enum, "UIEffect");
static gsi::ClassExt<Qt_Namespace> decl_Qt_UIEffect_Enums_as_child (decl_Qt_UIEffect_Enums, "QFlags_UIEffect");

}


//  Implementation of the enum wrapper class for Qt::WidgetAttribute
namespace qt_gsi
{

static gsi::Enum<Qt::WidgetAttribute> decl_Qt_WidgetAttribute_Enum ("QtCore", "Qt_WidgetAttribute",
    gsi::enum_const ("WA_Disabled", Qt::WA_Disabled, "@brief Enum constant Qt::WA_Disabled") +
    gsi::enum_const ("WA_UnderMouse", Qt::WA_UnderMouse, "@brief Enum constant Qt::WA_UnderMouse") +
    gsi::enum_const ("WA_MouseTracking", Qt::WA_MouseTracking, "@brief Enum constant Qt::WA_MouseTracking") +
    gsi::enum_const ("WA_ContentsPropagated", Qt::WA_ContentsPropagated, "@brief Enum constant Qt::WA_ContentsPropagated") +
    gsi::enum_const ("WA_OpaquePaintEvent", Qt::WA_OpaquePaintEvent, "@brief Enum constant Qt::WA_OpaquePaintEvent") +
    gsi::enum_const ("WA_NoBackground", Qt::WA_NoBackground, "@brief Enum constant Qt::WA_NoBackground") +
    gsi::enum_const ("WA_StaticContents", Qt::WA_StaticContents, "@brief Enum constant Qt::WA_StaticContents") +
    gsi::enum_const ("WA_LaidOut", Qt::WA_LaidOut, "@brief Enum constant Qt::WA_LaidOut") +
    gsi::enum_const ("WA_PaintOnScreen", Qt::WA_PaintOnScreen, "@brief Enum constant Qt::WA_PaintOnScreen") +
    gsi::enum_const ("WA_NoSystemBackground", Qt::WA_NoSystemBackground, "@brief Enum constant Qt::WA_NoSystemBackground") +
    gsi::enum_const ("WA_UpdatesDisabled", Qt::WA_UpdatesDisabled, "@brief Enum constant Qt::WA_UpdatesDisabled") +
    gsi::enum_const ("WA_Mapped", Qt::WA_Mapped, "@brief Enum constant Qt::WA_Mapped") +
    gsi::enum_const ("WA_MacNoClickThrough", Qt::WA_MacNoClickThrough, "@brief Enum constant Qt::WA_MacNoClickThrough") +
    gsi::enum_const ("WA_PaintOutsidePaintEvent", Qt::WA_PaintOutsidePaintEvent, "@brief Enum constant Qt::WA_PaintOutsidePaintEvent") +
    gsi::enum_const ("WA_InputMethodEnabled", Qt::WA_InputMethodEnabled, "@brief Enum constant Qt::WA_InputMethodEnabled") +
    gsi::enum_const ("WA_WState_Visible", Qt::WA_WState_Visible, "@brief Enum constant Qt::WA_WState_Visible") +
    gsi::enum_const ("WA_WState_Hidden", Qt::WA_WState_Hidden, "@brief Enum constant Qt::WA_WState_Hidden") +
    gsi::enum_const ("WA_ForceDisabled", Qt::WA_ForceDisabled, "@brief Enum constant Qt::WA_ForceDisabled") +
    gsi::enum_const ("WA_KeyCompression", Qt::WA_KeyCompression, "@brief Enum constant Qt::WA_KeyCompression") +
    gsi::enum_const ("WA_PendingMoveEvent", Qt::WA_PendingMoveEvent, "@brief Enum constant Qt::WA_PendingMoveEvent") +
    gsi::enum_const ("WA_PendingResizeEvent", Qt::WA_PendingResizeEvent, "@brief Enum constant Qt::WA_PendingResizeEvent") +
    gsi::enum_const ("WA_SetPalette", Qt::WA_SetPalette, "@brief Enum constant Qt::WA_SetPalette") +
    gsi::enum_const ("WA_SetFont", Qt::WA_SetFont, "@brief Enum constant Qt::WA_SetFont") +
    gsi::enum_const ("WA_SetCursor", Qt::WA_SetCursor, "@brief Enum constant Qt::WA_SetCursor") +
    gsi::enum_const ("WA_NoChildEventsFromChildren", Qt::WA_NoChildEventsFromChildren, "@brief Enum constant Qt::WA_NoChildEventsFromChildren") +
    gsi::enum_const ("WA_WindowModified", Qt::WA_WindowModified, "@brief Enum constant Qt::WA_WindowModified") +
    gsi::enum_const ("WA_Resized", Qt::WA_Resized, "@brief Enum constant Qt::WA_Resized") +
    gsi::enum_const ("WA_Moved", Qt::WA_Moved, "@brief Enum constant Qt::WA_Moved") +
    gsi::enum_const ("WA_PendingUpdate", Qt::WA_PendingUpdate, "@brief Enum constant Qt::WA_PendingUpdate") +
    gsi::enum_const ("WA_InvalidSize", Qt::WA_InvalidSize, "@brief Enum constant Qt::WA_InvalidSize") +
    gsi::enum_const ("WA_MacBrushedMetal", Qt::WA_MacBrushedMetal, "@brief Enum constant Qt::WA_MacBrushedMetal") +
    gsi::enum_const ("WA_MacMetalStyle", Qt::WA_MacMetalStyle, "@brief Enum constant Qt::WA_MacMetalStyle") +
    gsi::enum_const ("WA_CustomWhatsThis", Qt::WA_CustomWhatsThis, "@brief Enum constant Qt::WA_CustomWhatsThis") +
    gsi::enum_const ("WA_LayoutOnEntireRect", Qt::WA_LayoutOnEntireRect, "@brief Enum constant Qt::WA_LayoutOnEntireRect") +
    gsi::enum_const ("WA_OutsideWSRange", Qt::WA_OutsideWSRange, "@brief Enum constant Qt::WA_OutsideWSRange") +
    gsi::enum_const ("WA_GrabbedShortcut", Qt::WA_GrabbedShortcut, "@brief Enum constant Qt::WA_GrabbedShortcut") +
    gsi::enum_const ("WA_TransparentForMouseEvents", Qt::WA_TransparentForMouseEvents, "@brief Enum constant Qt::WA_TransparentForMouseEvents") +
    gsi::enum_const ("WA_PaintUnclipped", Qt::WA_PaintUnclipped, "@brief Enum constant Qt::WA_PaintUnclipped") +
    gsi::enum_const ("WA_SetWindowIcon", Qt::WA_SetWindowIcon, "@brief Enum constant Qt::WA_SetWindowIcon") +
    gsi::enum_const ("WA_NoMouseReplay", Qt::WA_NoMouseReplay, "@brief Enum constant Qt::WA_NoMouseReplay") +
    gsi::enum_const ("WA_DeleteOnClose", Qt::WA_DeleteOnClose, "@brief Enum constant Qt::WA_DeleteOnClose") +
    gsi::enum_const ("WA_RightToLeft", Qt::WA_RightToLeft, "@brief Enum constant Qt::WA_RightToLeft") +
    gsi::enum_const ("WA_SetLayoutDirection", Qt::WA_SetLayoutDirection, "@brief Enum constant Qt::WA_SetLayoutDirection") +
    gsi::enum_const ("WA_NoChildEventsForParent", Qt::WA_NoChildEventsForParent, "@brief Enum constant Qt::WA_NoChildEventsForParent") +
    gsi::enum_const ("WA_ForceUpdatesDisabled", Qt::WA_ForceUpdatesDisabled, "@brief Enum constant Qt::WA_ForceUpdatesDisabled") +
    gsi::enum_const ("WA_WState_Created", Qt::WA_WState_Created, "@brief Enum constant Qt::WA_WState_Created") +
    gsi::enum_const ("WA_WState_CompressKeys", Qt::WA_WState_CompressKeys, "@brief Enum constant Qt::WA_WState_CompressKeys") +
    gsi::enum_const ("WA_WState_InPaintEvent", Qt::WA_WState_InPaintEvent, "@brief Enum constant Qt::WA_WState_InPaintEvent") +
    gsi::enum_const ("WA_WState_Reparented", Qt::WA_WState_Reparented, "@brief Enum constant Qt::WA_WState_Reparented") +
    gsi::enum_const ("WA_WState_ConfigPending", Qt::WA_WState_ConfigPending, "@brief Enum constant Qt::WA_WState_ConfigPending") +
    gsi::enum_const ("WA_WState_Polished", Qt::WA_WState_Polished, "@brief Enum constant Qt::WA_WState_Polished") +
    gsi::enum_const ("WA_WState_DND", Qt::WA_WState_DND, "@brief Enum constant Qt::WA_WState_DND") +
    gsi::enum_const ("WA_WState_OwnSizePolicy", Qt::WA_WState_OwnSizePolicy, "@brief Enum constant Qt::WA_WState_OwnSizePolicy") +
    gsi::enum_const ("WA_WState_ExplicitShowHide", Qt::WA_WState_ExplicitShowHide, "@brief Enum constant Qt::WA_WState_ExplicitShowHide") +
    gsi::enum_const ("WA_ShowModal", Qt::WA_ShowModal, "@brief Enum constant Qt::WA_ShowModal") +
    gsi::enum_const ("WA_MouseNoMask", Qt::WA_MouseNoMask, "@brief Enum constant Qt::WA_MouseNoMask") +
    gsi::enum_const ("WA_GroupLeader", Qt::WA_GroupLeader, "@brief Enum constant Qt::WA_GroupLeader") +
    gsi::enum_const ("WA_NoMousePropagation", Qt::WA_NoMousePropagation, "@brief Enum constant Qt::WA_NoMousePropagation") +
    gsi::enum_const ("WA_Hover", Qt::WA_Hover, "@brief Enum constant Qt::WA_Hover") +
    gsi::enum_const ("WA_InputMethodTransparent", Qt::WA_InputMethodTransparent, "@brief Enum constant Qt::WA_InputMethodTransparent") +
    gsi::enum_const ("WA_QuitOnClose", Qt::WA_QuitOnClose, "@brief Enum constant Qt::WA_QuitOnClose") +
    gsi::enum_const ("WA_KeyboardFocusChange", Qt::WA_KeyboardFocusChange, "@brief Enum constant Qt::WA_KeyboardFocusChange") +
    gsi::enum_const ("WA_AcceptDrops", Qt::WA_AcceptDrops, "@brief Enum constant Qt::WA_AcceptDrops") +
    gsi::enum_const ("WA_DropSiteRegistered", Qt::WA_DropSiteRegistered, "@brief Enum constant Qt::WA_DropSiteRegistered") +
    gsi::enum_const ("WA_ForceAcceptDrops", Qt::WA_ForceAcceptDrops, "@brief Enum constant Qt::WA_ForceAcceptDrops") +
    gsi::enum_const ("WA_WindowPropagation", Qt::WA_WindowPropagation, "@brief Enum constant Qt::WA_WindowPropagation") +
    gsi::enum_const ("WA_NoX11EventCompression", Qt::WA_NoX11EventCompression, "@brief Enum constant Qt::WA_NoX11EventCompression") +
    gsi::enum_const ("WA_TintedBackground", Qt::WA_TintedBackground, "@brief Enum constant Qt::WA_TintedBackground") +
    gsi::enum_const ("WA_X11OpenGLOverlay", Qt::WA_X11OpenGLOverlay, "@brief Enum constant Qt::WA_X11OpenGLOverlay") +
    gsi::enum_const ("WA_AlwaysShowToolTips", Qt::WA_AlwaysShowToolTips, "@brief Enum constant Qt::WA_AlwaysShowToolTips") +
    gsi::enum_const ("WA_MacOpaqueSizeGrip", Qt::WA_MacOpaqueSizeGrip, "@brief Enum constant Qt::WA_MacOpaqueSizeGrip") +
    gsi::enum_const ("WA_SetStyle", Qt::WA_SetStyle, "@brief Enum constant Qt::WA_SetStyle") +
    gsi::enum_const ("WA_SetLocale", Qt::WA_SetLocale, "@brief Enum constant Qt::WA_SetLocale") +
    gsi::enum_const ("WA_MacShowFocusRect", Qt::WA_MacShowFocusRect, "@brief Enum constant Qt::WA_MacShowFocusRect") +
    gsi::enum_const ("WA_MacNormalSize", Qt::WA_MacNormalSize, "@brief Enum constant Qt::WA_MacNormalSize") +
    gsi::enum_const ("WA_MacSmallSize", Qt::WA_MacSmallSize, "@brief Enum constant Qt::WA_MacSmallSize") +
    gsi::enum_const ("WA_MacMiniSize", Qt::WA_MacMiniSize, "@brief Enum constant Qt::WA_MacMiniSize") +
    gsi::enum_const ("WA_LayoutUsesWidgetRect", Qt::WA_LayoutUsesWidgetRect, "@brief Enum constant Qt::WA_LayoutUsesWidgetRect") +
    gsi::enum_const ("WA_StyledBackground", Qt::WA_StyledBackground, "@brief Enum constant Qt::WA_StyledBackground") +
    gsi::enum_const ("WA_MSWindowsUseDirect3D", Qt::WA_MSWindowsUseDirect3D, "@brief Enum constant Qt::WA_MSWindowsUseDirect3D") +
    gsi::enum_const ("WA_CanHostQMdiSubWindowTitleBar", Qt::WA_CanHostQMdiSubWindowTitleBar, "@brief Enum constant Qt::WA_CanHostQMdiSubWindowTitleBar") +
    gsi::enum_const ("WA_MacAlwaysShowToolWindow", Qt::WA_MacAlwaysShowToolWindow, "@brief Enum constant Qt::WA_MacAlwaysShowToolWindow") +
    gsi::enum_const ("WA_StyleSheet", Qt::WA_StyleSheet, "@brief Enum constant Qt::WA_StyleSheet") +
    gsi::enum_const ("WA_ShowWithoutActivating", Qt::WA_ShowWithoutActivating, "@brief Enum constant Qt::WA_ShowWithoutActivating") +
    gsi::enum_const ("WA_X11BypassTransientForHint", Qt::WA_X11BypassTransientForHint, "@brief Enum constant Qt::WA_X11BypassTransientForHint") +
    gsi::enum_const ("WA_NativeWindow", Qt::WA_NativeWindow, "@brief Enum constant Qt::WA_NativeWindow") +
    gsi::enum_const ("WA_DontCreateNativeAncestors", Qt::WA_DontCreateNativeAncestors, "@brief Enum constant Qt::WA_DontCreateNativeAncestors") +
    gsi::enum_const ("WA_MacVariableSize", Qt::WA_MacVariableSize, "@brief Enum constant Qt::WA_MacVariableSize") +
    gsi::enum_const ("WA_DontShowOnScreen", Qt::WA_DontShowOnScreen, "@brief Enum constant Qt::WA_DontShowOnScreen") +
    gsi::enum_const ("WA_X11NetWmWindowTypeDesktop", Qt::WA_X11NetWmWindowTypeDesktop, "@brief Enum constant Qt::WA_X11NetWmWindowTypeDesktop") +
    gsi::enum_const ("WA_X11NetWmWindowTypeDock", Qt::WA_X11NetWmWindowTypeDock, "@brief Enum constant Qt::WA_X11NetWmWindowTypeDock") +
    gsi::enum_const ("WA_X11NetWmWindowTypeToolBar", Qt::WA_X11NetWmWindowTypeToolBar, "@brief Enum constant Qt::WA_X11NetWmWindowTypeToolBar") +
    gsi::enum_const ("WA_X11NetWmWindowTypeMenu", Qt::WA_X11NetWmWindowTypeMenu, "@brief Enum constant Qt::WA_X11NetWmWindowTypeMenu") +
    gsi::enum_const ("WA_X11NetWmWindowTypeUtility", Qt::WA_X11NetWmWindowTypeUtility, "@brief Enum constant Qt::WA_X11NetWmWindowTypeUtility") +
    gsi::enum_const ("WA_X11NetWmWindowTypeSplash", Qt::WA_X11NetWmWindowTypeSplash, "@brief Enum constant Qt::WA_X11NetWmWindowTypeSplash") +
    gsi::enum_const ("WA_X11NetWmWindowTypeDialog", Qt::WA_X11NetWmWindowTypeDialog, "@brief Enum constant Qt::WA_X11NetWmWindowTypeDialog") +
    gsi::enum_const ("WA_X11NetWmWindowTypeDropDownMenu", Qt::WA_X11NetWmWindowTypeDropDownMenu, "@brief Enum constant Qt::WA_X11NetWmWindowTypeDropDownMenu") +
    gsi::enum_const ("WA_X11NetWmWindowTypePopupMenu", Qt::WA_X11NetWmWindowTypePopupMenu, "@brief Enum constant Qt::WA_X11NetWmWindowTypePopupMenu") +
    gsi::enum_const ("WA_X11NetWmWindowTypeToolTip", Qt::WA_X11NetWmWindowTypeToolTip, "@brief Enum constant Qt::WA_X11NetWmWindowTypeToolTip") +
    gsi::enum_const ("WA_X11NetWmWindowTypeNotification", Qt::WA_X11NetWmWindowTypeNotification, "@brief Enum constant Qt::WA_X11NetWmWindowTypeNotification") +
    gsi::enum_const ("WA_X11NetWmWindowTypeCombo", Qt::WA_X11NetWmWindowTypeCombo, "@brief Enum constant Qt::WA_X11NetWmWindowTypeCombo") +
    gsi::enum_const ("WA_X11NetWmWindowTypeDND", Qt::WA_X11NetWmWindowTypeDND, "@brief Enum constant Qt::WA_X11NetWmWindowTypeDND") +
    gsi::enum_const ("WA_MacFrameworkScaled", Qt::WA_MacFrameworkScaled, "@brief Enum constant Qt::WA_MacFrameworkScaled") +
    gsi::enum_const ("WA_SetWindowModality", Qt::WA_SetWindowModality, "@brief Enum constant Qt::WA_SetWindowModality") +
    gsi::enum_const ("WA_WState_WindowOpacitySet", Qt::WA_WState_WindowOpacitySet, "@brief Enum constant Qt::WA_WState_WindowOpacitySet") +
    gsi::enum_const ("WA_TranslucentBackground", Qt::WA_TranslucentBackground, "@brief Enum constant Qt::WA_TranslucentBackground") +
    gsi::enum_const ("WA_AcceptTouchEvents", Qt::WA_AcceptTouchEvents, "@brief Enum constant Qt::WA_AcceptTouchEvents") +
    gsi::enum_const ("WA_WState_AcceptedTouchBeginEvent", Qt::WA_WState_AcceptedTouchBeginEvent, "@brief Enum constant Qt::WA_WState_AcceptedTouchBeginEvent") +
    gsi::enum_const ("WA_TouchPadAcceptSingleTouchEvents", Qt::WA_TouchPadAcceptSingleTouchEvents, "@brief Enum constant Qt::WA_TouchPadAcceptSingleTouchEvents") +
    gsi::enum_const ("WA_MergeSoftkeys", Qt::WA_MergeSoftkeys, "@brief Enum constant Qt::WA_MergeSoftkeys") +
    gsi::enum_const ("WA_MergeSoftkeysRecursively", Qt::WA_MergeSoftkeysRecursively, "@brief Enum constant Qt::WA_MergeSoftkeysRecursively") +
    gsi::enum_const ("WA_AttributeCount", Qt::WA_AttributeCount, "@brief Enum constant Qt::WA_AttributeCount"),
  "@qt\n@brief This class represents the Qt::WidgetAttribute enum");

static gsi::QFlagsClass<Qt::WidgetAttribute > decl_Qt_WidgetAttribute_Enums ("QtCore", "Qt_QFlags_WidgetAttribute",
  "@qt\n@brief This class represents the QFlags<Qt::WidgetAttribute> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_WidgetAttribute_Enum_in_parent (decl_Qt_WidgetAttribute_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_WidgetAttribute_Enum_as_child (decl_Qt_WidgetAttribute_Enum, "WidgetAttribute");
static gsi::ClassExt<Qt_Namespace> decl_Qt_WidgetAttribute_Enums_as_child (decl_Qt_WidgetAttribute_Enums, "QFlags_WidgetAttribute");

}


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
    gsi::enum_const ("WindowType_Mask", Qt::WindowType_Mask, "@brief Enum constant Qt::WindowType_Mask") +
    gsi::enum_const ("MSWindowsFixedSizeDialogHint", Qt::MSWindowsFixedSizeDialogHint, "@brief Enum constant Qt::MSWindowsFixedSizeDialogHint") +
    gsi::enum_const ("MSWindowsOwnDC", Qt::MSWindowsOwnDC, "@brief Enum constant Qt::MSWindowsOwnDC") +
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
    gsi::enum_const ("CustomizeWindowHint", Qt::CustomizeWindowHint, "@brief Enum constant Qt::CustomizeWindowHint") +
    gsi::enum_const ("WindowStaysOnBottomHint", Qt::WindowStaysOnBottomHint, "@brief Enum constant Qt::WindowStaysOnBottomHint") +
    gsi::enum_const ("WindowCloseButtonHint", Qt::WindowCloseButtonHint, "@brief Enum constant Qt::WindowCloseButtonHint") +
    gsi::enum_const ("MacWindowToolBarButtonHint", Qt::MacWindowToolBarButtonHint, "@brief Enum constant Qt::MacWindowToolBarButtonHint") +
    gsi::enum_const ("BypassGraphicsProxyWidget", Qt::BypassGraphicsProxyWidget, "@brief Enum constant Qt::BypassGraphicsProxyWidget"),
  "@qt\n@brief This class represents the Qt::WindowType enum");

static gsi::QFlagsClass<Qt::WindowType > decl_Qt_WindowType_Enums ("QtCore", "Qt_QFlags_WindowType",
  "@qt\n@brief This class represents the QFlags<Qt::WindowType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<Qt_Namespace> inject_Qt_WindowType_Enum_in_parent (decl_Qt_WindowType_Enum.defs ());
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowType_Enum_as_child (decl_Qt_WindowType_Enum, "WindowType");
static gsi::ClassExt<Qt_Namespace> decl_Qt_WindowType_Enums_as_child (decl_Qt_WindowType_Enums, "QFlags_WindowType");

}

