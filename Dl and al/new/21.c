#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *start = NULL;

void display(struct node *p);
struct node *add(int a[], int x)
{
    struct node *p, *last;
    start = (struct node *)malloc(sizeof(struct node));
    start->data = a[0];
    start->next = NULL;
    start->prev = NULL;
    last = start;
    for (int i = 1; i < x; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a[i];
        p->next = NULL;
        p->prev = last;
        last->next = p;
        last = p;
    }
    return start;
}
void max(struct node *start)
{
    int max = start->data;
    struct node *p = start;
    while (p->next != NULL)
    {
        if (p->data>max)
        {
            max=p->data;
        }
        p = p->next;
    }
    printf("the Maximum Value in the Linked List is %d\n",max);
    // display(start);
}

void display(struct node *p)
{
    printf("entered data\n");
    while (p != NULL)
    {
        printf("data = %d\n", p->data);
        p = p->next;
    }
}
int main()
{
    int x, y;
    printf("enter the no. of node ::");
    scanf("%d", &x);
    int b[x];
    for (int i = 0; i < x; i++)
    {
        printf("input data for node %d:", i + 1);
        scanf("%d", &b[i]);
    }
    add(b, x);
    display(start);
    max(start);
}
// output
/*
enter the no. of node ::4
input data for node 1:12
input data for node 2:34
input data for node 3:3
input data for node 4:25
entered data
data = 12
data = 34
data = 3
data = 25
the Maximum Value in the Linked List is 34
*/