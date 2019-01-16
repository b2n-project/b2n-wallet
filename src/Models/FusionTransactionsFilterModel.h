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

#include <QSortFilterProxyModel>

#include "IOptimizationManager.h"

namespace WalletGui {

class IOptimizationManager;

class FusionTransactionsFilterModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FusionTransactionsFilterModel)

public:
  FusionTransactionsFilterModel(QAbstractItemModel* _sourceModel, IOptimizationManager* _optimizationManager, QObject* _parent);
  ~FusionTransactionsFilterModel();

protected:
  bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;

private:
  IOptimizationManager* m_optimizationManager;
};

}
