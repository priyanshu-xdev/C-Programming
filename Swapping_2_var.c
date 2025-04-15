#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);
    printf("Before Swapping a=%d \t b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping a=%d \t b=%d", a, b);
    return 0;
}