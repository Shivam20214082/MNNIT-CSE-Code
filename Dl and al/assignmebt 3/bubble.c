//Shivam kumar gupta 
//20214082
//CSE-D
#include <stdio.h>

int main()
{
    printf("Enter the element of array\n");
    int a[10],b;
    int i,j;
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
        for(j=0;j<10-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
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
12
Enter 2 element
25
Enter 3 element
36
Enter 4 element
78
Enter 5 element
94
Enter 6 element
15
Enter 7 element
24
Enter 8 element
26
Enter 9 element
5
Enter 10 element
9
entered array is 
12 25 36 78 94 15 24 26 5 9 
Sorted array is 
5 9 12 15 24 25 26 36 78 94
*/
