#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *head)
{
    int i,n;
    printf("Enter Limit-");
    scanf("%d",&n);
    struct node *newnode,*temp;
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct  node));
        printf("Enter No-");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            temp=newnode;
            head=newnode;
        }
        else
        {
           temp->next=newnode;
           temp=newnode;
        }
    }
    return head;
}

struct node *insertbeg(struct node *head,int num)
{
struct node *newnode;
 newnode=(struct node *)malloc(sizeof(struct node));
 newnode->data=num;
 newnode->next=head;
 head=newnode;
 return head;
}

struct node *insertmiddle(struct node *head)
{
   int i,pos;
   struct node *newnode,*temp;
   newnode=(struct node *)malloc(sizeof(struct node));
   printf("Enter Pos-");
   scanf("%d",&pos);
   printf("Enter No to insert middle-");
   scanf("%d",&newnode->data);
   for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
   newnode->next=temp->next;
   temp->next=newnode;
   return head;
}

struct node *insertlast(struct node *head)
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter Value to insert Last-");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=newnode;
    return head;
}

struct node *deletebeg(struct node *head)
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
    return head;
}
struct node *deleteend(struct node *head)
{
    struct node *temp,*temp1;
   for(temp=head;temp->next->next!=NULL;temp=temp->next);
   temp1=temp->next;
   temp->next=NULL;
   free(temp1);
   return head;
}

struct node *deletemiddle(struct node *head,int pos)
{
    int i;
    struct node *temp,*temp1;
    for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
    return head;
}

struct node *singlysearch(struct node *head,int num)
{
    struct node *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->data==num)
        {
            return temp;
        }
    }
    return NULL;
}

void display(struct node *head)
{
 struct node *temp;
 for(temp=head;temp!=NULL;temp=temp->next)
 {
   printf("%d\t->",temp->data); 
 }
}

int main()
{
    int ch,num,pos;
    struct node *head=NULL;
    do
    {
        printf("\n1-Create \n2-Display \n3-InsertBeg \n4-InsertLast \n5-InsertMiddle \n6-DeleteBeg \n7-DeleteLast \n8-DeleteMiddle \n9-Search");
        printf("\nEnter Your Choice-");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:head=create(head);
                   break;
            case 2:display(head); 
                   break;
            case 3:printf("Enter No-");
                   scanf("%d",&num);
                  head=insertbeg(head,num);
                   break;
            case 4:
                  head=insertlast(head);
                   break;
            case 5:head=insertmiddle(head);
                   break;
            case 6:head=deletebeg(head);
                   break;
            case 7:head=deleteend(head);
                   break;
            case 8:
                   printf("Enter Pos-");
                   scanf("%d",&pos);
                   head=deletemiddle(head,pos);
                   break;
            case 9:
                  printf("Enter No to Search-");
                  scanf("%d",&num);
                   if(singlysearch(head,num)==NULL)
                   {
                   printf("Number is Not Found...");
                   }
                   else
                   {
                   printf("Number  Found...");
                   }
                   break;
            default:printf("Invalid Choice-");  
        }
    } while (ch<=9);
    
}