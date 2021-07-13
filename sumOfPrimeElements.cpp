int solve(std::vector<int> v){
  int sum=0;
  for(int j = 0; j < v.size(); ++j)
    {
        for(int i = 2; i <= j; ++i)
          {
              if(i==j)
              {
                sum+=v[j];
              }
              if(j%i==0)
              { 
                break;
              }
        }
  }
  return sum;
}
