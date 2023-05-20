
#ifndef FORM_H_INCLUDED
#define FORM_H_INCLUDED

#include <vector>
#include <string>

using namespace std;

class Form
{
private:
    std::string id;
    std::vector<std::string> list;
public:
    Form();
};

#endif /* FORM_H_INCLUDED */