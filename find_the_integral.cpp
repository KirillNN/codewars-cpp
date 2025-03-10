//
//  find_the_integral.cpp
//  codewars
//  https://www.codewars.com/kata/59811fd8a070625d4c000013/train/cpp
//  Created by kirill on 27.02.2025.
//

#include "common.h"

std::string integrate(const int& coefficient, const int& exponent) {
	return std::to_string(coefficient / (exponent + 1)) + "x^" + std::to_string(exponent + 1);
}

/*
string integrate(const int& coefficient, const int& exponent) {
	int new_exponent = exponent + 1;
	int new_coefficient = coefficient / new_exponent;
	string new_exponent1 = to_string(exponent+1);
	string new_coefficient1 = to_string(new_coefficient);

	return new_coefficient1 + "x^" + new_exponent1;
}
*/