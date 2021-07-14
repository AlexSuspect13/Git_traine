bool isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int nextPrime(int num)
{
    if (num == 0 || num == 1)
        return 2;
    
    for (int i = num + 1; ; i++)
    {
        if (isPrime(i))
            return i;
    }
    return -1;
}
