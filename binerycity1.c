#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char cities[100][100],key[50];
int n,i,flag;
int binarySearch(){
int top=0,bottom=n-1,mid;
while(top<=bottom){
    mid=(top+bottom)/2;
        int cmp = strcmp(cities[mid], key);
        if(cmp==0){
    return mid; //mid position city found
        }
   
    else if(cmp<0){
    bottom=mid-1;
}
else
{
    top=mid+1;
}
    return -1;
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
    if(pos==-1){
        printf("%s not found ",key);
    }
    else{
        printf("%s Found at %d",key,pos);
    }
    return 0;
}