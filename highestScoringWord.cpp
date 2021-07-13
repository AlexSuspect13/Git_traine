#include <string>

std::string highestScoringWord(const std::string &str)
{
  std::stringstream ss(str);
  std::string word;
  std::string ret;
  int score;
  int max=0;
  
  while(ss>>word)
  {
    score = 0;
    for(char x : word)
    {
      score += x-96;
    }
    
    if(score>max){
      max = score;
      ret = word;
    }
  }
  
  return ret;
}
