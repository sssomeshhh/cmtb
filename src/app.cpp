//
// -----------------------------------------------------------------------------
// File `app.cpp`
// User `sssomeshhh`
// Date `2022 Dec 09`
// Time `18:30 IST`
// -----------------------------------------------------------------------------
//
// Copyright (c) 2022 SomesH S
//
// Distributed under the MIT License.
// See LICENSE for more information.
//

#include "depAdl.hpp"
#include "depBit.hpp"
#include "depSdk.hpp"
#include "depTdl.hpp"

int main() {
  adl::depInit();
  bit::depInit();
  sdk::depInit();
  tdl::depInit();
  adl::depTest();
  bit::depTest();
  sdk::depTest();
  tdl::depTest();
  adl::depDeinit();
  bit::depDeinit();
  sdk::depDeinit();
  tdl::depDeinit();
  return 0;
}
