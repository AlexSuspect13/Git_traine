// https://www.codewars.com/kata/53dc54212259ed3d4f00071c
int solution(int number) 
{
    int sum = 0;
    for(int i = 0; i < number;++i)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}