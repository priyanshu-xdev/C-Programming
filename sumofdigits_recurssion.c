#include <stdio.h>
int sumDigits(int n)
{
    int sum;
    while (n > 0)
    {
        int r = n % 10;
        sum = sum * 10 + r;
        // n=n/10
    }
    printf("%d", sum);
    return sumDigits(n / 10);
}
int main()
{
    sumDigits(123);
    return 0;
}