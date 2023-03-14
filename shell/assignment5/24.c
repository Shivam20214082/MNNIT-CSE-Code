#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define MAX_MSG_SIZE 1024

struct message {
    long mtype;
    char mtext[MAX_MSG_SIZE];
};

int main()
{
    key_t key = 1234;
    int msgid;
    struct message msg;

    // Create message queue
    msgid = msgget(key, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    // Write message to queue
    msg.mtype = 1;
    strncpy(msg.mtext, "Hello, World!", MAX_MSG_SIZE);
    if (msgsnd(msgid, &msg, sizeof(struct message) - sizeof(long), 0) == -1) {
        perror("msgsnd");
        exit(1);
    }

    // Read message from queue
    if (msgrcv(msgid, &msg, sizeof(struct message) - sizeof(long), 1, 0) == -1) {
        perror("msgrcv");
        exit(1);
    }

    // Print message
    printf("Message received: %s\n", msg.mtext);

    // Remove message queue
    if (msgctl(msgid, IPC_RMID, NULL) == -1) {
        perror("msgctl");
        exit(1);
    }

    return 0;
}
