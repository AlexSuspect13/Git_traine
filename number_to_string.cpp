// https://www.codewars.com/kata/5265326f5fda8eb1160004c8
#include <vector>
#include <set>
#include <iostream>
#include <string>
std::string number_to_string(int num)
{
   char buf[40];
    sprintf(buf,"%d",num);
    return buf;
}
