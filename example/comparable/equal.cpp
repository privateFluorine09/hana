/*
@copyright Louis Dionne 2014
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/detail/assert.hpp>
#include <boost/hana/list/instance.hpp>
using namespace boost::hana;


int main() {
    //! [main]
    BOOST_HANA_CONSTEXPR_ASSERT(equal(list(1, 2), list(1, 2)));
    BOOST_HANA_CONSTEXPR_ASSERT(!equal('x', 'y'));
    BOOST_HANA_CONSTANT_ASSERT(!equal(list(1, 2), 'y'));
    //! [main]
}
