// https://www.codewars.com/kata/58dbdccee5ee8fa2f9000058/train/csharp
public static int getCountsOfDigits(long number)
{
    return (number == 0) ? 1 : (int)Math.Ceiling(Math.Log10(Math.Abs(number) + 0.5));
}
