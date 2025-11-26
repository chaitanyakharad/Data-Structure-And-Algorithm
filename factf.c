#include<stdio.h>
void fact(int num)
{
    int i,n=num,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial is %d",fact);
}
int main() 
{
    int num;
    printf("enter the number");
    scanf("%d",&num);

    fact(num);
}