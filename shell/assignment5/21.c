#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <semaphore.h>
#include <unistd.h>

int main()
{
    // Open file
    int fd = open("file.txt", O_RDWR | O_CREAT, 0666);
    if (fd == -1) {
        perror("open");
        exit(1);
    }

    // Create semaphore
    sem_t *sem = sem_open("file_sem", O_CREAT, 0666, 1);
    if (sem == SEM_FAILED) {
        perror("sem_open");
        exit(1);
    }

    // Lock file using semaphore
    sem_wait(sem);

    // Write to file
    write(fd, "Hello, World!\n", 14);

    // Unlock file
    sem_post(sem);

    // Close file and semaphore
    close(fd);
    sem_close(sem);
    sem_unlink("file_sem");

    return 0;
}
