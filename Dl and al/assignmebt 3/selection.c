//Shivam kumar gupta 
//20214082
//CSE-D
//Selection sort
#include <stdio.h>

int main()
{
    printf("Enter the element of array\n");
    int a[10],b,i,j;
    for(i=0;i<10;i++){
        printf("Enter %d element\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("entered array is \n");
    
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    //sorting
    for(i=0;i<10;i++){
        int b=a[i];
        int c;
        for(j=i+1;j<10;j++){
            if(b>a[j]){
                b=a[j];
                c=j;
            }
        }
        a[c]=a[i];
        a[i]=b;
    }
    //print array
    printf("\nSorted array is \n");
    
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
//output
/*
Enter the element of array
Enter 1 element
24
Enter 2 element
36
Enter 3 element
9
Enter 4 element
8
Enter 5 element
2
Enter 6 element
0
Enter 7 element
45
Enter 8 element
67
Enter 9 element
91
Enter 10 element
38
entered array is 
24 36 9 8 2 0 45 67 91 38 
Sorted array is 
0 2 8 9 24 36 38 45 67 91
*/
