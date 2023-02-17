#include <stdio.h>
#include <stdlib.h>
int main()
{

    char ch;
    char paragraph[1000];
    FILE *fptr;

    // Prompt the user to enter a paragraph
    printf("Enter a paragraph to write in file: ");
    fgets(paragraph, 1000, stdin);

    printf("enter the file name -> ");
    char a[50];
    scanf("%s", a);
    FILE *f;
    f = fopen(a, "r");
    int count = 0;
    // Open file for writing
    fptr = fopen(a, "w");
    // Write paragraph to file
    fprintf(fptr, "%s", paragraph);
    fclose(fptr);
    int charecter = 0, line = 0, words = 0;
    ch = fgetc(f);
    while (ch != EOF)
    {
        if (ch == ' ' || ch == '\n')
            words++;
        if (ch == '\n')
            line++;
        if (ch != ' ' || ch != '\n')
            charecter++;
        // printf("%c", ch);
        ch = fgetc(f);
    }

    printf("Total charecters in file is %d\n", charecter);
    printf("Total words in file is %d\n", words);
    printf("Total line in file is %d\n", line);

    return 0;
}
