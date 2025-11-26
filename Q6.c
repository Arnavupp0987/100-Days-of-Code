//Write a program to swap two numbers using a third variable
#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter value of a: ");
    scanf("%d",&a);
    printf("enter value of b: ");
    scanf("%d",&b);

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    printf("switching.....\n");
    c=a;
    a=b;
    b=c;

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    return 0;
}