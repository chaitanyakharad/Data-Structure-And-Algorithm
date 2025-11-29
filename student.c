// write a c program create string or accept names of n student an accept name to search
#include<stdio.h>
#include<string.h>
int main()
{
    int n,flag=0,i;
    char s[50][50],name[50];
    printf("Enter no of student ");
    scanf("%d",&n);

    printf("Enter the student");
    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
    }
    printf("search student ");
    scanf("%s",name);
    
    for(i=0;i<n;i++)
    {
    if(strcmp(s[i],name)==0)
    {
    flag=1;
    break;
    }
    }
    if(flag==1)
    printf("found student at %d position",i+1);
    else 
    printf("not found");
}
