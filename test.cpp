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

TEST_CASE("Test choose function") 
{
    Pupil p("Béla", Elective::CH);
    CHECK(p.chose(Elective::CH) == 1);
    CHECK(p.chose(Elective::PHIL) == 2);
    CHECK(p.chose(Elective::ART) == 0);
}

TEST_CASE("Test change_points and get_points functions") 
{
    Pupil p("Béla", Elective::CH);
    CHECK(p.change_points(-5) == 15);
    CHECK(p.get_points() == 15);
    CHECK(p.change_points(10) == 25);
    CHECK(p.change_points(-30) == -5);
    CHECK(p.get_points() == 0);
    CHECK(p.change_points(110) == 110);
    CHECK(p.get_points() == 100);
}