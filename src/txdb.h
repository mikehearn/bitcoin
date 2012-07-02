// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_TXDB_H
#define BITCOIN_TXDB_H

// Allow switching between LevelDB and BerkelyDB here as a temp workaround for lack
// of an up to date Windows port.

#ifdef USE_LEVELDB
#include "txdb-leveldb.h"
#else
#include "db.h"
#include "txdb-bdb.h"
#endif

#endif  // BITCOIN_TXDB_H
