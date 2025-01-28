<<<<<<< HEAD
Problem: Find the Factorial of a Number
Write a C program to find the factorial of a given number. 
The factorial of a non-negative integer n is the product of all positive integers less than or equal to n. It is denoted by n!.

    
#include<stdio.h>
int main()
{
    int n,fact=1,count;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    int m=n;
    for(count=1 ; count <=n ; count++){
        fact=fact*count;
    }
    printf("Factorial Of Number %d is %d",m,fact);
    return 0;
}
=======
#include<stdio.h>
int main()
{
    int n,fact=1,count;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    int m=n;
    for(count=1 ; count <=n ; count++){
        fact=fact*count;
    }
    printf("Factorial Of Number %d is %d",m,fact);
    return 0;
}
>>>>>>> 7b73759 (initial commit)
