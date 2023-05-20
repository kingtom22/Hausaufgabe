#ifndef PUPIL_H_INCLUDED
#define PUPIL_H_INCLUDED

#include <string>

#define BYTE char

using namespace std;

enum class Elective : BYTE {
    M, E, PH, CH, ART, PHIL, MAX_ELECTIVE
};

class Pupil
{
private:
    int points;
    string name;
    Elective elective1;
    Elective elective2;
public:
    Pupil(string Name, Elective Wahlfach_1, Elective Wahlfach_2 = Elective::PHIL, int Punktanzahl = 20);
};

#endif /* PUPUL_H_INCLUDED */

