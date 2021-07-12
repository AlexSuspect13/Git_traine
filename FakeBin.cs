// https://www.codewars.com/kata/57eae65a4321032ce000002d
using System.Text.RegularExpressions;
public class Kata
{
  public static string FakeBin(string x)
  {
    x = Regex.Replace(x, "[4321]", "0");
    x = Regex.Replace(x, "[56789]", "1");
    return x;
  }
}
