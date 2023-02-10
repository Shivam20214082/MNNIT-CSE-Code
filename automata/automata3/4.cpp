#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0;
    string s;
    cin >> s;
    int n = s.size();
    if (s[0]==s[n-1]  && n>=2)
    {
        cout << s << " is Accepted" << endl;
    }
    else
        cout << s << " is not Accepted" << endl;
    return 0;
}
// output
/*
11101
11101 is Accepted
*/