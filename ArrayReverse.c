#include <stdio.h>
int main()
{
    int a;
    printf("Number Of Elements:");
    scanf("%d", &a);
    int arr[a];
    printf("Enter Elements In Array:");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[a - 1 - i];
        arr[a - 1 - i] = temp;
    }
    // for (int i = a - 1; i >= 0; i--)
    // {
    //     printf("%d ", arr[i]);
    // }
    printf("Reversed:");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}