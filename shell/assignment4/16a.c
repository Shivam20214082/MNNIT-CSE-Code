#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int n, f, c = 0, x;
    char a[20],i;
    printf("enter the name of file u want to create -> ");
    scanf("%s", a);
    f = open(a, O_CREAT | O_RDONLY | O_WRONLY,0777);
    FILE *fl=fopen(a,"w");
    char s[2000];
    char ch;
    scanf("%c",&ch);
    while (scanf("%c",&ch) && ch!='\n')
    {
        fputc(ch,fl);
    }
    fclose(fl);!
    printf("enter the name of file u want to open\n");
    scanf("%s", a);
    fl=fopen(a,"r");
    if (fl == NULL)
    {
        printf("File doesn't Exist\n");
    }
    else
    {
        char ch = fgetc(fl);
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(fl);
        }
    }
    close(f);
}