#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void rsort(vector<int> &v, int x)
{
    int m = 9;
    vector<int> f(m + 1, 0);
    // frequency table
    for (int t = 1; t <= x; t++)
    {
        for (int i = 0; i < m + 1; i++)
        {
            f[i] = 0;
        }
        int p = pow(10, t);
        int q = pow(10, t - 1);
        for (int i = 0; i < v.size(); i++)
        {
            f[(v[i] % p) / q] += 1;
        }
        // cf table
        for (int i = 1; i <= m; i++)
        {
            f[i] += f[i - 1];
        }
        // sorting
        vector<int> b(v.size() + 1, 0);
        for (int i = v.size() - 1; i >= 0; i--)
        {
            b[f[(v[i] % p) / q]--] = v[i];
        }
        for (int i = 0; i < v.size(); i++)
        {
            v[i] = b[i + 1];
        }
        // print(v);
    }
}

void sort(vector<int> &v)
{
    // finding largest value
    int largest = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (largest < v[i])
        {
            largest = v[i];
        }
    }
    // finding the length of the largest number
    int l = 0;
    while (largest > 0)
    {
        l++;
        largest /= 10;
    }
    rsort(v, l);
}

int main()
{
    int t = 10;
    int n = 1000;
    cout << "N\tA.C \tB.C\tW.C\n";
    while (t--)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x = rand() % n + 1;
            // string s=to_string(x);
            v.push_back(x);
        }
        print(v);
        clock_t start, end;
        start = clock();
        sort(v);
        // print(v);
        end = clock();
        cout << n << "\t" << (double)(end - start) << "\t";

        best case assecnding
        start = clock();
        // sort(v);
        end = clock();
        cout << (double)(end - start) << "\t";

        worst case desecnding
        sort(v.begin(), v.end(), greater<int>());
        start = clock();
        sort(v);
        end = clock();
        cout << (double)(end - start) << endl;
        n += 1000;
    }
}
// output
/*
N       A.C     B.C     W.C
1000    318     289     280
2000    571     604     563
3000    835     878     851
4000    1135    1154    1146
5000    1396    1423    1417
6000    1666    1683    1689
7000    1945    1991    1930
8000    2279    2269    2200
9000    2009    2198    2562
10000   3043    3084    3493
*/