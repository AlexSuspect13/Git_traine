// https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097
int centuryFromYear(int year) 
{
int centuryCount = 0;
  while (year > 0)
  {
    year = year - 100;
    centuryCount = centuryCount + 1;
  }
  return centuryCount;
}
