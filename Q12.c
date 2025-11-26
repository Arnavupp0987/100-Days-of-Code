//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>

int main(){
    int a;

    printf("enter any integer: ");
    scanf("%d",&a);

    if (a>0)
    {
        printf("\nthe int given is +ve\n");
    } else if (a<0)
    {
        printf("\nthe int given is -ve\n");
    } else
    {
        printf("\nthe given no is 0\n");
    }
    
    return 0;
    
}