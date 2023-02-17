#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("enter the file name -> ");
    char a[50];
    scanf("%s", a);
    FILE *f;
    f = fopen(a, "r");
    int count=0;
    if (f == NULL)
    {
        printf("File doesn't Exist\n");
    }
    else
    {
        char ch = fgetc(f);
        while (ch != EOF)
        {
            if(ch==' ') count++;
            // printf("%c", ch);
            ch = fgetc(f);
        }
    }
    printf("Total blanks in file is %d\n",count);

    return 0;
}