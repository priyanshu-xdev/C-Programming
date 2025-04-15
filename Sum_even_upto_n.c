<<<<<<< HEAD
Problem: Sum of Even Numbers up to N
Write a C program to find the sum of all even numbers between 1 and a given number N (inclusive).


#include <stdio.h>
int main()
{
    int n, sum = 0, count;
    printf("Enter a Number:");
    scanf("%d", &n);
    for (count = 1; count <= n; count++)
    {
        if (count % 2 == 0)
        {
            sum = sum + count;
        }
    }
    printf("Sum of even numbers :%d", sum);
    return 0;
}
=======
#include <stdio.h>
int main()
{
    int n, even = 0, odd = 0, count;
    printf("Enter a Number:");
    scanf("%d", &n);
    for (count = 1; count <= n; count++)
    {
        if (count % 2 == 0)
        {
            even = even + count;
        }
        else
        {
            odd = odd + count;
        }
    }
    printf("Sum of even numbers :%d\n", even);
    printf("Sum of odd numbers :%d", odd);
    return 0;
}
>>>>>>> 7b73759 (initial commit)
