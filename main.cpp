#include <iostream>

#include "Pupil.hpp"

#define MAX_INT 65535


using namespace std;


int main()
{
    try
    {
        Pupil p("Feri", Elective::CH);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }
    cout << "Hello world! " << MAX_INT << endl;
    return 0;
}