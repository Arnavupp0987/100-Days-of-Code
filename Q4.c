//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main(){

    int r;
    float pi,ar,cir;
 
    printf("enter radius of circle: ");
    scanf("%d",&r);

    pi=3.14;
    ar=pi*(r*r);
    printf("area of the circle = %.2f\n",ar);

    cir=2*pi*r;
    printf("circumference of the circle = %.2f\n",cir);

    return 0;
}