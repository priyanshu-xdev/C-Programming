#include <stdio.h>
void series(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", n);
    return series(n - 1);
}

int main()
{
    series(5);
}