#include <string>
#include <iostream>
#include <cassert>
std::string sliceString (std::string str )
{
  str.pop_back();
  str.erase(0,1);
  return str;
}
