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
int Prec(char ch){
    switch (ch) {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}
int intopr(struct stack* s2,char a[20]){
    int b[strlen(a)],k=0;
    for(int i=strlen(a);i>=0;i--){
        if(65<=a[i] && a[i]<=90 || 97<=a[i] && a[i]<=122){
            b[k++]=a[i];
        }
        else if(a[i]==')'){
            push(s2,a[i]);
        }
        else if(a[i]=='('){
            while(s2->array[s2->top]!=')'){
                b[k++]=pop(s2);
            }
        }
        else{
            while ((s2->top!=-1) && Prec(a[i]) < Prec(s2->array[s2->top])){
                b[k++] = pop(s2);
            }
            push(s2, a[i]);
        }
    }
    while(s2->top!=-1){
        b[k++]=pop(s2);
    }
    // b[k]='\0';
    printf("\nPrefix is : ");
    for(int i=k-1;i>=0;i--){
        printf("%c",b[i]);
    }
}

int main(){
    struct stack* s2=createStack(100);
    char a[20];
    printf("Enter the Infix : ");
    scanf("%s",a);
    intopr(s2,a);
    // potoin(s2,a);
    return 0;
}
//output
/*
Enter the Infix : a-b/c+d^e*f

Prefix is : +-a/bc*^def
*/