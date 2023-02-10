#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>

using namespace std;
void heapify(int arr[], int n, int i)
{
    int curr = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[curr])
        curr = l;
    if (r < n && arr[r] > arr[curr])
        curr = r;
    if (curr != i)
    {
        int temp = arr[i];
        arr[i] = arr[curr];
        arr[curr] = temp;
        heapify(arr, n, curr);
    }
}
void sort1(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int n = 100000;

    double time[10];
    int x = 0;
    cout << "n      A.c   B.C   W.C"
         << " " << endl;
    while (x++ < 10)
    {
        int arr[n];
        // cout<<"hii";
        for (int i = 0; i < n; i++)
        {
            int no = rand() % n + 1;
            arr[i] = no;
        }

        clock_t start, end;
        start = clock();
        sort1(arr, n);
        end = clock();
        time[x] = (double)(end - start);
        cout << n << " " << time[x] << " ";

        start = clock();
        sort1(arr, n);
        end = clock();
        time[x] = (double)(end - start);
        cout << time[x] << " ";

        sort(arr, arr + n, greater<int>());
        start = clock();
        sort1(arr, n);
        end = clock();
        time[x] = (double)(end - start);
        cout << time[x] << endl;

        n += 100000;
    }

    return 0;
}

/*
n      A.c   B.C   W.C
100000 2412 579 595
200000 4768 1206 1155
300000 5894 1173 1226
400000 7968 1570 1594
500000 10071 2083 2249
600000 12515 2347 3526
700000 13792 2759 4218
800000 19965 4482 4763
900000 17713 4162 3661
1000000 21375 3952 4100
*/
