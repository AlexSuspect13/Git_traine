#include<cmath>

bool narcissistic( int value ){
  std::string num = std::to_string(value);
  int sum = 0;
  size_t l = num.size();
  for(auto i: num) sum += pow(i-48, l);
  return sum == value;
}
