// c program call by reference passing parameter 
#include<stdio.h>
#include<math.h>
void mult(int *p,int *q)
{
    int mult=0;
    mult=(*p)*(*q);
    printf("multiplication is =%d",mult);
}
int main() 
{
    int a=3,b=5;
    mult(&a,&b);
}