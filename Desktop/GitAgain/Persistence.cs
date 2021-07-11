// https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec
using System;

public class Persist
{
    public static int Persistence(long n)
    {
        int counter = 0;
        while (n > 0)
        {
            var count = (int)Math.Ceiling(Math.Log10(Math.Abs(n) + 0.5));
            if (n < 10)
                return counter;
            var loopcount = count;
            long[] array = new long[count];
            long recursiacount = 1;
            for (int i = 0; i < count; i++)
            {
                array[i] = n / (long)Math.Pow(10, loopcount - 1) % 10;
                loopcount--;
                recursiacount *= array[i];
            }
            counter++;
            n = recursiacount;
        }
        return counter;
    }
}
