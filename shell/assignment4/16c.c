#include <sys/types.h>
#include <sys/stat.h>
#include<unistd.h>
#include <stdio.h>
#include <fcntl.h>
int main()
{
    int i, fd1, fd2;
    char file1[20], file2[20], buf[2];
    printf("enter first file name and second file name \n");
    scanf("%s%s",file1,file2);
    fd1 = open(file1, O_RDONLY);
    fd2 = open(file2,O_CREAT| O_WRONLY);
    while (i = read(fd1, buf, 1) > 0){
        write(fd2, buf, 1);
        // write(1, buf, 1);
    }
    close(fd1);
    close(fd2);
    remove(file1);
}