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
void delete (struct node *start, int x)
{
    int c = 1;
    struct node *p = start;
    while (p->next != NULL)
    {
        if (c == x)
        {
            struct node *temp = p;
            p->prev->next = temp->next;
            temp->next->prev = temp->prev;
            printf("Data after deleting last node which contain value :: %d\n", temp->data);
            free(temp);
            c=0;
            break;
        }
        c++;
        p = p->next;
    }
    if(c!=0)
    printf("You entered wrong position\n");
    display(start);
}
void last_delete(struct node* start){
    struct node* p=start;
    while(p->next!=NULL){
        p=p->next;
    }
    struct node* temp=p;
    p=p->prev;
    p->next=NULL;
    printf("Data after deleting last node which contain value :: %d\n",temp->data);
    free(temp);
    display(start);
}
void front_delete(struct node* start){
    struct node* temp=start;
    start=start->next;
    start->prev=NULL;
    printf("Data after deleting node which contain value :: %d\n",temp->data);
    free(temp);
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
    printf("Input the position (1 to %d) to delete a node ::", x);
    scanf("%d", &y);
    if(y==x){
        last_delete (start);
    }
    else if(y==1){
        front_delete (start);
    }
    else
    delete (start, y);
}
// output
/*
enter the no. of node ::6
input data for node 1:1
input data for node 2:2
input data for node 3:3
input data for node 4:9
input data for node 5:8
input data for node 6:0
entered data
data = 1
data = 2
data = 3
data = 9
data = 8
data = 0
Input the position (1 to 6) to delete a node ::4
Data after deleting last node which contain value :: 9
entered data
data = 1
data = 2
data = 3
data = 8
data = 0
*/