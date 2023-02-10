#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string consist of a and b" << endl;
    cin >> s;
    int n = s.size();
    if (s[0] != 'a' || s[1] != 'b')
    {
        cout << s << " is not Accepted" << endl;
        exit(2);
    }
    if (s[3] = 'a')
    {
        for (int i = 4; i < n; i++)
        {
            if (s[i] == 'b')
            {
                cout << s << " is not Accepted" << endl;
                exit(3);
            }
        }
    }
    else
    {
        for (int i = 4; i < n; i++)
        {
            if (s[i] == 'a')
            {
                cout << s << " is not Accepted" << endl;
                exit(4);
            }
        }
    }
    cout << s << " is accepted" << endl;
}
