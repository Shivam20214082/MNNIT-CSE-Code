#include<stdio.h>
int main(){
    int a[10],b,c=0,d=9,swap=0,x=0;
    printf("Enter elements of array\n");
    for(int i=0;i<10;i++){
        printf("Enter %d element of array\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("Entered array\n");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter the no. from that u want to swap\n");
    scanf("%d",&b);
    for(int i=0;i<10;i++){
        if(a[i]<b){
            c++;
        }
        if(a[i]==b){
            x=i;
        }
    }
    int p=a[x];
    a[x]=a[c];
    a[c]=p;
    for(int i=0;i<c;i++){
        if(a[i]>b && b>a[d]){
            int x=a[d];
            a[d]=a[i];
            a[i]=x;
            d--;
            swap++;
        }
        else if(a[i]<b && b<a[d]){
            d--;  
        }
        else if(a[i]>b && b<a[d]){
            i--;
            d--;
        }
    }
    printf("Final array\n");
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Total number of swap required is %d\n",swap);

}
//output//
/*
Enter elements of array
Enter 1 element of array
32
Enter 2 element of array
21
Enter 3 element of array
38
Enter 4 element of array
97
Enter 5 element of array
14
Enter 6 element of array
16
Enter 7 element of array
24
Enter 8 element of array
37
Enter 9 element of array
73
Enter 10 element of array
9
Entered array
32 21 38 97 14 16 24 37 73 9
Enter the no. from that u want to swap
37
Final array
32 21 9 24 14 16 37 97 73 38
Total number of swap required is 2
*/
