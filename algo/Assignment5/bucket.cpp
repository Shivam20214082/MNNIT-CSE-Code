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

void sort(vector<int> &v,int n)
{

    vector<int> b[n];

    for (int i = 0; i < v.size(); i++) {
        int bi = v[i]/100;
        b[bi].push_back(v[i]);
    }

    for (int i = 0; i < n; i++)
        sort(b[i].begin(), b[i].end());
 
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            v[index++] = b[i][j];
}

int main()
{
    int t = 9;
    int n = 1000;
    cout << "N\tA.C \tB.C\tW.C\n";
    while (t--)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x = rand()%n + 1;
            v.push_back(x);
        }
        // print(v);
        clock_t start, end;
        start = clock();
        sort(v,100);
        end = clock();
        // print(v);
        cout << n << "\t" << (double)(end - start) << "\t";


        // best case assecnding
        start = clock();
        sort(v,100);
        end = clock();
        cout << (double)(end - start) << "\t";


        // worst case desecnding
        sort(v.begin(), v.end(), greater<int>());
        start = clock();
        sort(v,100);
        end = clock();
        cout << (double)(end - start) << endl;
        n += 1000;
    }
}
//output
/*
N       A.C     B.C     W.C
1000    302     178     170
2000    521     327     356
3000    752     483     489
4000    975     670     662
5000    1393    1177    1179
6000    1984    1345    1463
7000    2361    1676    1651
8000    2769    1919    2001
9000    3054    2161    2219
*/