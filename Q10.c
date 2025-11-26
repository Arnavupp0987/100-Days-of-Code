//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>

int main(){

    int h, m, s;

    printf("enter time in seconds: ");
    scanf("%d", &s );

    m=0;
    while (s>=60)
    {
        s = s - 60;
        m+=1;
    }
    
    h=0;
    while (m >= 60)
    {
        h+=1;
        m= m - 60;
    }
    
    printf("\ntime in format of Hours:Minutes:Seconds = ");
    printf("%d:%d:%d\n",h,m,s);
    
    return 0;

}
