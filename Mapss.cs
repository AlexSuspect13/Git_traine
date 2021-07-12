// https://www.codewars.com/kata/5208f99aee097e6552000148
using System;
using System.Linq;
public class Kata
{
  public static int[] Maps(int[] x)
  {
     return (from i in x where i < 10000 select i * 2).ToArray();
    }
}
 