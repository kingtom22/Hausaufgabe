#include "Pupil.hpp"

#include <stdexcept>

using namespace std;

Pupil::Pupil(string Name, Elective Wahlfach_1, Elective Wahlfach_2 /*= Elective::PHIL*/, int Punktanzahl /*= 20*/)
{
    name = Name;
    elective1 = Wahlfach_1;
    elective2 = Wahlfach_2;
    points = Punktanzahl;
    if (name == "")
            throw runtime_error("Empty name!");
    if (Elective::ART == Wahlfach_1 || Elective::PHIL == Wahlfach_1)
            throw runtime_error("Invalid Elective 1!");
    if (Wahlfach_1 == Wahlfach_2)
            throw runtime_error("Elective 1 and Elective 2 are equal!");
    if (points < 0 || points > 100)
        throw runtime_error("Points are not between 0 and 100!");
}
