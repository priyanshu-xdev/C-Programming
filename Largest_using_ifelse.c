#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number A=");
    scanf("%d",&a);
    printf("Enter second number B=");
    scanf("%d",&b);
    printf("Enter third number C=");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("A is largest number");
        }
        else{
            printf("C is largest");
        }
    }
    if(b>c){
        printf("B is largest");
    }
    else{
        printf("Invalid");
    }
    return 0;
}