#include<stdio.h>
int main(){
    int a=10;
    int*x=&a;
    char b='x';
    char* y=&b;
    double c=10.09;
    double* z=&c;
    float d=8.1;
    float* p=&d;
    printf("Size of int datatype is %d\n",sizeof(*x));
    printf("Size of char datatype is %d\n",sizeof(*y));
    printf("Size of doble datatype is %d\n",sizeof(*z));
    printf("Size of float datatype is %d\n",sizeof(*p));
    return 0;
}
//output
/*
Size of int datatype is 4
Size of char datatype is 1
Size of doble datatype is 8
Size of float datatype is 4
*/