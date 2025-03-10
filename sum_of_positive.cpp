//
//  sum_of_positive.cpp
//  codewars
//  https://www.codewars.com/kata/5715eaedb436cf5606000381/train/cpp
//  Created by kirill on 10.03.2025.
//

#include "common.h"

int positive_sum(const std::vector<int> arr)
{
    int result = 0;
    for (const int &num : arr)
    { // num - ссылка, избегаем копирования
        if (num > 0)
        {
            result += num;
        }
    }
    return result;
}
