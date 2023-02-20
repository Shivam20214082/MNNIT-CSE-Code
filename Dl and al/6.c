#include<stdio.h>
int main(){
    int n;
    printf("Enter order of matrix\n");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("Enter matrix element\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter %d row and %d coloum element of matrix\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("lower triangular matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("upper triangular matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=i;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
//output//
/*
Enter order of matrix
4
Enter matrix element
Enter 1 row and 1 coloum element of matrix
1
Enter 1 row and 2 coloum element of matrix
2
Enter 1 row and 3 coloum element of matrix
3
Enter 1 row and 4 coloum element of matrix
6
Enter 2 row and 1 coloum element of matrix
5
Enter 2 row and 2 coloum element of matrix
4
Enter 2 row and 3 coloum element of matrix
7
Enter 2 row and 4 coloum element of matrix
8
Enter 3 row and 1 coloum element of matrix
9
Enter 3 row and 2 coloum element of matrix
6
Enter 3 row and 3 coloum element of matrix
5
Enter 3 row and 4 coloum element of matrix
4
Enter 4 row and 1 coloum element of matrix
1
Enter 4 row and 2 coloum element of matrix
2
Enter 4 row and 3 coloum element of matrix
8
Enter 4 row and 4 coloum element of matrix
7
Entered matrix is :
1 2 3 6
5 4 7 8
9 6 5 4
1 2 8 7
lower triangular matrix is :
1
5 4
9 6 5
1 2 8 7
upper triangular matrix is :
1 2 3 6
  4 7 8
    5 4
      7
*/
