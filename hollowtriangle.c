#include <stdio.h>
int main()
{
    int n = 5;
    // int x = 0;
    // int x=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (i == 1 || i == n || j == 1 || j == ((2*i)-1))
            {

                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}