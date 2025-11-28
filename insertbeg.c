#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create (struct node *head)
{
    int i,n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    struct node *newnode,*temp;
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof (struct node));
        printf("Enter Number: ");
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
struct node *insertbeg(struct node *head)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("Enter value to insert begining: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    return head;
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
    struct node *head=NULL;
    head=create(head);
    head=insertbeg(head);
    display(head);
}