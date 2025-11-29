#include<stdio.h>
int a[20],n,i,key;
void accept()
{
    for (i=0;i<n;i++)
    a[i]=rand()%10;
}
void display()
{
    printf("the array value");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void linearsearch()
{
    int flag=0;
    int count=0;
    int pos=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            pos=i;
            ++count;
            
        }
    }
    if(flag==1)
    printf(" number %d found at position %d repet %d times",key,pos,count);
    else 
    printf("not found");
}
int main()
{
    printf("enter the limit");
    scanf("%d",&n);

    accept();
    display();

    printf("\nenter the key to search");
    scanf("%d",&key);

    linearsearch();
}