#include <stdio.h>
int sum(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return n + sum(n - 1);
}
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    int sums = sum(n);
    printf("Sum is = %d ", sums);
    return 0;
}