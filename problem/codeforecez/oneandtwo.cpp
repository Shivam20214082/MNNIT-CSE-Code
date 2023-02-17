#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    ll t;
    cin>>t;
    while(t--) {
        ll n,b, one = 0 , two = 0;
        cin>>n;
        vector < ll > v;
        for(ll i = 0 ; i < n ; i++) {
            cin>>b;
            if(b == 1) 
                one++;
            else {
                two++;
                v.push_back(i+1);
            }
        }
        if(two&1) {
            cout<<-1;
        }
        else {
            if(two == 0) {
                cout<<1;
            }
            else {
                ll si = v.size()/2;
                si--;
                cout<<v[si];
            }
        }
        cout<<endl;
    }

    return 0;     
 }