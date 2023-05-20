#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Pupil.hpp"

TEST_CASE("Check cunstructor of Pupil class")
{
    CHECK_THROWS_WITH(Pupil("", Elective::CH), "Empty name!");
    CHECK_THROWS_WITH(Pupil("Jani", Elective::PHIL), "Invalid Elective 1!");
    CHECK_THROWS_WITH(Pupil("Jani", Elective::ART), "Invalid Elective 1!");
    CHECK_THROWS_WITH(Pupil("Jani", Elective::CH, Elective::CH), "Elective 1 and Elective 2 are equal!");
}

TEST_CASE("Second test case") 
{
    CHECK_THROWS_WITH(Pupil("", Elective::CH), "Empty name!");
}
