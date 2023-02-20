#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
} *start=NULL;
struct node* add(int a[],int x){
        struct node*p,*last;
        start=(struct node*)malloc(sizeof(struct node));
        start->data=a[0];
        start->next=NULL;
        last=start;
        for(int i=1;i<x;i++)
        {
            p=(struct node*)malloc(sizeof(struct node));
            p->data=a[i];
            p->next=start;
            last->next=p;
            last=p;
        }
    return start;
}
void display(struct node *p)
{
printf("entered data\n");
while(p->next!=start)
{
    printf("data = %d\n",p->data);
    p=p->next;
}
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
    display(start);
}
//output
/*
enter the no. of node ::3
input data for node 1:1
input data for node 2:2
input data for node 3:3
entered data
data = 1
data = 2
data = 3
*/