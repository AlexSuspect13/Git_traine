long long reverseNumber( long long n ) 
{
  long long r = 0;
  while( n )
  {
    r = r * 10 + n % 10;
    n /= 10;
  }
  return r;
}
