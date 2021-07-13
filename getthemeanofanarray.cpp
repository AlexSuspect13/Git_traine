int get_average(std::vector <int> marks)
{
  int sum = 0;
  int n = 0;
  for(int i = 0; i != marks.size(); ++i)
  {
    sum += marks[i];
    ++n;
  }
  return sum/n;
}
