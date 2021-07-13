#include <string>

bool XO(const std::string& str)
{
  int counter = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'x' || str[i] == 'X')
      counter++;

    if (str[i] == 'o' || str[i] == 'O')
      counter--;
  }

  return counter == 0;
}
