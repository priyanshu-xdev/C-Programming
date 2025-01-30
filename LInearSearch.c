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
    int a, b;
    printf("Enter Number Of Elements In Array:");
    scanf("%d", &a);
    int array[a];
    printf("Enter Elements In Array:");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter Element to Search:\n");
    scanf("%d", &b);
    printf("Index:%d", LinearSearch(array, a, b));
    return 0;
}