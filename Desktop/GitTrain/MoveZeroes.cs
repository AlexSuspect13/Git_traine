using System;

namespace CodeWars
{
 class Program
    {
	public static int[] MoveZeroes(int[] arr) => arr.OrderBy(x => x == 0).ToArray();
	}
}
