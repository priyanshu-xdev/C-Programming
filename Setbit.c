#include <stdio.h>
int main()
{
    int a = 10; 
    int checkbit = 1;
    int mask = 1 << (checkbit - 1);

    if (mask | a)
    {
        printf("Setbit");
    }
    else
    {
        printf("Not a Setbit");
    }
    return 0;
}