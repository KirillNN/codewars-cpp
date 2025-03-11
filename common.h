#ifndef COMMON_H
#define COMMON_H

#include <string>
#include <vector>

std::string even_or_odd(int number);  

std::string cw_replace(const std::string& s);

std::string integrate(const int& coefficient, const int& exponent);

std::string multi_table(int number);

std::string repeat_str(size_t repeat, const std::string& str);

std::string reverseString (std::string str );

int makeNegative(int num);

int multiply(int a, int b); 

int positive_sum(const std::vector<int> arr);

double calcAverage(const std::vector<int>& values);

std::vector<int> maps(const std::vector<int>& values);

std::string people_with_age_drink(int age);

int litres(double time);

std::string makeUpperCase(const std::string& input_str);

#endif // COMMON_H 