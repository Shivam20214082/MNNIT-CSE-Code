#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}

void job(vector<pair<int, int>> &t)
{
    sort(t.begin(), t.end(), cmp);
    // print(t);
    vector<pair<int, int>> v;
    int ans = 0;
    int index = t.size() - 1;
    // cout<<index<<endl;
    v.push_back(t[0]);
    ans++;
    int current = t[0].second;
    for (int i = 1; i < t.size(); i++)
    {
        if (t[i].first >= current)
        {
            ans++;
            current = t[i].second;
            v.push_back(t[i]);
        }
    }
    cout << "jobs no. of job can performed are ->" << ans << "\nthey are -> " << endl;
    print(v);
}

int main()
{
    vector<pair<int, int>> t;
    int n, c;
    cout << "enter the total number of activities" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << (i + 1) << "th starting and finishing time -> ";
        int x, y;
        cin >> x >> y;
        pair<int, int> p = {x, y};
        t.push_back(p);
    }
    job(t);
    return 0;
}

// output
/*
enter the total number of activities
6
enter 1th starting and finishing time -> 1 2
enter 2th starting and finishing time -> 3 4
enter 3th starting and finishing time -> 0 6
enter 4th starting and finishing time -> 5 7
enter 5th starting and finishing time -> 8 9
enter 6th starting and finishing time -> 5 9
jobs no. of job can performed are ->4
they are ->
1 2
3 4
5 7
8 9
*/