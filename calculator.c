#include <stdio.h>
int main()
{
    int a, b;
    char c;
    printf("Enter First Number");
    scanf("%d", &a);
    printf("Enter Second Number");
    scanf("%d", &b);
    printf("Enter a operator (+,-,*,/)=");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        printf("%d+%d=%d", a, b, a + b);
        break;
    case '-':
        printf("%d+%d=%d", a, b, a - b);
        break;
    case '*':
        printf("%d+%d=%d", a, b, a * b);
        break;
    case '/':
        printf("%d+%d=%d", a, b, a / b);
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}