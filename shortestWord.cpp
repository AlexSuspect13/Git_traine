int find_short(std::string str)
{
  int min=270;
  int buf=0;
  for(auto it:str)
    if(it == ' ') min > buf ?  min = buf : buf =0;
      else buf++;
  return min > buf ? buf : min;
}
