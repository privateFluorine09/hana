/*
@copyright Louis Dionne 2014
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/sandbox/searchable_set.hpp>

#include <boost/hana/detail/assert.hpp>
#include <boost/hana/detail/constexpr.hpp>
#include <boost/hana/detail/minimal/comparable.hpp>
using namespace boost::hana;


template <int i>
constexpr auto x = detail::minimal::comparable<>(i);

BOOST_HANA_CONSTEXPR_LAMBDA auto is = [](auto x) {
    return [=](auto y) { return equal(x, y); };
};

int main() {
    BOOST_HANA_CONSTEXPR_ASSERT( forsome(singleton(x<0>), is(x<0>)));
    BOOST_HANA_CONSTEXPR_ASSERT(!forsome(singleton(x<0>), is(x<1>)));
    BOOST_HANA_CONSTEXPR_ASSERT( forsome(doubleton(x<0>, x<1>), is(x<0>)));
    BOOST_HANA_CONSTEXPR_ASSERT( forsome(doubleton(x<0>, x<1>), is(x<1>)));
    BOOST_HANA_CONSTEXPR_ASSERT(!forsome(doubleton(x<0>, x<1>), is(x<2>)));
}
