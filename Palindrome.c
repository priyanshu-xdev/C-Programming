#include <stdio.h>
int main()
{
    int n, rev = 0, r;
    printf("Enter a Number:");
    scanf("%d", &n);
    int m = n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("Reverse is %d\n", rev);
    if (rev == m)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}