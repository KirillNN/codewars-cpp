#include "exclamation_marks_series_11.h"
#include <iostream>


// https://learn.microsoft.com/ru-ru/cpp/standard-library/basic-string-class?view=msvc-170

string cw_replace(const string& s)
{
    string vowels = "aeiouAEIOU";
    string result = s;

    for (size_t i = 0; i < s.size(); ++i) {  // str.length() тоже можно
        //basic_string <char>::size_type indexCh = vowels.find(s[i]);
        int indexCh = vowels.find(s[i]);
        //indexCh = vowels.find(s[i]);
        (indexCh != string::npos) && (result[i] = '!');
        //if (indexCh != string::npos)
            //std::cout << indexCh1a << ' ';
            //result[i] = '!';
        
        //std::string result = (a > 50) ? "Большое" : "Маленькое";
        //std::cout << result << std::endl;

    }

    return result; //coding and coding....
}


/*
#include <string>
#include <regex>

using namespace std;

string replace(const string& s)
{
    return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}
*/