// https://www.codewars.com/kata/55edaba99da3a9c84000003b
#include <vector>
#include <iostream>
std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
    std::vector<int> num;
    
    for(int i = 0,j = 0; i != numbers.size() ;++i)
   { 
      if(numbers[i] % divisor == 0)
        {
        num.push_back(numbers[i]);
       ++j;
        }
    }
  return num;
}
