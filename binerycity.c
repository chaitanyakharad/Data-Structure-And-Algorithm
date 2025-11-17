// write a c program accept n cities and search one key from user 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char cities[100][100],key[30];
int n,i,flag;
int binarySearch(){
int top=0,bottom=n-1,mid,pos=0;
while(top<=bottom){
    mid=(top+bottom)/2;
    if(strcmp(cities[mid],key)==0)
    {
    flag=1;
    pos=mid+1;
    break;
    }
    else if(key<0)
    bottom=mid-1;
    else
    top=mid+1;
    }
}
void accept(){
    printf("Enter the n cities:");
    for (i=0;i<n;i++)
    {
        scanf("%s",&cities[i]);
    }
}
int main(){
    printf("Enter city limit:");
    scanf("%d",&n);
    accept();
    printf("Enter key for search=:");
    scanf("%s",&key);
    int pos=binarySearch();
    if(flag=0){
        printf("%s not found ",key);
    }
    else
    {
        printf("%s Found at position %d",key,pos);
    }
    return 0;
}