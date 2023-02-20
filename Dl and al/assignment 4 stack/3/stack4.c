//Shivam Kumar Gupta
//20214082
//CSE-D
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int top;
    int size;
    int* array;
};
struct stack* createStack(int size){
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=size;
    s->array=malloc(sizeof(int)*s->size);
    return s;
}
void push(struct stack* s,int x){
    if(s->top==s->size-1){
        printf("Overflow\n");
        exit(1);
    }
    else{
        s->array[++s->top]=x;
    }
}
int pop(struct stack* s){
    if(s->top==-1){
        printf("Underflow\n");
        exit(2);
    }
    else{
        return s->array[s->top--];
    }
}
void evtopo(struct stack* s,char a[20]){
    for(int i=0;i<strlen(a);i++){
        int b,c;
        switch(a[i]){
            case '+':
            b=pop(s);
            c=pop(s);
            push(s,b+c);
            break;
            case '-':
            b=pop(s);
            c=pop(s);
            push(s,c-b);
            break;
            case '*':
            b=pop(s);
            c=pop(s);
            push(s,c*b);
            break;
            case '/':
            b=pop(s);
            c=pop(s);
            push(s,c/b);
            break;
            case '^':
            b=pop(s);
            c=pop(s);
            push(s,c^b);
            break;
            case '%':
            b=pop(s);
            c=pop(s);
            push(s,c%b);
            break;
            default:
            push(s,a[i]-48);
        }
    }
}
int main(){
    struct stack* s2=createStack(100);
    char a[20];
    printf("Enter the postfix in number and operator : ");
    scanf("%s",a);
    printf("%c\n",a[0]);

    evtopo(s2,a);
    printf("Answer is %d\n",s2->array[0]);
    return 0;
}

//output
/*
Enter the postfix in number and operator : 11+
1
Answer is 2
*/