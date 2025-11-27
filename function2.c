
// c programing function for return value and parameter passing
#include<stdio.h>
int add(int p,int q ) 
{
int sum=0;
sum=p+q;
return sum;
}
int main() 
{
    int a=40,b=30;
    int s;
    s=add(a,b);
    printf("main sum =%d",s);
}
