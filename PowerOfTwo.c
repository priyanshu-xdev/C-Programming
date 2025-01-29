#include <stdio.h>
int powerTwo(int n, int power)
{
    if (power == 0)
    {
        return 1;
    }
    return n * powerTwo(n, power - 1);
}

int main()
{
    int result = powerTwo(5, 2);
    printf("%d", result);
    return 0;
}