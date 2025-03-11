//
//  make_upper_case.cpp
//  codewars "MakeUpperCase"
//  https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7/solutions/cpp
//  Created by kirill on 11.03.2025.
//

#include "common.h"
#include <algorithm>

std::string makeUpperCase(const std::string& input_str){
	std::string result = input_str;
    std::transform(result.begin(), result.end(), result.begin(),
        // static_cast<int(*)(int)>(std::toupper)         // wrong
        // [](int c){ return std::toupper(c); }           // wrong
        // [](char c){ return std::toupper(c); }          // wrong
        [](unsigned char c) { return std::toupper(c); } // correct
    );
    
	return result;
}