#include <stdio.h>

int fibonacci(int a, int b, int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", a);
    return fibonacci(b, a + b, n - 1);
}

int main()
{
    int a, b, n;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);
    printf("Enter Last Number:");
    scanf("%d", &n);
    printf("%d", fibonacci(a, b, n));

    return 0;
}