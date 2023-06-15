#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int pipefd[2];
    pid_t pid1, pid2;

    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    pid1 = fork();
    if (pid1 == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid1 == 0) { // child process 1: run "cat"
        close(pipefd[0]); // close unused read end of the pipe

        dup2(pipefd[1], STDOUT_FILENO); // redirect stdout to the pipe

        execlp("cat", "cat", NULL); // execute "cat"
        perror("execlp");
        exit(EXIT_FAILURE);
    }

    pid2 = fork();
    if (pid2 == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid2 == 0) { // child process 2: run "tr"
        close(pipefd[1]); // close unused write end of the pipe

        dup2(pipefd[0], STDIN_FILENO); // redirect stdin to the pipe

        execlp("tr", "tr", "[:lower:]", "[:upper:]", NULL); // execute "tr"
        perror("execlp");
        exit(EXIT_FAILURE);
    }

    close(pipefd[0]);
    close(pipefd[1]);

    // wait for child processes to finish
    waitpid(pid1, NULL, 0);
    waitpid(pid2, NULL, 0);

    return 0;
}
