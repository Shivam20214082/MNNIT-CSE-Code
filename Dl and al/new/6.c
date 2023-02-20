#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*start=NULL;

void display(struct node*start);
void create(int a[],int x){
    struct node *temp,*last;
    start=(struct node*)malloc(sizeof(struct node));
    start->data=a[0];
    start->next=NULL;
    last=start;
    for(int i=1;i<x;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    display(start);
}
void display(struct node*start){
    struct node*p=start;
    while(p!=NULL){
        printf("Data :: %d\n",p->data);
        p=p->next;
    }
}

void insert(struct node* start,int data){
    struct node* p=start;
    struct node* f=start;
    while(f->next!=NULL && f->next->next!=NULL){
        p=p->next;
        f=f->next->next;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=p->next;
    p->next=temp;
    display(start);
}

int main(){
    int x,y;
    printf("enter the no. of node ::");
    scanf("%d",&x);
    int b[x];
    for(int i=0;i<x;i++){
        printf("input data for node %d:",i+1);
        scanf("%d",&b[i]);
    }
    create(b,x);
    printf("enter number to inserted\n");
    scanf("%d",&y);
    insert(start,y);
}


//output
/*
enter the no. of node ::6
input data for node 1:1
input data for node 2:2
input data for node 3:3
input data for node 4:4
input data for node 5:5
input data for node 6:6
Data :: 1
Data :: 2
Data :: 3
Data :: 4
Data :: 5
Data :: 6
enter number to inserted
9
Data :: 1
Data :: 2
Data :: 3
Data :: 9
Data :: 4
Data :: 5
Data :: 6
*/