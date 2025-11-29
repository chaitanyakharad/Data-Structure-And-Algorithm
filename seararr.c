// write a c program searching a array in passing parameter
#include<stdio.h>
int i;
void accept(int a[], int n)
{
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[], int n)
{
    printf("The array\n");  
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void linesearch(int a[], int n,int key)
{
    int flag=1;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {   
            flag=0;
            break;
        }
    }
    if(flag==0)
    printf("Found");
    else
    printf("Not found");
}
void main()
{
    int n,a[20],key;
    printf("Enter the limit");
    scanf("%d",&n);

    accept(a,n);
    display(a,n);

    printf("\nEnter the number");
    scanf("%d",&key);

    linesearch(a,n,key);
    

}