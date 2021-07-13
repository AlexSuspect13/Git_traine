// https://www.codewars.com/kata/58dbdccee5ee8fa2f9000058/train/csharp
public class Kata
{
  public static string PeopleWithAgeDrink(int old) =>
  old < 14 ? "drink toddy" :
  old < 18 ? "drink coke" :
  old < 21 ? "drink beer" : "drink whisky";
}
