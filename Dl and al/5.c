#include<stdio.h>
int main(){
    int n;
    printf("Enter order of matrix\n");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("Enter First matrix element\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter %d row and %d coloum element of matrix\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Second matrix element\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter %d row and %d coloum element of matrix\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("First matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Addition of two matrix\n");
    printf("Second matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]+a[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction of two matrix\n");
    printf("Second matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    printf("matriplication of two matrix\n");
    printf("Second matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int c=0;
            for(int k=0;k<n;k++){
                c=c+a[i][k]*b[k][j];
            }
            printf("%d ",c);
        }
        printf("\n");
    }
    printf("Transpose of First matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    printf("Transpose of Second matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[j][i]);
        }
        printf("\n");
    }


}
//output//
/*

Enter order of matrix
3
Enter First matrix element
Enter 1 row and 1 coloum element of matrix
1
Enter 1 row and 2 coloum element of matrix
2
Enter 1 row and 3 coloum element of matrix
3
Enter 2 row and 1 coloum element of matrix
4
Enter 2 row and 2 coloum element of matrix
5
Enter 2 row and 3 coloum element of matrix
6
Enter 3 row and 1 coloum element of matrix
7
Enter 3 row and 2 coloum element of matrix
8
Enter 3 row and 3 coloum element of matrix
9
Enter Second matrix element
Enter 1 row and 1 coloum element of matrix
3
Enter 1 row and 2 coloum element of matrix
2
Enter 1 row and 3 coloum element of matrix
1
Enter 2 row and 1 coloum element of matrix
6
Enter 2 row and 2 coloum element of matrix
5
Enter 2 row and 3 coloum element of matrix
4
Enter 3 row and 1 coloum element of matrix
9
Enter 3 row and 2 coloum element of matrix
8
Enter 3 row and 3 coloum element of matrix
7
First matrix is :
1 2 3
4 5 6
7 8 9
Second matrix is :
3 2 1
6 5 4
9 8 7
Addition of two matrix
Second matrix is :
4 4 4
10 10 10
16 16 16
Subtraction of two matrix
Second matrix is :
-2 0 2
-2 0 2
-2 0 2
matriplication of two matrix
Second matrix is :
42 36 30
96 81 66
150 126 102
Transpose of First matrix is :
1 4 7
2 5 8
3 6 9
Transpose of Second matrix is :
3 6 9
2 5 8
1 4 7
*/
