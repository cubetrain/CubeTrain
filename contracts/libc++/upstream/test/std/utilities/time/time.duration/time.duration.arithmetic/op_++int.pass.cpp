//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <chrono>

// duration

// constexpr duration operator++(int);  // constexpr in c++17

#include <chrono>
#include <cassert>

#include "test_macros.h"

#if TEST_STD_VER > 14
constexpr bool test_constexpr()
{
    std::chrono::hours h1(3);
    std::chrono::hours h2 = h1++;
    return h1.count() == 4 && h2.count() == 3;
}
#endif

int main()
{
    {
    std::chrono::hours h1(3);
    std::chrono::hours h2 = h1++;
    assert(h1.count() == 4);
    assert(h2.count() == 3);
    }

#if TEST_STD_VER > 14
    static_assert(test_constexpr(), "");
#endif
}
