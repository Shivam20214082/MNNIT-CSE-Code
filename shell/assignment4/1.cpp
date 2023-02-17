#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    // Your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        if (n == 1)
        {
            cout << "first" << endl;
            break;
        }
        if (arr[0] == 1)
        {
            int x = 0;
            while (x < n && arr[x] == 1)
            {
                x++;
            }
            if (x != n)
            {
                if (x % 2 == 0)
                {
                    cout << "first" << endl;
                    break;
                }
                else
                {
                    cout << "second" << endl;
                }
            }
            else
            {
                if (x % 2 == 0)
                {
                    cout << "second" << endl;
                    break;
                }
                else
                {
                    cout << "first" << endl;
                }
            }
        }
        else
        {
            cout << "first" << endl;
        }
    }
    return 0;
}