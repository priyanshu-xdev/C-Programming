#include <stdio.h>
int main()
{
    int n = 4;
    int x;
    for (int i = 1; i <= n; i++)
    {
        x = 1;
        int mid = i;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (j < mid)
            {
                printf("%d", x);
                x++;
            }
            else
            {
                printf("%d", x);
                x--;
            }
        }
        printf("\n");
    }

    
    // for (int i = n; i >= 1; i--)
    // {
    //     x = 1;
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= (2 * i) - 1; j++)
    //     {
    //         if (j <= (2*i-1)/2)
    //         {
    //             printf("%d", x);
    //             x++;
    //         }
    //         else
    //         {
    //             printf("%d", x);
    //             x--;
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}