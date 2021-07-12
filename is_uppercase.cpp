// https://www.codewars.com/kata/56cd44e1aa4ac7879200010b
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <cctype>
bool is_uppercase(const std::string &s) {
    std::string ss = s;
    std::string res ;
    std::transform(ss.begin(), ss.end(), std::back_inserter(res), toupper);
    if(s == res){return true;}
    return false;
}
