//
//  drink_about.cpp
//  codewars "Drink about"
//  https://www.codewars.com/kata/56170e844da7c6f647000063/train/cpp
//  Created by kirill on 11.03.2025.
//

#include "common.h"

std::string people_with_age_drink(int age) {
	if (age > 20) return "drink whisky";
	else if (age > 17) return "drink beer";
	else if (age > 13) return "drink coke";
	else return "drink toddy";	
}

/*
std::string people_with_age_drink(unsigned int age)
{
  switch(age)
  {
	  case 0  ... 13 : return "drink toddy";
	  case 14 ... 17 : return "drink coke";
	  case 18 ... 20 : return "drink beer";
	  default        : return "drink whisky";
  }
}
*/