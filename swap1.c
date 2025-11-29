// c program call by reference swaping two values
#include<stdio.h>
void swap(int *a, int *b)

{
     int c;
     c=*a;
     *a=*b;
     *b=c;
     printf("\nAfter swaping a=%d  b=%d",*a,*b);
}

int main() 
{
int a,b;
printf("enter the no a,b");
scanf("%d%d",&a,&b);

printf("before swaping a =%d b=%d",a,b);
swap(&a,&b);
}