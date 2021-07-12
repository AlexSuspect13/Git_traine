int solve(std::vector<int> v)
{
  int sum = 0;
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 2; j <= i; j++)  
    {
      if(j == i)
      {
        sum += v[i];
      }
      if (i % j == 0)
      {
        break;
      }
    }
  }
  return sum;
}
