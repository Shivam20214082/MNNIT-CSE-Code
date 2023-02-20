#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*start=NULL;
void create(int a[],int x){
    struct node *temp,*last;
    start=(struct node*)malloc(sizeof(struct node));
    start->data=a[0];
    start->next=NULL;
    last=start;
    // struct node*temp=start;
    for(int i=1;i<x;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    
}
int count(struct node*start){
    int c=0;
    struct node*p=start;
    while(p!=NULL){
        printf("Data :: %d\n",p->data);
        c++;
        p=p->next;
    }
    return c;
}

int main(){
    int x;
    printf("enter the no. of node ::");
    scanf("%d",&x);
    int b[x];
    for(int i=0;i<x;i++){
        printf("input data for node %d:",i+1);
        scanf("%d",&b[i]);
    }
    create(b,x);
    printf("total number of node is %d\n",count(start));
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
total number of node is 4
*/