//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>

int main(){
    
    int a;

    printf("enter any number: ");
    scanf("%d",&a);
    
    if ((a%2) == 0)
    {
        printf("\nthe given no is even\n");
    } else 
    {
        printf("\nthe given no is odd\n");
    }
    
    return 0;

}