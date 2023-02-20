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
int main(){
    top=-1;
    char s[max];
    printf("Entered string : : ");
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            push(s[i]);
            printf("push\n");
        }
        else{
            if(s[i]=='}'){
                char b=pop();
                printf("pop\n");
                if(b=='{'){
                    continue;
                }
                else{
                    printf("False\n");
                    exit(1);
                }
            }
            else if(s[i]==']'){
                int b=pop();
                printf("pop\n");
                if(b=='['){
                    continue;
                }   
                else{
                    printf("False\n");
                    exit(1);
                }
            }
            else if(s[i]==')'){
                int b=pop();
                printf("pop\n");
                if(b=='('){
                    continue;
                }
                else{
                    printf("False\n");
                    exit(1);
                }
            }
        }
    }
    if(top==-1)
    printf("True\n");
    else 
    printf("False\n");
}
//output
/*
Entered string : : (({})[])
push
push
push
pop
pop
push
pop
pop
True
*/