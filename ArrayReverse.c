#include<stdio.h>
int main()
{
     int a, b;
    printf("Enter Number Of Elements In Array:");
    scanf("%d", &a);
    int arr[a];
    printf("Enter Elements In Array:");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=a;i++){
        if(arr[i]!=arr[i]){
            arr[i]=arr[a-1];

        }
    }
    return 0;
}