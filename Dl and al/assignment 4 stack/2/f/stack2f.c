//Shivam Kumar Gupta
//20214082
//CSE-D
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define max 100
char stack[max][max];
int top;
char st[max];

void push(char *str){
    if(top > max){
        printf("Stack overflow\n");
        exit(1);
    }
    else{
        strcpy( stack[++top],str);
    }
}
char *pop(){
    if(top==-1){
        printf("Underflow\n");
        exit(2);
    }
    else{
        return(stack[top--]);
    }
}

void potopr(){
    int i;
    char a[max],b[max],c[max],y[2];
    char x;
    for(int i=strlen(st)-1;i>=0;i--){
        x=st[i];
        y[0]=x;
        y[1]='\0';
        if(x=='+'||x=='-'||x=='/'||x=='*'||x=='^'||x=='%'){
            strcpy(a,pop());
            strcpy(b,pop());
            strcpy(c,y);
            strcat(a,b);
            strcat(a,c);
            push(a);
        }
        else{
            push(y);
        }
    }
    printf("\nPostfix Expression is : : ");
    puts(stack[0]);
}
int main(){
    top=-1;
    printf("Prefix Expression  : : ");
    gets(st);
    potopr();
    return 0;
}
//output
/*
Prefix Expression  : : +-a/bc*^def

Postfix Expression is : : abc/-de^f*+
*/