#include <stdio.h>
int main()
{
    int n, sum = 0;
    float num, avg;
    printf("Enter the Number of Terms:");
    scanf("%d", &n);
    int m = n;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter Number %d:", i);
        scanf("%f", &num);
        sum = sum + num;
    }
    avg = sum / m;
    printf("Average is %.1f", avg);
    return 0;
}