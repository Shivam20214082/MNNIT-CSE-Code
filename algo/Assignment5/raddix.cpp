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

void rsort(vector<int> &v,int x){
    
}

void sort(vector<int> &v)
{
    //finding largest value
    int largest =v[0];
    for(int i=0;i<v.size();i++){
        if(largest<v[i]){
            largest=v[i];
        }
    }
    //finding the length of the largest number
    int l=0;
    while(largest>0){
        l++;
        l/=10;
    }

    for(int i=0;i<l;i++){
        rsort(v,i+1);
    }
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
        clock_t start, end;
        start = clock();
        sort(v,25);
        end = clock();
        cout << n << "\t" << (double)(end - start) << "\t";


        // best case assecnding
        start = clock();
        sort(v,25);
        end = clock();
        cout << (double)(end - start) << "\t";


        // worst case desecnding
        sort(v.begin(), v.end(), greater<int>());
        start = clock();
        sort(v,25);
        end = clock();
        cout << (double)(end - start) << endl;
        n += 1000;
    }
}
//output
/*
N       A.C     B.C     W.C
1000    44      37      35
2000    74      67      73
3000    106     104     106
4000    142     135     135
5000    154     106     119
6000    166     164     208
7000    249     242     158
8000    246     259     219
9000    212     190     293
10000   213     211     328
*/