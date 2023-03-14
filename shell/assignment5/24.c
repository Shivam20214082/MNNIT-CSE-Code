#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

#define MSG_KEY 1234
#define MSG_SIZE 1024

struct msgbuf {
    long mtype;
    char mtext[MSG_SIZE];
};

int main() {
    int msqid;
    struct msgbuf msg;
    pid_t pid;

    msqid = msgget(MSG_KEY, IPC_CREAT | 0666); // create a message queue
    if (msqid < 0) {
        perror("msgget");
        exit(1);
    }

    pid = fork(); // create a child process
    if (pid < 0) {
        perror("fork");
        exit(1);
    }
    else if (pid == 0) { // child process writes to the message queue
        printf("Child process writing to message queue\n");
        msg.mtype = 1;
        strcpy(msg.mtext, "Hello from child process");
        if (msgsnd(msqid, &msg, strlen(msg.mtext) + 1, 0) < 0) {
            perror("msgsnd");
            exit(1);
        }
        exit(0);
    }
    else { // parent process reads from the message queue
        wait(NULL); // wait for the child process to finish
        printf("Parent process reading from message queue\n");
        if (msgrcv(msqid, &msg, MSG_SIZE, 1, 0) < 0) {
            perror("msgrcv");
            exit(1);
        }
        printf("Message received: %s\n", msg.mtext);
    }

    msgctl(msqid, IPC_RMID, NULL); // remove the message queue

    return 0;
}
