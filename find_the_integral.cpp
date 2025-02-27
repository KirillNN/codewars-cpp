#include "find_the_integral.h"
#include <string>
using namespace std;


/*
string integrate(const int& coefficient, const int& exponent) {
    int new_exponent = exponent + 1;
    int new_coefficient = coefficient / new_exponent;
    string new_exponent1 = to_string(exponent+1);
    string new_coefficient1 = to_string(new_coefficient);

    return new_coefficient1 + "x^" + new_exponent1;
}
*/

string integrate(const int& coefficient, const int& exponent) {
    return to_string(coefficient / (exponent + 1)) + "x^" + to_string(exponent + 1);
}