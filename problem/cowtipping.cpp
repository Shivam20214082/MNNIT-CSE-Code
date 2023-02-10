#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("cowtip.in", "r", stdin);
	freopen("cowtip.out", "w", stdout);
    int n;
    cin >> n;
    vector<vector<char>> v;
    for (int i = 0; i < n; i++)
    {
        vector<char> v1;
        for (int j = 0; j < n; j++)
        {
            char a;
            cin >> a;
            v1.push_back(a);
        }
        v.push_back(v1);
    }
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (v[i][j] == '1')
            {
                for (int i = 0; i < n; i++)
                {

                    for (int j = 0; j < n; j++)
                    {
                        if (v[i][j] == '1')
                        {
                            v[i][j] = '0';
                        }
                        else
                        {
                            v[i][j] = '1';
                        }
                    }
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
}