#include <bits/stdc++.h>
using namespace std;
int parttion(vector<int> &v, int lb, int ub)
{
    int key = v[ub];
    int lo = lb - 1;
    for (int i = lb; i < ub; i++)
    {
        if (v[i] <= key)
        {
            swap(v[i], v[++lo]);
        }
    }
    swap(v[ub], v[++lo]);
    return lo;
}
void qs(vector<int> &v, int lb, int ub)
{
    if (lb < ub)
    {
        int q = parttion(v, lb, ub);
        qs(v, lb, q - 1);
        qs(v, q + 1, ub);
    }
}
int main()
{
    int t = 10;
    int n = 1000;
    cout<<"N\tA.C \tW.C\tW.C\n";
    while (t--)
    {
        vector<int> v;
        for (int i = 0;
             i < n; i++)
        {
            int no = rand() % n + 1;
            v.push_back(no);
        } 
        cout << endl;
        clock_t start, end;
        start = clock();
        qs(v, 0, n - 1);
        end = clock();
        cout << n << "\t" << (double)(end - start) << "\t";
        
        
        // worst case assecnding
        start = clock();
        qs(v, 0, n - 1);
        end = clock();
        cout << (double)(end - start) << "\t";
        
        
        // worst case desecnding
        sort(v.begin(),v.end(),greater<int>());
        start = clock();
        // for(int i=0;i<n;i++){
          // cout<<v[i]<<" ";
          // }
        qs(v, 0, n - 1);
        end = clock();
        cout << (double)(end - start) << endl;
        n += 1000;
    }
    return 0;
}

//output
/*
N       A.C     W.C     W.C

1000    212     8901    2864

2000    390     25886   10328

3000    583     72764   25423

4000    763     132926  50872

5000    1030    186293  80401

6000    1419    301760  135931

7000    1651    436925  153663

8000    1622    441835  184576

9000    2390    516518  224668

10000   2043    640058  265345
*/