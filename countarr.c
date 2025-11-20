
#include<stdio.h>
int i,count=0;
void accept( int a[], int n )
{ 
     printf( " Enter array values " );
     for( i=0;i<n ; i++)
     scanf(" %d ", &a[i] ); 
}
    void display( int a[], int n )
{
      printf(" The array is \n " ); 
      for( i= 0; i<n; i++ ) 
      printf( " %d \t " , a[i] ) ; 
} 
   void linearsearch( int a[] ,int n , int key ) 
{ 
  int z=0;
      for(i=0;i<n;i++) 
{ 
    
    if(key==a[i])
  {     
     z=1 ;
      count++;
      break;
  }
}
   if(z==1)
    printf(" Number %d found and repeated %d time",key,count);
    else 
    printf("Not found ");
}
void main()
{ 
  int a[20];
  int n,key;
    
    
    printf("Enter Limit : ");
    scanf("%d",&n);
    accept( a,n);
    display(a,n);
    printf(" \nEnter the Number :");
    scanf("%d",&key);
    linearsearch(a,n,key);
}