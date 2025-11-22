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
struct node *deletebeg(struct node *head)
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
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
    head=deletebeg(head);
    display(head);
}