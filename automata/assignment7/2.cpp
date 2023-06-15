#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a = 0;
    cout << "Enter an string consist of '0','1','2'and'3'" << endl;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        a += s[i] - 48;
    }
    cout << "Answer is -> " << a % 3;
    return 0;
}

// output
/*
Enter an string consist of '0','1','2'and'3'
121301
Answer is -> 2
*/