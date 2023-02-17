#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <semaphore.h>

int main()
{
    int fd;
    sem_t *sem;

    // Open the file for writing
    fd = open("example.txt", O_WRONLY);
    if (fd == -1)
    {
        perror("open");
        exit(1);
    }

    // Create a semaphore for file locking
    sem = sem_open("example_sem", O_CREAT, 0644, 1);
    if (sem == SEM_FAILED)
    {
        perror("sem_open");
        exit(1);
    }

    // Acquire the semaphore to lock the file
    sem_wait(sem);

    // Write to the file
    write(fd, "Hello, world!", 13);

    // Release the semaphore to unlock the file
    sem_post(sem);

    // Close the file and cleanup
    close(fd);
    sem_close(sem);
    sem_unlink("example_sem");

    return 0;
}