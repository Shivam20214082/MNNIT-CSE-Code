#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <semaphore.h>

#define BUFFER_SIZE 5
#define MAX_ITEMS 20

int buffer[BUFFER_SIZE];
int in = 0;
int out = 0;
int count = 0;

sem_t *empty, *full, *mutex;

void producer() {
    int item;
    for (int i = 0; i < MAX_ITEMS; i++) {
        item = rand() % 100; // generate a random number between 0 and 99
        sem_wait(empty); // wait for an empty slot in the buffer
        sem_wait(mutex); // acquire the mutex to modify the buffer
        buffer[in] = item; // add the item to the buffer
        in = (in + 1) % BUFFER_SIZE; // update the in pointer
        count++; // increase the count of items in the buffer
        printf("Producer: added item %d to the buffer\n", item);
        sem_post(mutex); // release the mutex
        sem_post(full); // signal that the buffer is not empty
        sleep(1); // sleep for 1 second to simulate production time
    }
}

void consumer() {
    int item;
    for (int i = 0; i < MAX_ITEMS; i++) {
        sem_wait(full); // wait for a non-empty buffer
        sem_wait(mutex); // acquire the mutex to modify the buffer
        item = buffer[out]; // get an item from the buffer
        out = (out + 1) % BUFFER_SIZE; // update the out pointer
        count--; // decrease the count of items in the buffer
        printf("Consumer: removed item %d from the buffer\n", item);
        sem_post(mutex); // release the mutex
        sem_post(empty); // signal that the buffer is not full
        sleep(2); // sleep for 2 seconds to simulate consumption time
    }
}

int main() {
    empty = sem_open("/empty", O_CREAT | O_EXCL, 0666, BUFFER_SIZE);
    full = sem_open("/full", O_CREAT | O_EXCL, 0666, 0);
    mutex = sem_open("/mutex", O_CREAT | O_EXCL, 0666, 1);

    if (empty == SEM_FAILED || full == SEM_FAILED || mutex == SEM_FAILED) {
        perror("sem_open");
        exit(1);
    }

    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        exit(1);
    }
    else if (pid == 0) {
        producer();
    }
    else {
        consumer();
    }

    sem_close(empty);
    sem_close(full);
    sem_close(mutex);
    sem_unlink("/empty");
    sem_unlink("/full");
    sem_unlink("/mutex");

    return 0;
}
