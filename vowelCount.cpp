#include <string>
#include <cassert>
#include <iterator>
#include <cmath>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
int getCount(const std::string& inputStr) {
    std::set<char>arr = { 'a','i','e','o','u' };
    return std::count_if(inputStr.begin(), inputStr.end(), [arr](char s) {
        return arr.find(s) != arr.end();
        });
}
