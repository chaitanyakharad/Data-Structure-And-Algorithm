#include<stdio.h>
void pall(int num)
{
    int rev=0,d,n=num;

    while (num>0) 
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(rev==n)
    printf(" number is pallindrom");
    else
    printf("number is not pallindrom");
    
}
int main() 
{
    int num;
    printf("enter a number");
    scanf("%d",&num);

    pall(num);
}