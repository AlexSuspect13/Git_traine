#include <string>
std::string no_space(std::string x)
{
  std::string result;
  for(auto i=x.begin(); i!= x.end(); ++i)
    {
    if(*i != ' ')
      {
        result.push_back(*i);
      }
    }
  return result;
}
