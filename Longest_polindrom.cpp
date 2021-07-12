// https://www.codewars.com/kata/54bb6f887e5a80180900046b
bool is_palindrome(const std::string& s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}
int longest_palindrome(const std::string& s)
{
    int count = 0;
    for (int len = 1; len <= s.size(); len++)
    {
        for (int beg = 0; beg <= s.size() - len; beg++)
        {
            if (is_palindrome(s.substr(beg, len)))
            {
                count = len;
                break; 
            }
        }
    }
    return count;
}
  