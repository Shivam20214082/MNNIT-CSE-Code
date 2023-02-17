#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("enter the file name -> ");
    char a[50];
    scanf("%s", a);
    FILE *f;
    f = fopen(a, "r");
    int charecter=0,line=0,words=0;
    if (f == NULL)
    {
        printf("File doesn't Exist\n");
    }
    else
    {
        char ch = fgetc(f);
        while (ch != EOF)
        {
            if(ch==' ' || ch=='\n') words++;
            if(ch=='\n') line++;
            if(ch!=' ' || ch!='\n')charecter++;
            // printf("%c", ch);
            ch = fgetc(f);
        }
    }
    printf("Total charecters in file is %d\n",charecter);
    printf("Total words in file is %d\n",words);
    printf("Total line in file is %d\n",line);

    return 0;
}