// https://www.codewars.com/kata/54da539698b8a2ad76000228
using System.Linq;

public class Kata
{
  public static bool IsValidWalk(string[] walk)
  {
    return walk.Count(x => x == "n") == walk.Count(x => x == "s") && walk.Count(x => x == "e") == walk.Count(x => x == "w") && walk.Length == 10;
  }
}
