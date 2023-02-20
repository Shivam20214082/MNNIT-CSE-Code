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
void insert(struct node *start, int data, int x)
{
    int c = 1;
    struct node *p = start;
    while (p->next != NULL)
    {
        if (x == c + 1)
        {
            struct node *temp = (struct node *)malloc(sizeof(struct node));
            temp->data = data;
            temp->next = p->next;
            p->next->prev=temp;
            temp->prev = p;
            p->next = temp;
            c=0;
            break;
        }
        c++;
        p = p->next;
    }
    if(c!=0){
        printf("Wrong position entered\n");
    }

    display(start);
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
    add(b, x);
    display(start);
    printf("enter number to be inserted and position boht:: ");
    scanf("%d%d", &y, &c);
    insert(start, y, c);
}
// output
/*
enter the no. of node ::4
input data for node 1:1
input data for node 2:2
input data for node 3:3
input data for node 4:4
entered data
data = 1
data = 2
data = 3
data = 4
enter number to be inserted and position boht:: 12
3
entered data
data = 1
data = 2
data = 12
data = 3
data = 4
*/