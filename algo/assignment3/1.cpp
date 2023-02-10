#include <bits/stdc++.h>
#include <ctime>
using namespace std;
typedef long long ll;

void print(ll arr[], ll n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
    {
        ll c = 0;
        for (ll j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                c++;
            }
        }
        if (c == 0)
        {
            break;
        }
    }
}
void insertion(ll arr[], ll n)
{
    for (ll i = 1; i < n; i++)
    {
        ll key = arr[i];
        ll j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void selection(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
    {
        ll s = i;
        for (ll j = i + 1; j < n; j++)
        {
            if (arr[s] > arr[j])
            {
                s = j;
            }
        }
        swap(arr[i], arr[s]);
    }
}
void shell(ll arr[], ll n)
{
    ll i = n / 2;
    while (i)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ll key = arr[j];
            ll k = j - i;
            while (k >= 0 && arr[k] > key)
            {
                arr[k + i] = arr[k];
                k = k - i;
            }
            arr[k + i] = key;
        }

        i = i / 2;
    }
}

void heapify(ll arr[], ll n, ll i)
{
    ll curr = i;
    ll lc = 2 * i + 1;
    ll rc = 2 * i + 2;
    if (lc < n && arr[lc] > arr[curr])
    {
        curr = lc;
    }
    if (rc < n && arr[rc] > arr[curr])
    {
        curr = rc;
    }
    if (curr != i)
    {
        swap(arr[i], arr[curr]);
        heapify(arr, n, curr);
    }
}
void heap(ll arr[], ll n)
{
    for (ll i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (ll i = n - 1; i > 0; i--)
    {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
}

void merge(ll arr[], ll l, ll mid, ll h)
{
    vector<ll> v1;
    vector<ll> v2;
    for (ll i = l; i <= mid; i++)
    {
        v1.push_back(arr[i]);
    }
    for (ll i = mid + 1; i <= h; i++)
    {
        v2.push_back(arr[i]);
    }

    ll x = l;
    ll i = 0, j = 0;
    while (i != v1.size() && j != v2.size())
    {
        if (v1[i] <= v2[j])
        {
            arr[x++] = v1[i++];
        }
        else
        {
            arr[x++] = v2[j++];
        }
    }
    while (i != v1.size())
    {
        arr[x++] = v1[i++];
    }
    while (j != v2.size())
    {
        arr[x++] = v2[j++];
    }
}
void mergesort(ll arr[], ll l, ll h)
{
    ll mid = (l + h) / 2;
    if (l >= h)
    {
        return;
    }
    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, h);
    merge(arr, l, mid, h);
}

int main()
{
    int x = 10;

    ll n = 1000;
        cout<<"n   B.S   S.S   I.S   H.S   Shell.S"<<endl;
    while (x > 0)
    {
        ll arr[6][n];
        double time[6];
        for (int i = 0; i < n; i++)
        {
            int no = rand() % n + 1;
            arr[0][i] = no;
            arr[1][i] = no;
            arr[2][i] = no;
            arr[3][i] = no;
            arr[4][i] = no;
            arr[5][i] = no;
        }
        // print(arr[0], n);
        
        // bubble sort
        clock_t start, end;
        start = clock();
        bubble(arr[0], n);
        end = clock();
        time[0] = (double)(end - start);
        // selection sort
        start = clock();
        selection(arr[1], n);
        end = clock();
        time[1] = (double)(end - start);

        // insertion sort
        start = clock();
        insertion(arr[2], n);
        end = clock();
        time[2] = (double)(end - start);

        // merge sort
        start = clock();
        mergesort(arr[3], 0, n - 1);
        end = clock();
        time[3] = (double)(end - start);

        // heap sort
        start = clock();
        heap(arr[4], n);
        end = clock();
        time[4] = (double)(end - start);

        // shell sort
        start = clock();
        shell(arr[5], n);
        end = clock();
        time[5] = (double)(end - start);
        cout<<n<<" ";
        for(int i=0;i<6;i++){
            cout<<time[i]<<" ";
        }cout<<endl;
        n+=1000;
        x--;
    }
}

//output
/*
n   B.S   S.S   I.S   H.S   Shell.S
1000 6570 1687 1186 1958 330 166 
2000 25933 6741 4350 4110 707 434 
3000 60398 15155 9541 6778 1118 650 
4000 110069 26370 16837 8222 1569 956 
5000 175073 42149 27133 11507 2127 1151 
6000 252331 60457 39452 13139 2563 1521 
7000 346181 77887 48977 15640 3111 1784 
8000 450620 104212 67349 11987 2749 1740 
9000 568425 131996 80962 20386 4018 2243 
10000 706203 158142 106048 23916 4365 2675 
*/


