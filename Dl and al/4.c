#include<stdio.h>
int main(){
    int a[10],b;
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
    for( int i=0;i<10;i++){
        int c=0;
        if(a[i]!=(-1)){
            for(int j=i+1;j<10;j++){
                if(a[j]==a[i]){
                    c++;
                    a[j]=-1;
                }
            }
            printf("%d occur %d times\n",a[i],c+1);
        }
    }

}
//output//
/*
Enter elements of array
Enter 1 element of array
1
Enter 2 element of array
2
Enter 3 element of array
2
Enter 4 element of array
2
Enter 5 element of array
3
Enter 6 element of array
3
Enter 7 element of array
1
Enter 8 element of array
5
Enter 9 element of array
5
Enter 10 element of array
5
Entered array
1 2 2 2 3 3 1 5 5 5
1 occur 2 times
2 occur 3 times
3 occur 2 times
5 occur 3 times
*/
