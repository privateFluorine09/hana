/*
@copyright Louis Dionne 2014
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/list/instance.hpp>

#include <boost/hana/detail/assert.hpp>
#include <boost/hana/integral.hpp>
using namespace boost::hana;


int main() {
    BOOST_HANA_CONSTANT_ASSERT(length(list()) == int_<0>);
    BOOST_HANA_CONSTANT_ASSERT(length(list(int_<0>)) == int_<1>);
    BOOST_HANA_CONSTANT_ASSERT(length(list(int_<0>, int_<1>)) == int_<2>);
    BOOST_HANA_CONSTANT_ASSERT(length(list(int_<0>, int_<1>, int_<2>)) == int_<3>);
    BOOST_HANA_CONSTANT_ASSERT(length(list(0, '1', 2.2)) == int_<3>);
    BOOST_HANA_CONSTANT_ASSERT(length(list(0, 1, 2)) == int_<3>);
}
