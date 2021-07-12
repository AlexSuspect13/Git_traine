// https://www.codewars.com/kata/57f780909f7e8e3183000078
using System.Linq;
public class Kata
{
  public static int Grow(int[] x)
  {
    return x.Aggregate((a,b) => a*b);
  }
}
