int FindOutlier(std::vector<int> arr)
{
  std::vector<int> even;
  std::vector<int> odd;

  for (const auto elem : arr)
  {
    if(elem % 2 == 0)
      even.push_back(elem);
    else
      odd.push_back(elem);
  }

  return even.size() > odd.size() ? odd.at(0) : even.at(0);
}
