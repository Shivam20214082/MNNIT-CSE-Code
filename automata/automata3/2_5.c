#include <stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hello World");
    FILE  *f;
    FILE *g;
    char ch;
    f=fopen("2.txt","r");
    g=fopen("1.txt","w");
    ch=fgetc(f);
   if(f == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    while(ch != EOF){
        ch==tolower(ch);
        printf("%c",ch);
        fputc(ch,g);
        ch=fgetc(f);
    }
    fclose(f);
    fclose(g);

    return 0;
}


