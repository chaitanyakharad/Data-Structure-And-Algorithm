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
    int pos;
    struct node *head=NULL;
    head=create(head);
    printf("Enter Pos to Delete Middle-");
    scanf("%d",&pos);
    head=deletemiddle(head,pos);
    display(head);
}