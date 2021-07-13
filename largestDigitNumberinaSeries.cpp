#include <string>

int largest_five_digits(const std::string &digits)
{
    int sum_max = 0, num;
    std::string str;

    for(int i = 0; i < digits.length(); i++)
    {
      str = "";
      for(int j = i; j <= (i + 4); j++)
      {
        if((i + 4) > digits.length())
        {
          return sum_max;
        }
        else
        {
          str = str + digits[j];
        }
        
      }
      num = std::stoi(str);
      if(num > sum_max)
      {
        sum_max = num;
      }
    }
    return sum_max;
}
