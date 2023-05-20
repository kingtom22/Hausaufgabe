#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include "Pupil.h"

#define MAX_INT 65535
#define BYTE char

using namespace std;

enum class Elective : BYTE {
    M, E, PH, CH, ART, PHIL, MAX_ELECTIVE
};
/*
class Pupil
{
private:
    int points;
    string name;
    Elective elective1;
    Elective elective2;
public:
    Pupil(string Name, Elective Wahlfach_1, Elective Wahlfach_2 = Elective::PHIL, int Punktanzahl = 20) : 
        name(Name), elective1(Wahlfach_1), elective2(Wahlfach_2), points(Punktanzahl)
        {
            if (Elective::MAX_ELECTIVE <= Wahlfach_1 || Elective::MAX_ELECTIVE <= Wahlfach_2)
            {
                throw runtime_error("Invalid Elective");
            }
        }
};

class Form
{
private:
    string id;
    vector<string> list;
public:
    Form();
};
*/

int main()
{
    /*try
    {
        Pupil p("Feri", (Elective)6);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }*/
    cout << "Hello world!" << MAX_INT << endl;
    return 0;
}