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
    s->size=size;
    s->array=malloc(sizeof(int) * s->size);
    return s;
}
void push(struct stack* s,int x){
    if(s->top==(s->size)-1 || s->top==s->size +1){
        printf("stack overflow\n");
        exit(1);
    }
    else{
        if(s->top < s->size-1){
            s->array[++(s->top)]=x;
        }
        else s->array[--(s->top)]=x;
    }
}

int pop(struct stack *s){
    if(s->top==-1 || s->top==2*s->size){
        return -2;
    }
    else{
        if(s->top < s->size){
            return s->array[(s->top)--];
        }
        else{
            return s->array[(s->top)++];
        }
    }
}

int peek(struct stack* s){
    if(s->top==-1 || s->top==2*s->size)
    return -3;
    else
    return s->array[s->top];
}

void display(struct stack* s){
    int x=s->top;
    int b[s->size];
    if(x==-1||x==2*(s->size))
    printf("Stack is Empty\n");
    else{
        if(x < s->size){
            printf("stack 1 is\n");
            for(int i=0;i<=x;i++){
                b[i]=pop(s);
            }
            for(int i=x;i>=0;i--){
                push(s,b[i]);
            }
            for(int i=x;i>=0;i--){
                printf("%d ",b[i]);
            }
            printf("\n\n");
        }
        else if(x > s->size){
            x=2*(s->size)-(s->top);
            printf("\n\nstack 2 is\n");
            for(int i=0;i<x;i++){
                b[i]=pop(s);
            }
            for(int i=x-1;i>=0;i--){
                push(s,b[i]);
            }
            for(int i=x-1;i>=0;i--){
                printf("%d ",b[i]);
            }
            printf("\n\n");
        }
    }
    
}
int main(){
    printf("Enter size of array\n");
    int a;
    scanf("%d",&a);
    struct stack* s1 = createStack(a/2);
    struct stack* s2 = createStack(a/2);
    s1->top=-1;
    s2->top=(a/2+a/2);
    while(a!=5){
        printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 for peek\nEnter 4 for Display stack\nEnter 5 for exit\n");
        scanf("%d",&a);
        switch(a){
            int b,c,d,e,f;


            case 1:
            printf("For stack1 press 1 and For stack2 press 2\n");
            b;
            scanf("%d",&b);
            printf("Enter element to be pushed\n");
            scanf("%d",&c);
            if(b==1){
                push(s1,c);
            }
            else if(b==2){
                push(s2,c);
            }
            else{
                printf("Inavlid entry\n");
                exit(3);
            }
            break;
            //for pop
            case 2:
            printf("For stack1 press 1 and For stack2 press 2\n");
            b;
            scanf("%d",&b);
            if(b==1){
                d=pop(s1);
            }
            else if(b==2){
                d=pop(s2);
            }
            else{
                printf("Inavlid entry\n");
                exit(3);
            }
            if(d==-2){
                printf("Stack Underflow\n\n");
                exit(1);
            }
            else
            printf("Deleted element is %d\n\n",d);
            break;

            //for peek

            case 3:
            printf("For stack1 press 1 and For stack2 press 2\n");
            b;
            scanf("%d",&b);
            if(b==1){
                d=peek(s1);
            }
            else if(b==2){
                d=peek(s2);
            }
            else{
                printf("Inavlid entry\n");
                exit(3);
            }
            if(d==-3)
            printf("Stack is Empty\n\n");
            else
            printf("Peek element is %d\n\n",d);
            break;

            //for display


            case 4:
            display(s1);
            display(s2);
            break;
        }
    }
}

//output
/*
Enter size of array
8
Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
1
For stack1 press 1 and For stack2 press 2
1
Enter element to be pushed
25
Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
1
For stack1 press 1 and For stack2 press 2
1
Enter element to be pushed
50
Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
1
For stack1 press 1 and For stack2 press 2
2
Enter element to be pushed
1
Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
1
For stack1 press 1 and For stack2 press 2
2
Enter element to be pushed
36
Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit

4
stack 1 is
25 50



stack 2 is
1 36

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
2
For stack1 press 1 and For stack2 press 2
2
Deleted element is 36

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
4
stack 1 is
25 50



stack 2 is
1

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
2
For stack1 press 1 and For stack2 press 2
1
Deleted element is 50

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
4
stack 1 is
25



stack 2 is
1

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
4
stack 1 is
25



stack 2 is
1

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
4
stack 1 is
25



stack 2 is
1

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
3
For stack1 press 1 and For stack2 press 2
1
Peek element is 25

Enter 1 for push
Enter 2 for pop
Enter 3 for peek
Enter 4 for Display stack
Enter 5 for exit
5
*/
