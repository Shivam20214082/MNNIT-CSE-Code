//Shivam Kumar Gupta
//20214082
//CSE-D


#include<stdio.h>
#include<stdlib.h>
#define max 100

int stack[max];
int top=-1;
int size;

void push(int x){
    if(top==size-1){
        printf("Stack overflow\n");
        exit(1);
    }
    else{
        stack[++top]=x;
    }
}

int pop(){
    if(top==-1){
        printf("stack underflow\n");
        exit(2);
    }
    else{
        return stack[top--];
    }
}
void display(){
    for(int i=0;i<=top;i++){
        printf("%d\t",stack[i]);
    }
}
void pnumber(int x){
    while(x>0){
        push(x%10);
        x=x/10;
    }
}
void stacksize(){
    printf("Total number of element in stack is %d\n",top+1);
}

int main(){
    printf("enter size of stack\n");
    scanf("%d",&size);
    push(5);
    push(4);
    push(8);
    push(6);
    push(2);
    printf("Current stack :: ");
    display();
    printf("\ndeleted element is %d\n",pop());
    printf("New current stack :: ");
    display();
    printf("\n");

    //printing the number of element present in current stack
    stacksize(); 

    //checking palindrome number
    top=-1;
    printf("Enter a number to check palindrome\n");
    int pal_number,y=0,t=1;
    scanf("%d",&pal_number);
    pnumber(pal_number);
    for(int i=0;i<=top;i){
        y=y+pop()*t;
        t=t*10;
    }
    if(y==pal_number){
        printf("%d is palindrome number\n",pal_number);
    }
    else{
        printf("%d is not a palindrome number\n",pal_number);
    }
}

//output
/*
enter size of stack
9
Current stack :: 5      4       8       6       2
deleted element is 2
New current stack :: 5  4       8       6
Total number of element in stack is 4
Enter a number to check palindrome
1234321
1234321 is palindrome number
*/