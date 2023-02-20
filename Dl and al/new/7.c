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

void delete(struct node* start){
    struct node* temp=start;
    start=start->next;
    printf("Data after deleting node 1 which is %d\n",temp->data);
    free(temp);
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
    delete(start);
}


//output
/*
enter the no. of node ::4
input data for node 1:1
input data for node 2:2
input data for node 3:3
input data for node 4:4
Data :: 1
Data :: 2
Data :: 3
Data :: 4
Data after deleting node 1 which is 1
Data :: 2
Data :: 3
Data :: 4
*/