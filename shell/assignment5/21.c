#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include<string.h>
#include <semaphore.h>

#define FILENAME "file.txt"

int main() {
    // Open the file
    int fd = open(FILENAME, O_CREAT | O_RDWR, 0666);
    if (fd < 0) {
        perror("open");
        exit(1);
    }

    // Initialize a semaphore
    sem_t *sem = sem_open("/file_semaphore", O_CREAT | O_EXCL, 0666, 1);
    if (sem == SEM_FAILED) {
        perror("sem_open");
        exit(1);
    }

    // Acquire the semaphore
    if (sem_wait(sem) == -1) {
        perror("sem_wait");
        exit(1);
    }

    // Write to the file
    char *message = "Hello, world!\n";
    if (write(fd, message, strlen(message)) == -1) {
        perror("write");
        exit(1);
    }

    // Release the semaphore
    if (sem_post(sem) == -1) {
        perror("sem_post");
        exit(1);
    }

    // Close the file
    if (close(fd) == -1) {
        perror("close");
        exit(1);
    }

    // Close the semaphore
    if (sem_close(sem) == -1) {
        perror("sem_close");
        exit(1);
    }

    // Unlink the semaphore
    if (sem_unlink("/file_semaphore") == -1) {
        perror("sem_unlink");
        exit(1);
    }

    return 0;
}
