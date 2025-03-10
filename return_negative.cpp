//
//  return_negative.cpp
//  codewars
//  https://www.codewars.com/kata/55685cd7ad70877c23000102/train/cpp
//  Created by kirill on 02.03.2025.
//

#include "common.h"

int makeNegative(int num)
{
    int result = (num < 0) ? num : ((num > 0) ? num * (-1) : 0);
    return result;
}