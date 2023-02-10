#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    printf("Enter a C program: ");
    fgets(input, sizeof(input), stdin);

    char *token = strtok(input, " \n\t");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " \n\t");
    }

    return 0;
}