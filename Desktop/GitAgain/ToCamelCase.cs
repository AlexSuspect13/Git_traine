using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text.RegularExpressions;
public class Kata
{
  public static string ToCamelCase(string str) =>
  Regex.Replace(str, @"[_-](\w)", m => m.Groups[1].Value.ToUpper());      
}
 