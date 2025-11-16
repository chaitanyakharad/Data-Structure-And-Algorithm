/* Accept n sorted values in array from user. Accept a value x from user and use binary
search algorithm to check whether the number is present in sorted array or not and output the
position if the number is present. */

#include<stdio.h>
int n,i,key,a[20];
void accept()
{
    printf("Enter the %d element : \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void binerysearch()
{
    int top=0,bottom=n-1,mid,flag=0,pos=0;
    while(top<=bottom)
    {
        mid=(top+bottom)/2;
        if(a[mid]==key)
        {
            flag=1;
            pos=mid+1;
            break;            
        }
        if(key>a[mid])
        top=mid+1;
        else
        bottom =mid-1;
    }           
    if(flag==1)
   printf("found %d at position %d",key,pos);
    else
    printf("not found");
}
int main()
{
    printf("Enter the limit : ");
    scanf("%d",&n);
    accept();

    printf("Enter the search key : ");
    scanf("%d",&key);
    binerysearch();
}
