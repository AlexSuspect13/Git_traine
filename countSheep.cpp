int count_sheep(std::vector<bool> arr) 
{
  int count=0;
  for(int i=0; i<arr.size(); ++i)
    {
    if(arr[i]==true)
      {
      ++count;
}
  }
  return count;
}

