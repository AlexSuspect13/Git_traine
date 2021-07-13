#include <string>
#include <iterator>
#include <iostream>
std::string reverseString (std::string str )
{

 std::reverse(str.begin(), str.end());
  return str;
}
