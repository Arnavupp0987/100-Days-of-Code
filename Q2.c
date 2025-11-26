#include<stdio.h>
int main(){
    int a,b,sum;
    int diff,prd,qo;
    printf("enter first num: ");
    scanf("%d",&a);
    printf("enter second num: ");
    scanf("%d",&b);

    sum=a+b;
    printf("sum of both no = %d\n",sum);
    
    diff=a-b;
    printf("difference of both no= %d\n",diff);
    
    prd=a*b;
    printf("product of both the no= %d\n",prd);

    qo=a/b;
    printf("quotient of both the no= %d\n",qo);

    return 0;

}