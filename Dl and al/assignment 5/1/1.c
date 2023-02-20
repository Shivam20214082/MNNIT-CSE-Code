#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
int front,rear,size;
int queue[max];
void enqueue(int x){
    if(rear==0&&front==size-1 || rear==front+1){
        printf("Queue is full\n");
        exit(1);
    }
    else if(rear==-1&&front==-1){
        rear=0;
        front=(front+1)%size;
        queue[front]=x;
    }
    else{
        front=(front+1)%size;
        queue[front]=x;
    }
}
int dequeue(){
    if(front==-1){
        printf("Queue is Empty\n");
        exit(2);
    }
    else{
        int a=queue[rear];
        rear=(++rear)%size;
        return a;
    }
}
void display(){
    if(front ==-1){
        printf("Empty queue\n");
        exit(3);
        }
    for(int i=rear;i!=front;i++){
        if(i==size){
            i=0;
        }
        printf("%d ",queue[i]);
    }
    printf("%d\n",queue[front]);
}
void fro(){
    if(front!=-1){
        printf("Front element is %d and it index is %d\n",queue[front],front);
    }
}
void rea(){
    if(front!=-1){
        printf("Rear element is %d and it index is %d\n",queue[rear],rear);
    }
}
int main(){
    front =-1;
    rear =-1;
    printf("Enter the size of queue\n");
    scanf("%d",&size);
    int c;
    do{
        printf("Press 1 for enqueue\nPress 2 for Dequeue\nPress 3 for Front element\nPress 4 for rear Element \nPress 5 for display\nPress 6 for Exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:
            printf("Enter the number for enqueue\n");
            int d;
            scanf("%d",&d);
            enqueue(d);
            break;
            case 2:;
            dequeue();
            break;
            case 3:
            fro();
            break;
            case 4:
            rea();
            break;
            case 5:
            display();
            break;
        }
    }while(c!=6);
}
//output
/*
Enter the size of queue
6 
Press 1 for enqueue
Press 2 for Dequeue
Press 3 for Front element
Press 4 for rear Element 
Press 5 for display
Press 6 for Exit
1
Enter the number for enqueue
1
Press 1 for enqueue
Press 2 for Dequeue
Press 3 for Front element
Press 4 for rear Element 
Press 5 for display
Press 6 for Exit
1
Enter the number for enqueue
2
Press 1 for enqueue
Press 2 for Dequeue
Press 3 for Front element
Press 4 for rear Element 
Press 5 for display
Press 6 for Exit
5
1 2
Press 1 for enqueue
Press 2 for Dequeue
Press 3 for Front element
Press 4 for rear Element 
Press 5 for display
Press 6 for Exit
1
Enter the number for enqueue
35
Press 1 for enqueue
Press 2 for Dequeue
Press 3 for Front element
Press 4 for rear Element 
Press 5 for display
Press 6 for Exit
5
1 2 35
Press 1 for enqueue
Press 2 for Dequeue
Press 3 for Front element
Press 4 for rear Element 
Press 5 for display
Press 6 for Exit
2
Press 1 for enqueue
Press 2 for Dequeue
Press 3 for Front element
Press 4 for rear Element 
Press 5 for display
Press 6 for Exit
5
2 35
Press 1 for enqueue
Press 2 for Dequeue
Press 3 for Front element
Press 4 for rear Element 
Press 5 for display
Press 6 for Exit
6
*/