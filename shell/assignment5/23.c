#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_SIZE 1024

int main()
{
    int shmid;
    char *shmaddr;
    key_t key = 1234;

    // Create shared memory segment
    shmid = shmget(key, SHM_SIZE, IPC_CREAT | 0666);
    if (shmid == -1) {
        perror("shmget");
        exit(1);
    }

    // Attach shared memory segment
    shmaddr = shmat(shmid, NULL, 0);
    if (shmaddr == (char *) -1) {
        perror("shmat");
        exit(1);
    }

    // Write data to shared memory segment
    strncpy(shmaddr, "Hello, World!", SHM_SIZE);

    // Read data from shared memory segment
    printf("Data read from shared memory: %s\n", shmaddr);

    // Detach shared memory segment
    shmdt(shmaddr);

    // Remove shared memory segment
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}
