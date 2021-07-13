int countSmileys(std::vector<std::string> arr)
{
  int sum=0;
  for(std::string s : arr)
    if((s[0]==':' || s[0]==';') && (s[s.size()-1]==')' || s[s.size()-1]=='D') && (s.size()==2 || s.size()==3 && (s[1]=='-' || s[1]=='~')))
      sum++;
      
  return sum;
}
