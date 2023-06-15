#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<float>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << endl;
    }
}

bool cmp(vector<float> &a, vector<float> &b)
{
    return a[2] < b[2];
}

int knapsack(vector<vector<float>> &product, int capicity)
{
    sort(product.begin(), product.end(), cmp);
    // print(product);
    int ans = 0;
    int index = product.size() - 1;
    // cout<<index<<endl;
    while (capicity)
    {
        if (capicity - product[index][0] > 0)
        {
            ans += product[index][1];
            capicity -= product[index][0];
        }
        else
        {
            ans += (capicity * product[index][1]) / product[index][0];
            capicity = 0;
        }
        index--;
    }
    return ans;
}

int main()
{
    vector<vector<float>> product;
    int n, c;
    cout << "enter the number item and capicity of bag -> ";
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << (i + 1) << "th item weight and its value -> ";
        int x, y;
        cin >> x >> y;
        vector<float> v;
        v.push_back(x);
        v.push_back(y);
        v.push_back((y / (x * 1.0)));
        product.push_back(v);
    }
    cout << "total value is -> " << knapsack(product, c) << endl;
    return 0;
}

// output
/*
enter the number item and capicity of bag -> 5 18
enter 1th item weight and its value -> 7 42
enter 2th item weight and its value -> 8 38
enter 3th item weight and its value -> 12 72
enter 4th item weight and its value -> 3 21
enter 5th item weight and its value -> 4 30
total value is -> 117
*/
