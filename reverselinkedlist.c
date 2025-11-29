/*Q2.Implemnt a list for singly linked list,reverse it and display revserse linked
list.*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create(struct node *head)
{
    int i,n;
    struct node *temp,*newnode;
    printf("Enter limit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof (struct node));
        printf("Enter value: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            temp=head=newnode;
        }
        else
        {
            temp->next=newnode;
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
        printf("%d\t->",temp->data);
    }
}
struct node *reverse(struct node *head)
{
    struct node *temp1=NULL;
    struct node *temp2=NULL;
    while(head!=NULL)
    {
        temp2=head->next;
        head->next=temp1;
        temp1=head;
        head=temp2;
    }
    return temp1;
}
int main()
{
    struct node *head=NULL;
    head=create(head);
    head=reverse(head);
    display(head);
}