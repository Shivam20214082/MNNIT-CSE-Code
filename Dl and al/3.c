#include<stdio.h>
int main(){
    int a[10],b[10],c[20];
    printf("Enter elements of first array\n");
    for(int i=0;i<10;i++){
        printf("Enter %d element of array\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter elements of Second array\n");
    for(int i=0;i<10;i++){
        printf("Enter %d element of array\n",i+1);
        scanf("%d",&b[i]);
    }
    printf("First array\n");
    for(int i=0;i<10;i++){
        c[i]=a[i];
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Second array\n");
    for(int i=0;i<10;i++){
        printf("%d ",b[i]);
        c[10+i]=b[i];
    }
    printf("\n");
    for(int i=0;i<20;i++){
        for(int j=0;j<20-i;j++){
            if(c[j]>c[j+1]){
                int x=c[j+1];
                c[j+1]=c[j];
                c[j]=x;
            }
        }
    }
    printf("Hence final sorted array\n");
    for(int i=19;i>=0;i--){
        printf("%d ",c[i]);
    }
    printf("\n");

}
//output//
/*
Enter elements of first array
Enter 1 element of array
12
Enter 2 element of array
4
Enter 3 element of array
25
Enter 4 element of array
14
Enter 5 element of array
23
Enter 6 element of array
36
Enter 7 element of array
21
Enter 8 element of array
23
Enter 9 element of array
75
Enter 10 element of array
84
Enter elements of Second array
Enter 1 element of array
86
Enter 2 element of array
59
Enter 3 element of array
2
Enter 4 element of array
6
Enter 5 element of array
4
Enter 6 element of array
9
Enter 7 element of array
7
Enter 8 element of array
13
Enter 9 element of array
31
Enter 10 element of array
26
First array
12 4 25 14 23 36 21 23 75 84
Second array
86 59 2 6 4 9 7 13 31 26
Hence final sorted array
86 84 75 59 36 31 26 25 23 23 21 14 13 12 9 7 6 4 4 2
*/
