// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class NavigationViewTemplateSettingsProperties
{
public:
    NavigationViewTemplateSettingsProperties();

    void BackButtonVisibility(winrt::Visibility const& value);
    winrt::Visibility BackButtonVisibility();

    void LeftPaneVisibility(winrt::Visibility const& value);
    winrt::Visibility LeftPaneVisibility();

    void OpenPaneWidth(double value);
    double OpenPaneWidth();

    void OverflowButtonVisibility(winrt::Visibility const& value);
    winrt::Visibility OverflowButtonVisibility();

    void PaneToggleButtonVisibility(winrt::Visibility const& value);
    winrt::Visibility PaneToggleButtonVisibility();

    void PaneToggleButtonWidth(double value);
    double PaneToggleButtonWidth();

    void SingleSelectionFollowsFocus(bool value);
    bool SingleSelectionFollowsFocus();

    void SmallerPaneToggleButtonWidth(double value);
    double SmallerPaneToggleButtonWidth();

    void TopPadding(double value);
    double TopPadding();

    void TopPaneVisibility(winrt::Visibility const& value);
    winrt::Visibility TopPaneVisibility();

    static winrt::DependencyProperty BackButtonVisibilityProperty() { return s_BackButtonVisibilityProperty; }
    static winrt::DependencyProperty LeftPaneVisibilityProperty() { return s_LeftPaneVisibilityProperty; }
    static winrt::DependencyProperty OpenPaneWidthProperty() { return s_OpenPaneWidthProperty; }
    static winrt::DependencyProperty OverflowButtonVisibilityProperty() { return s_OverflowButtonVisibilityProperty; }
    static winrt::DependencyProperty PaneToggleButtonVisibilityProperty() { return s_PaneToggleButtonVisibilityProperty; }
    static winrt::DependencyProperty PaneToggleButtonWidthProperty() { return s_PaneToggleButtonWidthProperty; }
    static winrt::DependencyProperty SingleSelectionFollowsFocusProperty() { return s_SingleSelectionFollowsFocusProperty; }
    static winrt::DependencyProperty SmallerPaneToggleButtonWidthProperty() { return s_SmallerPaneToggleButtonWidthProperty; }
    static winrt::DependencyProperty TopPaddingProperty() { return s_TopPaddingProperty; }
    static winrt::DependencyProperty TopPaneVisibilityProperty() { return s_TopPaneVisibilityProperty; }

    static GlobalDependencyProperty s_BackButtonVisibilityProperty;
    static GlobalDependencyProperty s_LeftPaneVisibilityProperty;
    static GlobalDependencyProperty s_OpenPaneWidthProperty;
    static GlobalDependencyProperty s_OverflowButtonVisibilityProperty;
    static GlobalDependencyProperty s_PaneToggleButtonVisibilityProperty;
    static GlobalDependencyProperty s_PaneToggleButtonWidthProperty;
    static GlobalDependencyProperty s_SingleSelectionFollowsFocusProperty;
    static GlobalDependencyProperty s_SmallerPaneToggleButtonWidthProperty;
    static GlobalDependencyProperty s_TopPaddingProperty;
    static GlobalDependencyProperty s_TopPaneVisibilityProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
