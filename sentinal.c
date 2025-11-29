#include<stdio.h>
int a[10],n,key;

void accept()
{
    int i=0;
    printf("Enter the array");
    while (i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    
}
void display()
{   
    int i;
    printf("\nThe array ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
        
    }
    
}
void sentinal() 
{
    int i=0;
    a[n]=key;
    display();
    while (a[i]!=key)
    {
        i++;
    }
    if(i==n)
    printf("Number not found");
    else
    printf("Number found at %d ",i);
    
}
void main()
{
    printf("Enter the limit");
    scanf("%d",&n);

    accept();
    display();

    printf("\nEnter the key for search");
    scanf("%d",&key);
    sentinal();
}