#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(long int arr[], long int n)
{
    for (long int i = 0; i < n-1; i++)
    {
        for (long int j = i; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
        bubblesort(arr,n);
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

10              2
100             39
1000            2095
10000           311009
100000          28637639
*/