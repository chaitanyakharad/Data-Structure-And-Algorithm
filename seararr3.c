#include<stdio.h>
int n,i,a[20];
void accept()
{
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
    printf("enter array");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void lineserach()
{
    int key,count=0,flag=0,pos;
    printf("\nEnter the key to search ");
    scanf("%d",&key);
    
    printf("\nposition");
    

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("%d\t",i);
            flag=1;
            ++count;
        }
    }
    if(flag==1)
    {
        printf("\nnumber %d found repeted %d times",key,count);
    }
    else
    {
        printf("not found");
    }
}
int main()
{
    printf("enter limit");
    scanf("%d",&n);

    accept();
    display();
    lineserach();
}