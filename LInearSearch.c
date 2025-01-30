#include <stdio.h>
int LinearSearch(int array[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (array[i] == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int m, n;
    printf("Enter Number Of Elements In Array:");
    scanf("%d", &m);
    int array[m];
    printf("Enter Elements In Array:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter Element to Search:\n");
    scanf("%d", &n);
    printf("Index:%d", LinearSearch(array, m, n));
    return 0;
}