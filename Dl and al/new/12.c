#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
} *start=NULL;
struct node* add(int a[],int x){
        struct node*p,*last;
        start=(struct node*)malloc(sizeof(struct node));
        start->data=a[0];
        start->next=NULL;
        start->prev=NULL;
        last=start;
        for(int i=1;i<x;i++)
        {
            p=(struct node*)malloc(sizeof(struct node));
            p->data=a[i];
            p->next=NULL;
            p->prev=last;
            last->next=p;
            last=p;
        }
    return start;
}
void rdisplay(struct node *p)
{
printf("reversed data\n");
while(p->next!=NULL)
{
    p=p->next;
}
do{
    printf("data = %d\n",p->data);
    p=p->prev;
}while(p->prev !=NULL);
    printf("data = %d\n",p->data);

}
int main(){
    // struct node *start=NULL;
    int x;
    printf("enter the no. of node ::");
    scanf("%d",&x);
    int b[x];
    for(int i=0;i<x;i++){
        printf("input data for node %d:",i+1);
        scanf("%d",&b[i]);
    }
    add(b,x);
    rdisplay(start);
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
reversed data
data = 6
data = 5
data = 4
data = 3
data = 2
data = 1
*/