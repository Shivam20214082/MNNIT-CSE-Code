#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_ARGS 10

int main() {
    char cmd[1000];
    char *args[MAX_ARGS+1];
    char *token;
    int i;

    while (1) {
        printf("> ");
        fgets(cmd, sizeof(cmd), stdin);
        cmd[strcspn(cmd, "\n")] = '\0';

        i = 0;
        token = strtok(cmd, " ");
        while (token != NULL && i < MAX_ARGS) {
            args[i++] = token;
            token = strtok(NULL, " ");
        }
        args[i] = NULL;

        if (i == 0) {
            continue;  // No command entered, prompt again
        }

        if (strcmp(args[0], "exit") == 0) {
            exit(0);  // Exit program if "exit" command is entered
        }

        if (fork() == 0) {
            execvp(args[0], args);
            perror("execvp");
            exit(1);
        }
        wait(NULL);
    }

    return 0;
}
