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
void *insertlast(struct node *head)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter insert value to last: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=newnode;
    newnode->prev=temp;
    return head;
}

int main()
{
    struct node *head=NULL;
    head=create(head);
    display(head);
    head=insertlast(head);
    display(head);
}