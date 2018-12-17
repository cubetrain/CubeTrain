// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11, c++14

// <variant>

// template <class ...Types> class variant;

#include <variant>

#include "test_macros.h"
#include "variant_test_helpers.hpp"

int main()
{
    // expected-error@variant:* 3 {{static_assert failed}}
    std::variant<int, int&> v; // expected-note {{requested here}}
    std::variant<int, const int &> v2; // expected-note {{requested here}}
    std::variant<int, int&&> v3; // expected-note {{requested here}}
}
