// random array simple example function :-  a[i]=rand()%10 is use by 10. and %100 is use by 100.
#include<stdio.h>
int main()
{
    int i,n,a[10];
    printf("Enter the limit ");
    scanf("%d",&n);

    printf("Enter array ");
    for(i=0;i<n;i++)
    a[i]=rand()%10;

    printf("\nthe array ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    return 0;
}