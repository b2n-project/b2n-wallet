/*
 * Copyright (c) 2018, The bitcoin2network developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of bitcoin2network.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "WalletNavigationButton.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_NAVIGATION_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletNavigationButton {"
    "min-width: 136px;"
    "max-width: 136px;"
    "min-height: 30px;"
    "max-height: 30px;"
    "font-size: %fontSizeSmall%;"
    "border-radius: 2px;"
    "border: 1px solid %borderColor%;"
    "background-color: %backgroundColorGray%;"
    "color: %fontColorBlueNormal%;"
  "}"

  "WalletGui--WalletNavigationButton:hover {"
    "background-color: #ffffff;"
    "color: %fontColorBlueHover%;"
  "}"

  "WalletGui--WalletNavigationButton:pressed {"
    "background-color: %backgroundColorGray%;"
    "color: %fontColorBluePressed%;"
  "}";

}

WalletNavigationButton::WalletNavigationButton(QWidget* _parent) : QPushButton(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_NAVIGATION_BUTTON_STYLE_SHEET_TEMPLATE));
}

WalletNavigationButton::~WalletNavigationButton() {
}

}
