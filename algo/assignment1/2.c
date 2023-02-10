#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionsort(long int arr[], long int n)
{
    long int i, j, min;

    for (i = 0; i < n - 1; i++)
    {

        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    long int time[5];
    long int n = 10;
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
        start = clock();
        insertionsort(arr, n);
        end = clock();
        time[t] = (double)(end - start);
        printf("%li\t\t%li\n", n, time[t]);
        n = n * 10;
    }
    return 0;
}

// output
/*
n               time

10              4
100             26
1000            1829
10000           166450
100000          12303098

*/