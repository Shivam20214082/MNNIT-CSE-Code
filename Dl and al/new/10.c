#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *start = NULL;

void display(struct node *start);
void create(int a[], int x)
{
    struct node *temp, *last;
    start = (struct node *)malloc(sizeof(struct node));
    start->data = a[0];
    start->next = NULL;
    last = start;
    for (int i = 1; i < x; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    display(start);
}
void display(struct node *start)
{
    struct node *p = start;
    while (p != NULL)
    {
        printf("Data :: %d\n", p->data);
        p = p->next;
    }
}

void search (struct node *start,int x)
{
    int c=1;
    struct node *p = start;
    while (p != NULL)
    {
        if(p->data==x){
            printf("%d is present at node %d\n",x,c);
            c=0;
            break;
        }
        c++;
        p = p->next;
    }
    if(c!=0)
    printf("Element des not found\n");
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
    create(b, x);
    printf("enter the number that is to be searched :: ");
    scanf("%d", &y);
    search (start,y);
}

// output
/*
enter the no. of node ::5
input data for node 1:1
input data for node 2:2
input data for node 3:6
input data for node 4:7
input data for node 5:8
Data :: 1
Data :: 2
Data :: 6
Data :: 7
Data :: 8
enter the number that is to be searched :: 5
Element des not found
*/