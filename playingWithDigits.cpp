#include <math.h>
class DigPow
{
public:
  static int digPow(int n, int p);
};

int DigPow::digPow(int n, int p)
{
    int num_digits = n > 0 ? (int)log10(n) + 1 : 1;
    long result=0;
    int m = n;
    for(size_t i=1; i<=num_digits ;++i)
    {
        result += pow( n%10 , p+num_digits-i);
        n /= 10;
    }
    return (result%m) ? -1 : result/m;
}
