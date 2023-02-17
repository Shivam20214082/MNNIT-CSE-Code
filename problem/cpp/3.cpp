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
    while (t--)
    {
        vector<int> v;
        for (int i = 0;
             i < n; i++)
        {
            int no = rand() % n + 1;
            v.push_back(no);
        } // for(int i=0;i<n;i++){
          // cout<<v[i]<<" ";
          // }
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
        cout << (double)(end - start) << endl;
        n += 1000;
    }
    return 0;
}