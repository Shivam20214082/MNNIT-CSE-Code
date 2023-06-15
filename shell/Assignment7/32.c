#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    int status;

    // Fork the process
    pid = fork();

    if (pid < 0) { 
        fprintf(stderr, "Fork failed\n");
        exit(1);
    } else if (pid == 0) {
        char *args[] = {"ls", "-l", NULL};
        execvp(args[0], args);
        fprintf(stderr, "Exec failed\n"); 
        exit(1);
    } else { 
        wait(&status); 
        printf("Child process exited with status %d\n", status);
    }

    return 0;
}
