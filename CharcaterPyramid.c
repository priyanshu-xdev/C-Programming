#include <stdio.h>
int main()
{
    int n = 4;
    char x;
    for (int i = 1; i <= n; i++)
    {
        x = 'A';
        int mid=i;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (j < mid)
            {
                printf("%c", x);
                x++;
            }
            else
            {
                printf("%c", x);
                x--;
            }   
        }
        printf("\n");
    }
    // for (int i = n; i >= 1; i--)
    // {
    //     x = 'A';
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= (2 * i) - 1; j++)
    //     {
    //         if (j <= (2*i-1)/2)
    //         {
    //             printf("%c", x);
    //             x++;
    //         }
    //         else
    //         {
    //             printf("%c", x);
    //             x--;
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}