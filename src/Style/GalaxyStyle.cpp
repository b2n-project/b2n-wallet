/*
 * Copyright (c) 2018, The bitcoin2network developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of bitcoin2network.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "GalaxyStyle.h"

namespace WalletGui {

GalaxyStyle::GalaxyStyle() : Style("galaxy", "Galaxy") {

}

QString GalaxyStyle::statusBarBackgroundColor() const {
  return "#e7e7e7";
}

QString GalaxyStyle::statusBarFontColor() const {
  return "#000000";
}

QString GalaxyStyle::headerBackgroundColor() const {
  return "#e7e7e7";
}

QString GalaxyStyle::headerBorderColor() const {
  return "#dddddd";
}

QString GalaxyStyle::addressFontColor() const {
  return "#000000";
}

QString GalaxyStyle::balanceFontColor() const {
  return "#000000";
}

QString GalaxyStyle::toolButtonBackgroundColorNormal() const {
  return "#edf0f7";
}

QString GalaxyStyle::toolButtonBackgroundColorHover() const {
  return "#d1deeb";
}

QString GalaxyStyle::toolButtonBackgroundColorPressed() const {
  return "#5f9cc7";
}

QString GalaxyStyle::toolButtonFontColorNormal() const {
  return "#000000";
}

QString GalaxyStyle::toolButtonFontColorDisabled() const {
  return "#4d000000";
}

QString GalaxyStyle::toolBarBorderColor() const {
  return "#dddddd";
}

QString GalaxyStyle::getWalletSyncGifFile() const {
  return QString(":icons/light/wallet-sync");
}

QPixmap GalaxyStyle::getLogoPixmap() const {
  return QPixmap(QString(":icons/light/logo"));
}

QPixmap GalaxyStyle::getBalanceIcon() const {
  return QPixmap(QString(":icons/light/balance"));
}

QPixmap GalaxyStyle::getConnectedIcon() const {
  return QPixmap(QString(":icons/light/connected"));
}

QPixmap GalaxyStyle::getDisconnectedIcon() const {
  return QPixmap(QString(":icons/light/disconnected"));
}

QPixmap GalaxyStyle::getEncryptedIcon() const {
  return QPixmap(QString(":icons/light/encrypted"));
}

QPixmap GalaxyStyle::getNotEncryptedIcon() const {
  return QPixmap(QString(":icons/light/decrypted"));
}

QPixmap GalaxyStyle::getSyncedIcon() const {
  return QPixmap(QString(":icons/light/synced"));
}

}
