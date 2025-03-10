//
//  string_repeat.cpp
//  codewars
//  https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/cpp
//  Created by kirill on 10.03.2025.
//

#include "common.h"

std::string repeat_str(size_t repeat, const std::string& str) {
	std::string result = "";
	while (repeat)
	{
		result += str;
		repeat--;
	}
	return result;
}