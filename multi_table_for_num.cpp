//
//  multi_table_for_num.cpp
//  codewars
//  https://www.codewars.com/kata/5a2fd38b55519ed98f0000ce/train/cpp
//  Created by kirill on 27.02.2025.
//

#include "common.h"


std::string multi_table(int number)
{
    std::string result = "";
    result = "";
    for (size_t i = 1; i < 11; i++)
    {
        result.append(std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(i * number));
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