//Shivam kumar gupta 
//20214082
//CSE-D
//Insertion sort
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
    //sorting two element
    if(a[0]>a[1]){
        int temp=a[0];
        a[0]=a[1];
        a[1]=temp;
    }

    //sorting
    for(i=2;i<10;i++){
        int key =a[i];
        j=i-1;
        while(a[j]>key && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
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
35
Enter 3 element
26
Enter 4 element
86
Enter 5 element
94
Enter 6 element
2
Enter 7 element
0
Enter 8 element
8
Enter 9 element
9
Enter 10 element
111
entered array is 
24 35 26 86 94 2 0 8 9 111 
Sorted array is 
0 2 8 9 24 26 35 86 94 111 
*/

