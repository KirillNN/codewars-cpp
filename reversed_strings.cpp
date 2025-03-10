//
//  reversed_strings.cpp
//  codewars
//  https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/cpp
//  Created by kirill on 11.03.2025.
//

#include "common.h"

std::string reverseString (std::string str ){
    std::string result = "";
    // the type of “it” below is std::reverse_iterator<int const*>:
    for (std::string::reverse_iterator it = std::rbegin(str); it != std::rend(str); ++it)
        result.push_back(*it);
    return result;
}