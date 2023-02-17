#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
    fork();
    printf("hello\n");
    return 0;
}