//
//  exclamation_marks_series_11.cpp
//  codewars
//  https://www.codewars.com/kata/57fb09ef2b5314a8a90001ed/train/cpp
//  Created by kirill on 27.02.2025.
//
// https://learn.microsoft.com/ru-ru/cpp/standard-library/basic-string-class?view=msvc-170
#include "common.h"

std::string cw_replace(const std::string& s)
{
    std::string vowels = "aeiouAEIOU";
    std::string result = s;

    for (size_t i = 0; i < s.size(); ++i) {  // str.length() ���� �����
        //basic_string <char>::size_type indexCh = vowels.find(s[i]);
        size_t indexCh = vowels.find(s[i]);
        //int indexCh = vowels.find(s[i]);
        //indexCh = vowels.find(s[i]);
        (indexCh != std::string::npos) && (result[i] = '!');
        //if (indexCh != string::npos)
            //std::cout << indexCh1a << ' ';
            //result[i] = '!';
        
        //std::string result = (a > 50) ? "�������" : "���������";
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