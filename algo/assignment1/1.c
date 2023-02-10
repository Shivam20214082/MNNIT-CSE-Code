#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionsort(long int arr[], long int n)
{
    for (long int i = 0; i < n-1; i++)
    {
        long int key=arr[i+1];
        long int j=i;
        while(j>0 && arr[j]>key){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=key;
    }
}
int main()
{
    long int time[5];
    long int n = 100;
    printf("n\t\ttime\n\n");
    for (int t = 0; t < 5; t++)
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
        n=n*10;
    }
    return 0;
}

//output
/*
n               time

100             9
1000            177
10000           6875
100000          169995
1000000         5691631
*/