//
// Created by shani on 04/06/2023.
//

#include "doctest.h"
#include "sources/MagicalContainer.hpp"


TEST_CASE("Adding and removing elements from container"){
    MagicalContainer con;
    con.addElement(3);
    con.addElement(7);
    CHECK(con.size() == 2);

    CHECK_NOTHROW(con.removeElement(7));
    CHECK(con.size() == 1);
    CHECK_THROWS(con.removeElement(5));  // 5 is not in container
}

TEST_CASE("Iteration order"){
    MagicalContainer con;

    con.addElement(2);
    con.addElement(4);
    con.addElement(1);
    con.addElement(3);
    con.addElement(5);

    /// AscendingIterator
    MagicalContainer::AscendingIterator ascItr(con);
    // Check the iterator iterates in ascending way
    CHECK(*ascItr == 1);
    ++ascItr;
    CHECK(*ascItr == 2);
    ++ascItr;
    CHECK(*ascItr == 3);
    ++ascItr;
    CHECK(*ascItr == 4);
    ++ascItr;
    CHECK(*ascItr == 5);
    ++ascItr;
    CHECK(ascItr == ascItr.end());

    /// PrimeIterator
    MagicalContainer::AscendingIterator primeItr(con);
    // Check the iterator iterates the prime numbers only
    CHECK(*primeItr == 1);
    ++primeItr;
    CHECK(*primeItr == 3);
    ++primeItr;
    CHECK(*primeItr == 5);
    ++primeItr;
    CHECK(primeItr == primeItr.end());

    /// SideCrossIterator
    MagicalContainer::AscendingIterator crossItr(con);
    // Check the iterator iterates in side cross way
    CHECK(*crossItr == 2);
    ++crossItr;
    CHECK(*crossItr == 5);
    ++crossItr;
    CHECK(*crossItr == 4);
    ++crossItr;
    CHECK(*crossItr == 3);
    ++crossItr;
    CHECK(*crossItr == 1);
    ++crossItr;
    CHECK(crossItr == crossItr.end());
}

TEST_CASE("operator="){
    MagicalContainer con({1,2,3,4});

    MagicalContainer con_copy;
    CHECK(con_copy.size() == 0);

    con_copy = con;
    CHECK(con_copy.size() == 4);

    MagicalContainer empty;
    con_copy = empty;

    CHECK(con_copy.size() == 0);
}

TEST_CASE("operator== , operator!="){
    MagicalContainer con({1, 2, 3, 4});
    MagicalContainer con2({1, 2, 3, 5});

    MagicalContainer::AscendingIterator ascItr(con);
    MagicalContainer::AscendingIterator ascItr_copy(con);
    CHECK(ascItr == ascItr_copy);

    MagicalContainer::AscendingIterator ascItr2(con);
    CHECK(ascItr2 != ascItr);
}