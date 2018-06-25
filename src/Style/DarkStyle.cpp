/*
 * Copyright (c) 2018, The bitcoin2network developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of bitcoin2network.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "DarkStyle.h"

namespace WalletGui {

DarkStyle::DarkStyle() : Style("dark", "Dark") {

}

QString DarkStyle::statusBarBackgroundColor() const {
  return "#010101";
}

QString DarkStyle::statusBarFontColor() const {
  return "#ffaa00";
}

QString DarkStyle::headerBackgroundColor() const {
  return "#fa010101";
}

QString DarkStyle::headerBorderColor() const {
  return "#010101";
}

QString DarkStyle::addressFontColor() const {
  return "#dd6611";
}

QString DarkStyle::balanceFontColor() const {
  return "#dd6611";
}

QString DarkStyle::toolButtonBackgroundColorNormal() const {
  return "#f2010101";
}

QString DarkStyle::toolButtonBackgroundColorHover() const {
  return "#99222333";
}

QString DarkStyle::toolButtonBackgroundColorPressed() const {
  return "#aa111222";
}

QString DarkStyle::toolButtonFontColorNormal() const {
  return "#ededed";
}

QString DarkStyle::toolButtonFontColorDisabled() const {
  return "#b2ededed";
}

QString DarkStyle::toolBarBorderColor() const {
  return "#010101";
}

QString DarkStyle::getWalletSyncGifFile() const {
  return QString(":icons/dark/wallet-sync");
}

QPixmap DarkStyle::getLogoPixmap() const {
  return QPixmap(QString(":icons/dark/logo"));
}

QPixmap DarkStyle::getBalanceIcon() const {
  return QPixmap(QString(":icons/dark/balance"));
}

QPixmap DarkStyle::getConnectedIcon() const {
  return QPixmap(QString(":icons/dark/connected"));
}

QPixmap DarkStyle::getDisconnectedIcon() const {
  return QPixmap(QString(":icons/dark/disconnected"));
}

QPixmap DarkStyle::getEncryptedIcon() const {
  return QPixmap(QString(":icons/dark/encrypted"));
}

QPixmap DarkStyle::getNotEncryptedIcon() const {
  return QPixmap(QString(":icons/dark/decrypted"));
}

QPixmap DarkStyle::getSyncedIcon() const {
  return QPixmap(QString(":icons/dark/synced"));
}

}
