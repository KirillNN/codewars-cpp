#include <iostream>
#include <string>
#include "find_the_integral.h"  
#include "exclamation_marks_series_11.h"  
#include "multi_table_for_num.h"  
#include "return_negative.h"
#include "sum_of_positive.h"
using namespace std;


int main()
{
    //cout << "Hello, World!" << endl; 
    
    //string x = integrate(3, 2);
    //string result = cw_replace("Hi!");
    //int a = 0;
    //int b = 0;
    //cin >> a >> b;
    //double d = (double)a / b;

    //cout << d;

    // string result = multi_table(5);
    // int result = makeNegative(3);
    int result = positive_sum(std::vector <int> {1,2,3,4,5});
    cout << result << endl;

    result = positive_sum(std::vector <int> {1,2,3,4,5,6});
    cout << result << endl;


    return 0;
}