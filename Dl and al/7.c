#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],x=0,y=0;
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
    int d=a[9]+a[0];
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            int e=a[i]+a[j];
            if(abs(e)<=abs(d)){
                d=abs(e);
                x=a[i];
                y=a[j];
            }
        }
    }
    printf("The Two number whose sum is close to zero are %d and %d\n",x,y);
    printf("And their absolute sum is equal to %d\n",d);
}
//output//
/*

Enter elements of array
Enter 1 element of array
-54
Enter 2 element of array
-32
Enter 3 element of array
2
Enter 4 element of array
5
Enter 5 element of array
7
Enter 6 element of array
9
Enter 7 element of array
-87
Enter 8 element of array
9
Enter 9 element of array
7
Enter 10 element of array
2
Entered array
-54 -32 2 5 7 9 -87 9 7 2
Sorted array
-87 -54 -32 2 2 5 7 7 9 9
The Two number whose sum is close to zero are 2 and 2
And their absolute sum is equal to 4
*/
