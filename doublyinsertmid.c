#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *create(struct node *head)
{
    int i,n;
    printf("Enter limit: ");
    scanf("%d",&n);
    struct node *newnode,*temp;
    for(i=0;i<n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
    return head;
}
void display(struct node *head)
{
    struct node *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d\t<->",temp->data);
    }
}
struct node *insertmid(struct node *head)
{
    struct node *temp,*newnode;
    int pos,i;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter insert to middle: ");
    scanf("%d",&newnode->data);
    printf("\nEnter insert value to position: ");
    scanf("%d",&pos);
    for(i=0,temp=head;i<(pos-1) && temp->next!=NULL;i++,temp=temp->next);
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
    return head;
    
}

int main()
{
    struct node *head=NULL;
    head=create(head);
    display(head);
    head=insertmid(head);
    display(head);
    }