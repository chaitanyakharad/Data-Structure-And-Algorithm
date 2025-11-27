// c programing function for return value no argument passing
#include<stdio.h>
int add() 
{
    int a=10,b=20;
    int sum=0;
    sum=a+b;
   // printf("sum is =%d",sum);
    return sum;
}
int main() 
{
    int s;
    s=add();
    printf("\nmain sum is =%d",s);
}