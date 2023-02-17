#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(){
    int n,f,c=0,x;
    printf("enter the name of file and number of charecter to read \n");
    char a[30];
    scanf("%s",a);
    scanf("%d",&x);
    f=open("2.txt",O_CREAT | O_RDONLY);
    char buff[x];
    n=read(f,buff,x);
    write(1,buff,x);
    for(int i=0;i<x;i++){
        if(buff[i]==' ' || buff[i]=='\n')c++;
    }
    printf("\ntotal no. of blanks in file till %d charectersS is %d\n",x,c);
}