// https://www.codewars.com/kata/56f6ad906b88de513f000d96
 
#include <string>
#include <algorithm>
#include <sstream>
#include <iostream>
using namespace std;

std::string bonus_time(int salary, bool bonus)
{
    std::stringstream ss;
    ss << salary;
    std::string str = ss.str();
    if (bonus == true)
    {
        return "$" + str + "0";
    }
    else { return "$" + str; }
}
 