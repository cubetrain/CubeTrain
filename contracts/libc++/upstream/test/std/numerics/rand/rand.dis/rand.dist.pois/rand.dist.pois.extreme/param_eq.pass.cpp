//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <random>

// template<class RealType = double>
// class extreme_value_distribution
// {
//     class param_type;

#include <random>
#include <limits>
#include <cassert>

int main()
{
    {
        typedef std::extreme_value_distribution<> D;
        typedef D::param_type param_type;
        param_type p1(0.75, .5);
        param_type p2(0.75, .5);
        assert(p1 == p2);
    }
    {
        typedef std::extreme_value_distribution<> D;
        typedef D::param_type param_type;
        param_type p1(0.75, .5);
        param_type p2(0.5, .5);
        assert(p1 != p2);
    }
}
