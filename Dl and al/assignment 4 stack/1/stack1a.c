//Shivam Kumar Gupta
//20214082
//CSE-D
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int* array;
};
struct stack* createStack(int size){
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=size;
    s->array= malloc(sizeof(int)*s->size);
    return s;
} 

int push(struct stack* s,int x){
    if(s->top==(s->size-1)){
        return -1;
    }
    else{
        s->array[++(s->top)]=x;
        return 0;
    }
}

int pop(struct stack* s){
    if(s->top==-1){
        return -2;
    }
    else{
        int x =s->array[((s->top)--)];
        return x;
    }
}

int peek(struct stack* s){
    if(s->top==-1)
    return -3;
    else
    return s->array[s->top];
}


void display(struct stack* s){
    int x=s->top;
    int a[x+1];
    if(x==-1)
    printf("Stack is Empty\n");
    else{
    printf("Your stack is\n");
    for(int i=0;i<=x;i++){
        a[i]=pop(s);
    }
    for(int i=x;i>=0;i--){
        push(s,a[i]);
    }
    for(int i=x;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n\n");
    }
}


int main(){
    struct stack* s2=createStack(100);
    int a;
    while(a!=5){
        printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 for peek\nEnter 4 for Display stack\nEnter 5 for exit\n");
        scanf("%d",&a);
        switch(a){
            int b,c,d,e,f;
            case 1:
            printf("Enter element for push\n");
            b;
            scanf("%d",&b);
            e=push(s2,b);
            if(e==-1){
                printf("Stack Overflow\n\n");
            }
            break;
    
            case 2:
            d=pop(s2);
            if(d==-2){
                printf("Stack Underflow\n\n");
            }
            else
            printf("Deleted element is %d\n\n",d);
            break;
    
            case 3:
            f=peek(s2);
            if(f==-3)
            printf("Stack is Empty\n\n");
            else
            printf("Peek element is %d\n\n",peek(s2));
            break;
    
            case 4:
            display(s2);
            break;
        }
    }
    return 0;
}

//output
/*
Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
1
Enter element for push
15
Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
1
Enter element for push
24
Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
3
Peek element is 24

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
4
Your stack is
15 24

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
5
*/