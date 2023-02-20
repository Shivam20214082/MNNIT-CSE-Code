#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    int* x=malloc(sizeof(a)*n);
    x=a;
    for(int i=0;i<n;i++){
        printf("Enter %d element :: ",i+1);
        scanf("%d",x);
        x++;
    }
    x=a;
    printf("your entered array is :: ");
    for(int i=0;i<n;i++){
        printf("%d ",*(x++));
    }
    printf("\nreverse array is :: ");
    for(int i=0;i<n;i++){
        printf("%d ",*--x);
    }
    return 0;
}
//output
/*
Enter the size of array
5
Enter 1 element :: 12
Enter 2 element :: 23
Enter 3 element :: 34
Enter 4 element :: 45
Enter 5 element :: 56
your entered array is :: 12 23 34 45 56 
reverse array is :: 56 45 34 23 12 
*/