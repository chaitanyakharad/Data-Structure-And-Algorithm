#include<stdio.h>
int a[20],n,i,pass,t=0;
void accept()
{
    printf("Enter %d array element ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
    printf("The array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void bubblesort()
{
    for(pass=1;pass<n;pass++)
    {
        for(i=0;i<n-pass;i++)
        {
            if(a[i]>a[i+1])
            {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            }
        }
    }
        printf("\nSorted Array is ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
}
int main()
{
printf("Enter the limit ");
scanf("%d",&n);

accept();
display();
bubblesort();
}