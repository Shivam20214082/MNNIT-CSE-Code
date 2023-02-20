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
            p->next=NULL;
            last->next=p;
            last=p;
        }
    return start;
}
void display(struct node *p)
{
printf("entered data\n");
while(p!=NULL)
{
    printf("data = %d\n",p->data);
    p=p->next;
}
}
void revdisplay(struct node *p){
    if(p->next ==NULL){
        printf("DATA :: %d\n",p->data);
    }
    else{
        revdisplay(p->next);
        printf("Data :: %d\n",p->data);
    }

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
    add(b,x);
    display(start);
    printf("reverse data is\n");
    revdisplay(start);
}
//output
/*
enter the no. of node ::3
input data for node 1:4
input data for node 2:5
input data for node 3:6
entered data
data = 4
data = 5
data = 6
reverse data is
DATA :: 6
Data :: 5
Data :: 4
*/
