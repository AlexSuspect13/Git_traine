using System.Linq;
using System.Collections.Generic;

public static class Kata
{
	public static IEnumerable<T> UniqueInOrder<T>(IEnumerable<T> iterable)
	{
		var arr = iterable.ToList();
		return arr.Where((x, i) => i == 0 || !Equals(x, arr.ElementAt(i - 1)));
	}
}
⠀ 