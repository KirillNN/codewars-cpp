//
//  beginner_lost_without_a_map.cpp
//  codewars
//  https://www.codewars.com/kata/57f781872e3d8ca2a000007e/train/cpp
//  Created by kirill on 10.03.2025.
//

#include "common.h"

std::vector<int> maps(const std::vector<int>& values) {
    std::vector<int> result;
    result.reserve(values.size());
    for (const int &num : values) {
        // num - ссылка, избегаем копирования
        result.push_back(num * 2);
    }

    return result;
}

