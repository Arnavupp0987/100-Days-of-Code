//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a,b;

    printf("enter value of a: ");
    scanf("%d",&a);
    printf("enter value of b: ");
    scanf("%d",&b);

    printf("a = %d\n",a);
    printf("b = %d\n\n",b);
    printf("swapping......\n\n");

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a = %d\n",a);
    printf("b = %d\n\n",b);


    //OR
    printf("swapping again.....\n\n");

    a=a^b;
    b=a^b;
    a=a^b;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    return 0;
}