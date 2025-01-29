#include <stdio.h>

int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    int factorial = fact(n);
    printf("Factorial is = %d ", factorial);
    return 0;
}