// https://www.codewars.com/kata/54da539698b8a2ad76000228
using System;
public static class Kata
{
  public static string bonus_time(int salary, bool bonus)
  {
    string z = bonus == true ? "$" + Convert.ToString(salary) + "0" :"$"+ Convert.ToString(salary) ;
    return z;
  }
}
 