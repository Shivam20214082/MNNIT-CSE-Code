#include <stdio.h>
#include<string.h>
#include <stdbool.h>
bool isKeyword(char* str)
{
    if (!strcmp(str, "if") || !strcmp(str, "else") ||
        !strcmp(str, "while") || !strcmp(str, "do") ||
        !strcmp(str, "break") ||
         !strcmp(str, "continue") || !strcmp(str, "int")
        || !strcmp(str, "double") || !strcmp(str, "float")
        || !strcmp(str, "return") || !strcmp(str, "char")
        || !strcmp(str, "case") || !strcmp(str, "char")
        || !strcmp(str, "sizeof") || !strcmp(str, "long")
        || !strcmp(str, "short") || !strcmp(str, "typedef")
        || !strcmp(str, "switch") || !strcmp(str, "unsigned")
        || !strcmp(str, "void") || !strcmp(str, "static")
        || !strcmp(str, "struct") || !strcmp(str, "goto"))
        return true;
    return false;
}
int main()
{
    char s[]="int a = my int+int {na} me a+ is shivam a+b";
    int len=sizeof(s)/sizeof(s[0]);
    char str[]="";
    for(int i=0;i<len;i++){
        char ch=s[i];
        if(ch==' '){
            if(isKeyword(str)){
                printf("%s\n",str);
            }
            *str='\0';
        }
        else if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}'
        || ch=='@'||ch=='$'|| ch=='*'|| ch=='?' || ch=='#'){
            if(str!=""){
                if(isKeyword(str)){
                printf("%s\n",str);
                }
                *str='\0';
            }
        }
        else{
            strncat(str, &ch, 1);
        }
    }
    return 0;
}
//output
/*
int
int
int
*/