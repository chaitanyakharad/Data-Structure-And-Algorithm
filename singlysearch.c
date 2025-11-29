#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create(struct node *head)
{
    int n,i;
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
    void search(struct node *head,int n)
    {   
        struct node *temp;
        int flag=0;
        for(temp=head;temp!=NULL;temp=temp->next)
        {
            if(temp->data==n)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            printf("%d Number is found ",n);
        }
        else{
            printf("Nuber not found");
        }
    }
    int main()
    {
        int n;
        struct node *head=NULL;
        head=create(head);
        printf("Enter search the number: ");
        scanf("%d",&n);
        search(head,n);
    }

