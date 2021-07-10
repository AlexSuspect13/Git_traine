using System;

namespace CodeWars
{
	class Program
    {
		public static string repeatStr(int n, string s) => String.Concat(Enumerable.Repeat(s, n));
	}
}
