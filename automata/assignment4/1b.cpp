#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    int n, m, x, f;
    cout << "enter the number of node -> ";
    cin >> n;
    cout << "enter the initial state -> ";
    cin >> x;
    cout << "enter the final state -> ";
    cin >> f;
    int arr[n + 1][2] = {0};
    for (int i = 1; i < n + 1; i++)
    {
        int a, b;
        cout << "enter state after juming from state " << i << " by taking input 0 and 1 -> ";
        cin >> a >> b;
        arr[i][0] = a;
        arr[i][1] = b;
    }

    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "enter the string -> ";
        string s;
        cin >> s;
        int ans = x;
        queue<pair<int,int>> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0' && s[i] != '1')
            {
                cout << "invalid String" << endl;
                exit(1);
            }
            int y = s[i];
            ans = arr[ans][y-48];
            if (ans>9)
            {
                while(ans>9){
                    int j=ans%10;
                    st.push({j,i});
                    ans=ans/10;
                }
            }
            if(i==s.size()-1 && ans!=f){
                if(!st.empty()){
                    pair<int,int>p;
                    p=st.front();
                    ans=p.first;
                    i=p.second;
                    st.pop();
                }
            }
        }
        if (ans == f)
        {
            cout << "string " << s << " is Accepted" << endl;
        }
        else
        {
            cout << "string " << s << " is not Accepted" << endl;
        }
    }
}

//output
/*
enter the number of node -> 3
enter the initial state -> 1
enter the final state -> 3
enter state after juming from state 1 by taking input 0 and 1 -> 1 12 // 12 means it can jump to state 1 and 2 both
enter state after juming from state 2 by taking input 0 and 1 -> 3 0
enter state after juming from state 3 by taking input 0 and 1 -> 0 0
0 0
1 12 //here 12 means it can jump to state 1 and 2 both
3 0
0 0
enter the string -> 1110
string 1110 is Accepted
enter the string -> 0010
string 0010 is Accepted
enter the string -> 001
string 001 is not Accepted
enter the string -> 100
string 100 is not Accepted
enter the string -> 1000
string 1000 is not Accepted
*/