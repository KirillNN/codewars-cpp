#include "common.h"  
#include <iostream>

int main()
{
    std::string str_result = even_or_odd(5);
    std::cout << str_result << std::endl;

    str_result = cw_replace("Hi!");
    std::cout << str_result << std::endl;
    
    str_result = integrate(3, 2);
    std::cout << str_result << std::endl;

    str_result = repeat_str(5, "#");
    std::cout << str_result << std::endl;

    str_result = multi_table(10);
    std::cout << str_result << std::endl;

    int int_result = positive_sum(std::vector <int> {1, 2, 3, 4, 5});
    std::cout << int_result << std::endl;
   
	int_result = makeNegative(42);
    std::cout << int_result << std::endl;

	int_result = multiply(3, 4);
    std::cout << int_result << std::endl;

    //int a = 0;
    //int b = 0;
    //cin >> a >> b;
    //double d = (double)a / b;


    return 0;
}