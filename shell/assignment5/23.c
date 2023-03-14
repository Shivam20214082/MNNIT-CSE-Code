#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_KEY 1234
#define SHM_SIZE 1024

int main() {
    int shmid;
    char *shmaddr;
    pid_t pid;

    shmid = shmget(SHM_KEY, SHM_SIZE, IPC_CREAT | 0666); // create a shared memory segment
    if (shmid < 0) {
        perror("shmget");
        exit(1);
    }

    shmaddr = shmat(shmid, NULL, 0); // attach the shared memory segment to the process's address space
    if (shmaddr == (char *) -1) {
        perror("shmat");
        exit(1);
    }

    pid = fork(); // create a child process
    if (pid < 0) {
        perror("fork");
        exit(1);
    }
    else if (pid == 0) { // child process writes to the shared memory segment
        printf("Child process writing to shared memory segment\n");
        sprintf(shmaddr, "Hello from child process");
        exit(0);
    }
    else { // parent process reads from the shared memory segment
        wait(NULL); // wait for the child process to finish
        printf("Parent process reading from shared memory segment\n");
        printf("Message received: %s\n", shmaddr);
    }

    shmdt(shmaddr); // detach the shared memory segment from the process's address space
    shmctl(shmid, IPC_RMID, NULL); // mark the shared memory segment for removal

    return 0;
}
