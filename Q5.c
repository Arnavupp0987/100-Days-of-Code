//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float C,F;

    printf("enter temp in celcius: ");
    scanf("%f",&C);

    F=C*9/5+32;
    printf("Temperatre in Fahrenheit = %.2f\n",F);

    return 0;
}
