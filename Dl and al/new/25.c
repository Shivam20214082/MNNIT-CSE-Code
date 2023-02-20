#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *start = NULL;

struct node *add(int a[], int x)
{
    struct node *p, *rear;
    start = (struct node *)malloc(sizeof(struct node));
    start->data = a[0];
    start->next = start;
    rear = start;
    for (int i = 1; i < x; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a[i];
        p->next = start;
        rear->next = p;
        rear = p;
    }
    return rear;
}

void display(struct node *last)
{
    struct node *temp;
    temp = last->next;
    do
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    } while (temp != last->next);
}

void insert(struct node *last, int data,int c)
{
    struct node *p = last->next;
    int d = 1;
    while (p->next != last->next)
    {
        if (c==d+1)
        {
            struct node *temp = (struct node *)malloc(sizeof(struct node));
            temp->data = data;
            temp->next=p->next;
            p->next=temp;
            d=0;
            break;
        }
        d++;
        p=p->next;
    }
    if(c!=0)
    printf("you have entered wrong position\n");

    display(last);
}

int main()
{
    // struct node *start=NULL;
    int x, y, c;
    printf("enter the no. of node ::");
    scanf("%d", &x);
    int b[x];
    for (int i = 0; i < x; i++)
    {
        printf("input data for node %d:", i + 1);
        scanf("%d", &b[i]);
    }
    struct node *last = add(b, x);
    display(last);
    printf("enter number to inserted and position both\n");
    scanf("%d%d", &y, &c);
    insert(last, y, c);
}
// output
/*
eenter the no. of node ::4
input data for node 1:1
input data for node 2:2
input data for node 3:3
input data for node 4:4
Data = 1
Data = 2
Data = 3
Data = 4
enter number to inserted and position both
45
3
you have entered wrong position
Data = 1
Data = 2
Data = 45
Data = 3
Data = 4
*/