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

void delete(struct node *last)
{
    struct node *temp = last->next;
    last->next=last->next->next;
    printf("Data after deleting the node which contain value = %d\n",temp->data);
    free(temp);
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
    delete(last);
}
// output
/*
enter the no. of node ::3
input data for node 1:1
input data for node 2:2
input data for node 3:3
Data = 1
Data = 2
Data = 3
Data after deleting the node which contain value = 1
Data = 2
Data = 3
*/