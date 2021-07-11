// https://www.codewars.com/kata/52597aa56021e91c93000cb0
using System;
using System.Collections.Generic;
using System.Linq;
public class Kata
{
  public static int[] MoveZeroes(int[] arr) => arr.OrderBy(x => x == 0).ToArray();
}
