// write a c program for armstrong number or not armstrong number by using function
#include<stdio.h>
void arm(int num)
{
int d,cube,sum=0,n=num;
    while(num>0) 
    {
        d=num%10;
        cube =d*d*d;
        sum=sum+cube;
        num=num/10;
    }
    if(sum==n) 
        {
            printf("number is armstrong");
        } 
        else 
        {
            printf("number is not armstrong");
        }
}
int main() 
{
    int num;
    printf("enter a thress digit number");
    scanf("%d",&num);
    arm(num);
}