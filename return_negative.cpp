#include "return_negative.h"

// #include <string>
// using namespace std;

int makeNegative(int num)
{
    int result = (num < 0) ? num : ((num > 0) ? num * (-1) : 0);
    return result;
}