#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter an string consist of 'a' and 'b'" << endl;
    cin >> s;
    if (s.size() < 2)
        cout << "Enter valid string" << endl;
    else if (s[s.size() - 2] == 'a')
    {
        if (s[s.size() - 1] == 'a')
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}

// output
/*
Enter an string consist of 'a' and 'b'
ababab
1
*/