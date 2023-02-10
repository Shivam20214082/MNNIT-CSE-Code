#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string consist of a,b and c" << endl;
    cin >> s;
    int n = s.size();
    if (s == "ab" || s == "abc")
    {
        cout << s << " is Accepted" << endl;
    }
    else
    {
        cout << s << " is not accepted" << endl;
    }
}
