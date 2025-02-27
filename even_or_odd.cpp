//
//  even_or_odd.cpp
//  codewars
//  https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/cpp
//  Created by kirill on 26.02.2025.
//

#include "even_or_odd.h"
#include <string>

std::string even_or_odd(int number)
{
    if (number % 2) {
        return "Odd";
    } else {
        return "Even";
    }
}

/*
std::string even_or_odd(int number)
{
  return number % 2 == 0 ? "Even" : "Odd";
}
*/
