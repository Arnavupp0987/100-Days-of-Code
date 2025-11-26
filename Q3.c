//Write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include<stdio.h>
int main(){
    int len,bth;
    int area,peri;
    
    printf("enter length of rectangle: ");
    scanf("%d",&len);
    printf("enter breadth of rectangle: ");
    scanf("%d",&bth);

    area=len*bth;
    printf("area of the rectangle = %d\n",area);

    peri=2*(len+bth);
    printf("perimeter of the rectangle = %d\n",peri);

    return 0;
}