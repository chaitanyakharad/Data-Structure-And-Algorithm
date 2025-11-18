// write a c program accept n student name from user an sort alphabettically (asending) order using bubble sort.
#include<stdio.h>
#include<string.h>
char a[30][30],t[30];
int i,n,pass;
void accept()
{
    printf("Enter student ");
    for(i=0;i<n;i++)
    scanf("%s",&a[i]);
}
void display()
{
    printf("student name ");
    for(i=0;i<n;i++)
    printf("%s\n",a[i]);
}
void bubblesort()
{
    for(pass=1;pass<n;pass++)
    {
        for(i=0;i<n-pass;i++)
        {
            if(strcmp(a[i],a[i+1])>0)
            {
                strcpy(t,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],t);
            }
        }
    }
    printf("\nSorted student\n");
    for(i=0;i<n;i++)
    printf("%s\n",a[i]);
}
int main()
{
    printf("Enter the limit ");
    scanf("%d",&n);

    accept();
    display();
    bubblesort();
}
