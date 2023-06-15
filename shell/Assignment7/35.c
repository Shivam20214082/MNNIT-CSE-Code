#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <program> [arg1] [arg2] ...\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    pid_t pid = fork();
    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // child process
        execvp(argv[1], &argv[1]);
        perror("execvp");
        exit(EXIT_FAILURE);
    } else {
        // parent process
        sleep(5); // wait for 5 seconds

        int status;
        pid_t result = waitpid(pid, &status, WNOHANG); // check if child has completed
        if (result == 0) {
            // child process is still running, kill it
            kill(pid, SIGKILL);
            printf("Child process killed after 5 seconds\n");
        } else if (result == -1) {
            perror("waitpid");
            exit(EXIT_FAILURE);
        } else {
            // child process has completed
            if (WIFEXITED(status)) {
                printf("Child exited with status %d\n", WEXITSTATUS(status));
            } else if (WIFSIGNALED(status)) {
                printf("Child terminated by signal %d\n", WTERMSIG(status));
            }
        }
    }

    return 0;
}
