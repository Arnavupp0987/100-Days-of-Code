//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
    int n,sum;

    printf("enter the nth : ");
    scanf("%d",&n);

    sum=0;

    for(int i=0;i<=n;i++){
        sum=sum+i;
    }

    printf("sum of all natural no till the %d (n)th term = %d\n",n,sum);

    return 0;

}