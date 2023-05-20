#include "Pupil.h"

#include <stdexcept>

using namespace std;

Pupil::Pupil(string Name, Elective Wahlfach_1, Elective Wahlfach_2 /*= Elective::PHIL*/, int Punktanzahl /*= 20*/)
{
    name = Name;
    elective1 = Wahlfach_1;
    elective2 = Wahlfach_2;
    points = Punktanzahl;
    if (Elective::MAX_ELECTIVE <= Wahlfach_1 || Elective::MAX_ELECTIVE <= Wahlfach_2)
            throw runtime_error("Invalid Elective");
            
}
