#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans = "";
    bool a = false;
    cout << "Enter an string consist of '0'and '1'" << endl;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (a)
        {
            if (s[i] == '1')
            {
                ans = '0' + ans;
            }
            else
            {
                ans = '1' + ans;
            }
        }
        else
        {
            if (s[i] == '0')
            {
                ans = '0' + ans;
            }
            else
            {
                ans = '1' + ans;
                a = true;
            }
        }
    }
    cout << "2's Compliment is -> " << ans;
    return 0;
}

// output
/*
Enter an string consist of '0'and '1'
101001
2's Compliment is -> 010111
*/