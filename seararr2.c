// write a c program serching array and check position , repeted number 
#include<stdio.h>
int i;
void accept(int a[], int n)
{
    printf("Enter the array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[], int n)
{
    printf("The array ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void linesearch(int a[],int n, int key)
{
    int flag=0,count=0,pos;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            pos=i;
            ++count;
            
        }
    }
    if(flag==1)
    {
        printf(" number %d found at position %d repeted %d times   ",key,pos,count);
    } else {
        printf("not found ");
    }
    

}
int main()
{
    int a[20],n,key;
    printf("Enter limit");
    scanf("%d",&n);

    accept(a,n);
    display(a,n);

    printf("Enter the searching number");
    scanf("%d",&key);
    linesearch(a,n,key);
}