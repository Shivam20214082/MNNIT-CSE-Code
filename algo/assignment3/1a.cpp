#include <bits/stdc++.h>
#include <ctime>
using namespace std;
typedef long long ll;

void print(vector<ll>arr, ll n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shell(vector<ll> &arr, ll n)
{
    ll i = n / 2;
    while (i)
    {
        for (ll j = i ; j < n; j++)
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

int main()
{
    int x = 10;

    ll n = 1000;
        cout<<"n   A.C   B.C   W.C  "<<endl;
    while (x > 0)
    {
        vector<ll>arr;
        double time[3];
        for (int i = 0; i < n; i++)
        {
            int no = rand() % n + 1;
            arr.push_back(no);
        }
        clock_t start, end;

        // shell sort
        //average case
        start = clock();
        shell(arr, n);
        end = clock();
        time[0] = (double)(end - start);

        //best case
        start = clock();
        shell(arr, n);
        end = clock();
        time[1] = (double)(end - start);

        //worst case
        reverse(arr.begin(),arr.end());
        start = clock();
        shell(arr, n);
        end = clock();
        time[2] = (double)(end - start);


        cout<<n<<" ";
        for(int i=0;i<3;i++){
            cout<<time[i]<<" ";
        }cout<<endl;
        n+=1000;
        x--;
    }
}

//output
/*
n   B.S   S.S   I.S   H.S   Shell.S
n   A.C   B.C   W.C  
1000 238 88 145 
2000 550 198 311 
3000 758 244 367 
4000 1143 324 489 
5000 1447 620 898 
6000 1780 531 788 
7000 1978 625 908 
8000 2417 721 1082 
9000 2644 1014 1336 
10000 2963 980 1527  
*/


