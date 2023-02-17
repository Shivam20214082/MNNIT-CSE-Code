#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(vector<ll> &v,ll x){
    for(ll i=0;i<v.size();i++){
        if(v[i]%x!=0){
            return false;
        }
    }
    return true;
}
int main()
{   
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        ll ans=1;
        ll min=INT_MAX;
        for(ll i=0;i<n;i++){
            ll y;
            cin>>y;
            if(y<min){
                min=y;
            }
            v.push_back(y);
        }
        ll arr[min+1];
        for(ll i=0;i<=min;i++){
            arr[i]=1;
        }
        for(ll i=2;i<=min;i++){
            if(arr[i]==1){
                if(check(v,i)){
                    ans=i;
                }
                else{
                    for(ll j=i;j<=min;j++){
                        if(arr[j]%i==0){
                            arr[j]=0;
                        }
                    }
                }
                
            }
        }
        cout<<ans<<endl;
    }

    return 0;     
 }