// https://www.codewars.com/kata/544675c6f971f7399a000e79
#include <iostream> 
#include <sstream> 
int string_to_number(const std::string& s) {
    std::stringstream geek(s); 
    int x = 0; 
    geek >> x; 
  return x;
}
