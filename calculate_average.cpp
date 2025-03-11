//
//  calculate_average.cpp
//  codewars
//  https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/train/cpp
//  Created by kirill on 10.03.2025.
//

#include "common.h"

double calcAverage(const std::vector<int>& values) {
    size_t size = values.size();
    double summ = 0;
    for (const int &num : values){
        summ += num;
    }
    return summ / size;
}

/*
#include <vector>
#include <numeric>
using namespace std; 

double calcAverage(const vector<int>& values){
  return accumulate(values.begin(),values.end(), 0.0) / values.size();
}
*/