#include<stdio.h>
#include<string.h>
void reverse(char* s){
    char *a,*b,c;
    a=s;
    b=s;
    for(int i=0;i<strlen(s)-1;i++){
        b++;
    }
    for(int i=0;i<strlen(s)/2;i++){
        c=*a;
        *a=*b;
        *b=c;
        b--;
        a++;
    }

}
int main(){
    char s[50];
    printf("Enter a string\n");
    gets(s);
    reverse(s);
    printf("Reverse string \n%s \n",s);
}
//output
/*
Enter a string
this is a boy
Reverse string 
yob a si siht 
*/