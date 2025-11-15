#include<stdio.h>
void accept(int a[],int n)
{
    printf("Enter The Array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display(int a[],int n)
{
    printf("The Array");
    for (int i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void main()
{
    int a[20],n;
    printf("Enter The Limit");
    scanf("%d",&n);

    accept(a,n);
    display(a,n);
}