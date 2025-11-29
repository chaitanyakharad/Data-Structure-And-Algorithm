#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char a[30][30];
    printf("Enter the limit ");
    scanf("%d",&n);

    printf("Enter cities ");
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    printf("cities\n");
    for(i=0;i<n;i++)
    printf("reverse cities = %s\n",strrev(a[i]));
}
