#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
int top;
char stack[max];
void push(char x){
    if(top==max-1){
        printf("stack overflow\n");
        exit(1);
    }
    else{
        stack[++top]=x;
    }
}
char pop(){
    if(top==-1){
        printf("stack underflow\n");
        exit(2);
    }
    else{
        return stack[top--];
    }
}
void reverse(){
    int b=top+1;
    char a[b];
    for(int i=0;i<b;i++){
        a[i]=pop();
    }
    printf("Reverse string is : : ");
    for(int i=0;i<b;i++){
        printf("%c",a[i]);
    }
    printf("\n");
}
int main(){
    top=-1;
    char st[max];
    printf("Entered string : : ");
    gets(st);
    for(int i=0;st[i]!='\0';i++){
        push(st[i]);
    }
    reverse();
}
//output
/*
Entered string : : ram is good
Reverse string is : : doog si mar
*/