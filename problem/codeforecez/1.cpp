#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        ll ans=1;
        bool gcd=true;
        for(ll i=0;i<n;i++){
            ll y;
            cin>>y;
            v.push_back(y);
        }
        // sort(v.begin(),v.end());
        ans =__gcd(v[0], v[1]);
        ll min=v[0];
        for(ll i=2;i<v.size();i++){
            ans = __gcd(ans, v[i]);
        }
        cout<<ans<<endl;
    }

    return 0;     
 }