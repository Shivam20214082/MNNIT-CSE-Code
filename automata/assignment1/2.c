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
    // cout<<"Hello World";
    char s[]="int a + c $ d int;";
    int len=sizeof(s)/sizeof(s[0]);
    char str[]="";
    for(int i=0;i<len;i++){
        char ch=s[i];
        if(ch==' '){
            if(isKeyword(str)){
                printf("%s -> Keyword\n",str);
            }
            else{
                int size=sizeof(str)/sizeof(str[0]);
                if(size==1){
                    printf("%s -> Constant\n",str);
                }
                else{
                    printf("%s -> String\n",str);
                }
            }
            *str='\0';
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == ';' || ch == '>' ||ch == '<' || ch == '=' )
        {
            if(str=='\0'){
                printf("%c -> operator\n",ch);
            }
            if(str!='\0'){
                if(isKeyword(str)){
                    printf("%s -> keyword\n",str);
                }
                else{
                    int size=sizeof(str)/sizeof(str[0]);
                    if(size==1){
                        printf("%s -> Constant\n",str);
                    }
                    else{
                        printf("%s -> String\n",str);
                    }
               }
               printf("%c -> operator\n",ch);
               *str='\0';
            }       
        }
        else if (ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}' || ch=='@'||ch=='$'|| ch=='?' || ch=='#' )
        {
            if(str!='\0'){
                if(isKeyword(str)){
                    printf("%s -> keyword\n",str);
                }
                else{
                int size=sizeof(str)/sizeof(str[0]);
                if(size==1){
                    printf("%s -> Constant\n",str);
                }
                else{
                    printf("%s -> String \n",str);
                }
            }
            }
            printf("%c -> Special Symbol\n",ch);
            *str='\0';
        }
        else{
            strncat(str, &ch, 1);
        }
    }
    return 0;
}