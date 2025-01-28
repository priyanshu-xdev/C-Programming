#include<stdio.h>
int main()
{
    float marks[25];
    float sum=0;
    printf("Enter 25 subjects marks:\n");
    for(int i=0;i<25;i++){
        scanf("%f",&marks[i]);
        sum=sum+marks[i];
    }
    float avg=sum/25;
    printf("Average is %.2f",avg);
    return 0;
}