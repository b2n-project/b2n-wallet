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

#include <QStyledItemDelegate>

namespace WalletGui {

class LinkLikeColumnDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(LinkLikeColumnDelegate)

public:
  explicit LinkLikeColumnDelegate(QObject* _parent);
  ~LinkLikeColumnDelegate();

  void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
};

}
