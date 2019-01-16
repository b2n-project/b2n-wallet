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

namespace WalletGui {

class ICryptoNoteAdapter;

class OverviewTransactionPoolModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(OverviewTransactionPoolModel)

public:
  explicit OverviewTransactionPoolModel(ICryptoNoteAdapter* _cryptoNoteAdapter, QObject* _parent);
  ~OverviewTransactionPoolModel();

  virtual QVariant data(const QModelIndex& _index, int _role) const override;
  virtual int rowCount(const QModelIndex& _parent) const override;

protected:
  virtual bool filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const override;

private:
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
};

}
