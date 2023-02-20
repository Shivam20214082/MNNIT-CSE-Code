//Shivam Kumar Gupta
//20214082
//CSE-D
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[50];
int top=-1;
void push(char ch)
{
    stack[++top]=ch;
}
char pop()
{
    return stack[top--];
}
void convert(char b[])
{
    int l,i,j=0;
    char tmp[20];
    strrev(b);
    l=strlen(b);
    for(i=0;i<50;i++){
        stack[i]='\0';
    }
    printf("\nThe Infix Expression is : : ");
    for(i=0;i<l;i++){
        if(b[i]=='+'||b[i]=='-'||b[i]=='*'||b[i]=='/'||b[i]=='^')
            push(b[i]);
        else{
            tmp[j++]=b[i];
            tmp[j++]=pop();
        }
    }
    tmp[j]=b[top--];
    strrev(tmp);
    puts(tmp);
}
int main()
{
    char a[50];
    printf("\nEnter the Postfix Expression : : ");
    gets(a);
    convert(a);
    printf("\n");
    return 0;
}

//output
/*
Enter the Postfix Expression : : abc/-de^f*+

The Infix Expression is : : a-b/c+d^e*f
*/