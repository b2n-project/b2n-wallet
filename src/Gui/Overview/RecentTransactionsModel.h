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

#include "Gui/Common/WalletWindowedItemModel.h"

namespace WalletGui {

class RecentTransactionsModel : public WalletWindowedItemModel {
  Q_OBJECT
  Q_DISABLE_COPY(RecentTransactionsModel)

public:
  RecentTransactionsModel(QAbstractItemModel* _sourceModel, QObject* _parent);
  ~RecentTransactionsModel();

protected:
  bool filterAcceptsColumn(int _source_column, const QModelIndex& _sourceParent) const override;
};

}
