#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct Queue
{
    int data[MAX];
    int front,rear;
}* q;

void initi()
{
    q=(struct Queue*)malloc(sizeof(struct Queue));
    q->front=-1;
    q->rear=-1;
}
int isempty()
{
    if(q->front==-1 || q->front> q->rear)
    return 1;
        else 
    return 0;
}
int isfull()
{
    if(q->rear==MAX-1)
    return 1;
    else
    return 0;
}
void insert(int num)
{
    if(isfull())
    {
        printf("Queue is overflow");
    }
    else
    {
        q->front=0;
        q->rear++;
        q->data[q->rear]=num;
        printf("%d inserted into queue\n",num);
    }
}
void deleteq()
{
    int val;
    if(isempty())
    {
        printf("Queue is underflow");
    }
    else
    {
        val=q->data[q->front];
        printf("deleted value=%d\n",val);
        q->front++;
    }
}
void display()
{
    int i;
    for(i=q->front;i<=q->rear;i++)
    {
        printf("%d",q->data[i]);
        printf("\n");
    }
}
int main()
{
    insert (10);
    insert (20);
    insert (30);
    insert (40);
    display();
    insert (50);
    insert (60);
    display();
    deleteq();

}
