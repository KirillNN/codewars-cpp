#include "multi_table_for_num.h"

#include <string>
using namespace std;

string multi_table(int number)
{
    string result = "";
    result = "";
    for (size_t i = 1; i < 11; i++)
    {
        result.append(to_string(i) + " * " + to_string(number) + " = " + to_string(i * number));
        if (i != 10)
        {
            result.append("\n");
        }
    }
    return result; 
}


/*
#include <string>
#include <sstream>

std::string multi_table(int number)
{
    std::ostringstream os;
    for (int i = 1; i <= 10; i++) {
        os << i << " * " << number << " = " << i*number << (i<10 ? "\n" : "");
    }
    return os.str();
}
*/