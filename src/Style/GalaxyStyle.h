/*
 * Copyright (c) 2018, The bitcoin2network developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of bitcoin2network.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include "Style.h"

namespace WalletGui {

class GalaxyStyle : public Style {
public:
  GalaxyStyle();

  virtual QString statusBarBackgroundColor() const override;
  virtual QString statusBarFontColor() const override;
  virtual QString headerBackgroundColor() const override;
  virtual QString headerBorderColor() const override;
  virtual QString addressFontColor() const override;
  virtual QString balanceFontColor() const override;
  virtual QString toolButtonBackgroundColorNormal() const override;
  virtual QString toolButtonBackgroundColorHover() const override;
  virtual QString toolButtonBackgroundColorPressed() const override;
  virtual QString toolButtonFontColorNormal() const override;
  virtual QString toolButtonFontColorDisabled() const override;
  virtual QString toolBarBorderColor() const override;

  virtual QString getWalletSyncGifFile() const override;
  virtual QPixmap getLogoPixmap() const override;
  virtual QPixmap getBalanceIcon() const override;
  virtual QPixmap getConnectedIcon() const override;
  virtual QPixmap getDisconnectedIcon() const override;
  virtual QPixmap getEncryptedIcon() const override;
  virtual QPixmap getNotEncryptedIcon() const override;
  virtual QPixmap getSyncedIcon() const override;
};

}