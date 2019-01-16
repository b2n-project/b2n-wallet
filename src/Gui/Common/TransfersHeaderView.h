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

#include <QHeaderView>

namespace WalletGui {

class TransfersHeaderView : public QHeaderView {
  Q_OBJECT
  Q_DISABLE_COPY(TransfersHeaderView)

public:
  explicit TransfersHeaderView(QWidget* _parent);
  ~TransfersHeaderView();

protected:
  virtual void paintSection(QPainter* _painter, const QRect& _rect, int _logicalIndex) const override;
  virtual QSize sectionSizeFromContents(int _logicalIndex) const override;
};

}
