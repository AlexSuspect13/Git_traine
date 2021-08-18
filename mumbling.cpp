class Accumul
{
public:
    static std::string accum(const std::string &s) {
      std::string result;
      for (int i = 0; i < s.length(); i++) {
        result.append("-");
        result.append(std::string(1,toupper(s[i])));
        result.append(std::string(i,tolower(s[i])));
      }
      return result.substr(1,result.length());
    }
};
