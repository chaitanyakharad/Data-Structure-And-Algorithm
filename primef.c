// write a c program by using function to find prime or not 
#include<stdio.h>
void isprime() 
{
    int i,n,flag=0;
    printf("Enter a number");;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("number is prime");
    } else {
        printf("number is not prime");
            }
}
int main () 
{
    isprime();
}