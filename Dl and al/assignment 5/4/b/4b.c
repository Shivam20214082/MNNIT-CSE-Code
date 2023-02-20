#include<stdio.h>
#include<string.h>
void count(char* s){
    char *a,c;
    int cv=0,cc=0;
    a=s;
    for(int i=0;i<strlen(s);i++){
        if(*a>64 && *a<=90 || *a>96 && *a<=122){
            if(*a>64 && *a<=90){
                if(*a=='A'||*a=='E' || *a=='I' || *a=='O'  || *a=='U'){
                    cv++;
                }
                else cc++;
            }
            else{
                if(*a=='a'||*a=='e' || *a=='i' || *a=='o'  || *a=='u'){
                    cv++;
                }
                else cc++;
            }   
            
        }
        a++;
    }
    printf("Total no. of vowel :: %d\n",cv);
    printf("Total no. of consonent :: %d\n",cc);

}
int main(){
    char s[50];
    printf("Enter a string\n");
    scanf("%s",s);
    count(s);
}
//output
/*
Enter a string
abcdefghijklmnopqrstuvwxyz
Total no. of vowel :: 5
Total no. of consonent :: 21
*/