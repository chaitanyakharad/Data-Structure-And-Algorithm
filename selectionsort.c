/*Q1. Sort a random array of n integers (accept the value of n from user) in
ascending order by using selection sort algorithm.*/
#include<stdio.h>
void accept(int a[],int n)
{
    for(int i=0;i<n;i++)
    a[i]=rand()%100;
}
void display(int a[],int n)
{
    printf("The Array");
    for (int i=0;i<n;i++)
    printf("%d\t",a[i]);
}
int selectionsort(int a[], int n)
{
    int i,j,index,min,t;
    for(i=0;i<n;i++)
    {
        min=a[i];
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
            min=a[j];
            index=j;
            }
        }
        t=a[i];
        a[i]=a[index];
        a[index]=t;
    }
    return n;
}
void main()
{
    int a[20],n;
    printf("Enter The Limit");
    scanf("%d",&n);

    accept(a,n);
    selectionsort(a,n);
    display(a,n);
    
}