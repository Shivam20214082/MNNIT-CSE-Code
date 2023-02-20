#include<stdio.h>
int sum(int x,int y){
    return x+y;
}
void swap(int* a,int* b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int a,b,c;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    swap(&a,&b);
    printf("Sum is %d\n",c);
    printf("After swaping a= %d and b= %d\n",a,b);
}
//output
/*
Enter two number
23
898
Sum is 921
After swaping a= 898 and b= 23
*/