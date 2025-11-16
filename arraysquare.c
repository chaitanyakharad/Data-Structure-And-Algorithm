// write a c program to accept n elements store in array and store the square of this no in another array display both array
#include<stdio.h>
int main()
{
    int n,i;
    int a[20],b[20];
    printf("Enter limit");
    scanf("%d",&n);

    printf("Enter array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    b[i]=a[i]*a[i];
    
    printf("first array ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    printf("\nsquare of array ");
    for(i=0;i<n;i++)
    printf("%d\t",b[i]);

}