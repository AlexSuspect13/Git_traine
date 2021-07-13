#include<vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  int passengers = 0;
  for(auto i: busStops)  passengers += i.first - i.second;
  return passengers;
}
