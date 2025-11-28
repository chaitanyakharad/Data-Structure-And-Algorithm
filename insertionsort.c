#include<stdio.h>
void insertionsort(int a[], int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];

        for( j=i-1;j>=0;j--)
        {
            if(key<a[j])
            {
                a[j+1]=a[j];
            }
            else
               break;
        }
            a[j+1]=key;
          
    }
}
int main()
{
    int n,a[20];
    printf("Enter the limit ");
    scanf("%d",&n);
    

    printf("Enter array element ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    insertionsort(a,n);

    printf("\nsorted array ");
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
}