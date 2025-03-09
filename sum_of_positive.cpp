#include "sum_of_positive.h"

int positive_sum(const vector<int> arr)
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
