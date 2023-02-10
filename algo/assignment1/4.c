#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionsort(long int arr[], long int n)
{
    for (long int i = 0; i < n-1; i++)
    {
        long int key=arr[i+1];
        long int j=i;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    long int time[1];
    long int n = 100;
    printf("n\t\ttime\n\n");
    for (int t = 0; t < 1; t++)
    {
        long int arr[n];
        for (long int i = 0; i < n; i++)
        {
            long int no = rand() % n + 1;
            arr[i] = no;
        }
        time_t start, end;
        start=clock();
        insertionsort(arr,n);
        end=clock();
        time[t]=(double)(end-start);
        printf("%li\t\t%li\n",n,time[t]);
        for(long int i=0;i<n;i++){
            printf("%li  ",arr[i]);
        }
        n=n*10;
    }
    return 0;
}

//output
/*
n               time

n               time

100             9
1000            187
10000           7550
100000          220867
1000000         5728562
plot './4.plt' using 1:2 with linespoints, './4.plt' using 1:3 with linespoints,'./4.plt' using 1:4 with linespoints
*/