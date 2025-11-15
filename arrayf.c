// write a c program array accept and dislpay for function
/* #include<stdio.h>
void accept(int a[], int n)
{
    
    int i;
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

}
void dispaly(int a[], int n)
{
    int i;
printf("the array");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}

}
int main()

{
int a[20];
int n;
printf("enter the limit");
scanf("%d",&n);
 accept(a,n);
 dispaly(a,n) ;
}
 */ 

 // write a c program array accept and display in fuction 
 #include<stdio.h>
 int i,n,a[20];
 void accept() 
 {
    printf("enter the array");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
 }
 void display()
 {
    printf("the array is");
    for(i=0;i<n;i++) 
    {
        printf("%d\t",a[i]);
    }
 }
 int main() 
 {
    printf("enter the limit");
    scanf("%d",&n);
    
    accept();
    display();
}