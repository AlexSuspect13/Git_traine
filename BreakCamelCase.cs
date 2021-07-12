// https://www.codewars.com/kata/5208f99aee097e6552000148
using System.Text.RegularExpressions;
public class Kata
{
   public static string BreakCamelCase(string str) => new Regex("([A-Z])").Replace(str, " $1");
}
