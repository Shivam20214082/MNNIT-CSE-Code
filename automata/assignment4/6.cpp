#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string consist of a and b" << endl;
    cin >> s;
    int a = 0, b = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            a++;
        }
        else if (s[i] == 'b')
        {
            b++;
        }
    }

    if (b == 2 || a >= 2)
    {
        cout << s << " is accepted" << endl;
    }
    else
    {
        cout << s << " is not accepted" << endl;
    }
}
