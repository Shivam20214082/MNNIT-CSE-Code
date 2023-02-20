//Shivam kumar gupta 
//20214082
//CSE-D
//magic square
#include <stdio.h>

int main()
{
    int b;
    printf("Enter the order of magic square\n");
    scanf("%d",&b);
    int a[b][b];
    int d=b*b;
    int c=1;
    int i,j;
    for(i=0;i<b;i++){
        for(j=0;j<b;j++){
            a[i][j]=0;
        }
    }
    i=b/2,j=b-1;
    for(c=1;c<=d;){
        if(i == -1 && j==b){
            i=0;
            j=b-2;
        }
        else{
            if(j==b){
                j=0;
            }
            if(i<0){
                i=b-1;
            }
        }
        if(a[i][j]){
            i=i+1;
            j=j-2;
            continue;
        }
        else{
            a[i][j]=c++;
        }
        i--;
        j++;
    }
    printf("magic number is %d \n",b*(b*b+1)/2);
    printf("Your magic square is :\n");
    
    for(i=0;i<b;i++){
        for(j=0;j<b;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//output
/*
Enter the order of magic square
7
magic number is 175 
Your magic square is :
20 12 4 45 37 29 28 
11 3 44 36 35 27 19 
2 43 42 34 26 18 10 
49 41 33 25 17 9 1 
40 32 24 16 8 7 48 
31 23 15 14 6 47 39 
22 21 13 5 46 38 30 
*/
