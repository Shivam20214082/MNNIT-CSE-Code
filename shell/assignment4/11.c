#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    int fd,fd2;
    char a[20];
    fd=open("1.txt",O_RDONLY);
    fd2=open("2.txt",O_RDONLY | O_WRONLY | O_CREAT) ;
    if(fd<0){
        
    }
    int i;
    int buff[2];
    while( i=read(fd,buff,1)>0){
        write(fd2,buff,1);
    }
    printf("suusecful");

}