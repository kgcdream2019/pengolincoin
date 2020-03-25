// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2019, Car Dash Ian Coin Developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2018-2019, The DeroGold Assosiation
// Copyright (c) 2018-2019, The BitcoinMono Developers
// Copyright (c) 2020 The COVID-19 Developers
// Copyright (c) 2020, PengolinCoin Developers
// Please see the included LICENSE file for more information


#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
    {0, "fd5ffa143504e93bb6c80a502eb723b5ecea062a613e2d1c03e5ac427a2d68c9"},
    {100, "65b9606c7ecfab2c0846392874b12aa33a0eccaa319a1fe6eddd50703abdc716"},
    {500, "56c3bf5243bab26cc62c8ff57a77f7e31f5d8eab55c9ee069581a3c34d0e9fa2"},
    {1000, "69090926e7ed0c2b820f0dbcade76b90c7b61ef96ff7e7197c1f6acf7a47d105"},
    {2500, "b77b521548b05200c94034f0c55493f7ae37ffa83f808ebb52acd6597173a80c"},
    {4000, "9325abafe1201a052fd6112595c6ec214b1a64d3818e9bbb038cbc03ece11390"}
};
} // namespace CryptoNote
