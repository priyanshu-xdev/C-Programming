#include <stdio.h>
int main()
{
    int n, t;
    printf("Enter a Number:");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        t = n * i;
        printf("%d\n", t);
    }
    return 0;
}