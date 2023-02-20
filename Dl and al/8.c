#include<stdio.h>
int main(){
    int a[10],b[10],d=0;
    printf("Enter elements of array\n");
    for(int i=0;i<10;i++){
        printf("Enter %d element of array\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("Entered array\n");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<10-i;j++){
            if(a[j]>a[j+1]){
                int x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    printf("Sorted array\n");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<10;i=i+2){
        b[i]=a[d];
        d++;
    }
    d=9;
    for(int i=1;i<10;i=i+2){
        b[i]=a[d];
        d--;
    }
    printf("Hence Final array is\n");
    for(int i=0;i<10;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
}
//output//
/*
Enter elements of array
Enter 1 element of array
12
Enter 2 element of array
25
Enter 3 element of array
2
Enter 4 element of array
54
Enter 5 element of array
3
Enter 6 element of array
13
Enter 7 element of array
31
Enter 8 element of array
7
Enter 9 element of array
8
Enter 10 element of array
26
Entered array
12 25 2 54 3 13 31 7 8 26
Sorted array
2 3 7 8 12 13 25 26 31 54
Hence Final array is
2 54 3 31 7 26 8 25 12 13
*/
