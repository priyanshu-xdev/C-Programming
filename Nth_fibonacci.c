#include <stdio.h>

int fibonacci(int a, int b, int n)
{
    if (n == 1)
    {
        return a;
    }
    // printf("%d ", a);
    return fibonacci(b, a + b, n - 1);
}

int main()
{
    int a, b, n;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);
    printf("Enter Nth Number:");
    scanf("%d", &n);
    printf("%d", fibonacci(a, b, n));

    return 0;
}