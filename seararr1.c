// write a c program search array with return value 
#include<stdio.h>
#include<math.h>
int i;
void accept (int a[],int n)
{
    
    for (i=0;i<n;i++)
    a[i]=rand()%10;
}
void display(int a[],int n)
{
    printf("the array value");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
int linesearch(int a[],int n, int key)
{

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        { 
            return 1;
        }
    }
    return 0;
    
}
void main()
{
    int n,a[20],key,f;
    printf("Enter the limit");
    scanf("%d",&n);

    accept(a,n);
    display(a,n);

    printf("\nEnter the number ");
    scanf("%d",&key);
    f= linesearch(a,n,key);
    if(f==1)
     printf("Found");
    else
   printf("Not Found");
}