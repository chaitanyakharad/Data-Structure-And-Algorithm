 // write a c program to accept n elements store this elements in array an find and replace given no in an array
#include<stdio.h>
int main()
{
    int n,a[20],i,x,y;
    printf("Enter the limit");
    scanf("%d",&n);

    printf("Enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter to find no");
    scanf("%d",&x);

    printf("Enter no to replace");
    scanf("%d",&y);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        a[i]=y;
    }
    printf("display replace array");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}