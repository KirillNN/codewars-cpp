#ifndef COMMON_H
#define COMMON_H

#include <string>
#include <vector>

std::string even_or_odd(int number);  

std::string cw_replace(const std::string& s);

std::string integrate(const int& coefficient, const int& exponent);

int positive_sum(const std::vector<int> arr);

std::string repeat_str(size_t repeat, const std::string& str);

int makeNegative(int num);

int multiply(int a, int b);

std::string multi_table(int number);

#endif // COMMON_H
