#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            ll ans1=0,ans2=0;
            bool first=true;
            ll i=1;
            while(n>0){
                int x=n%10;
                if(x%2==0){
                    ans1+=(x/2)*i;
                    ans2+=(x/2)*i;
                }
                else{
                    if(first){
                        ans1+=((x/2)+1)*i;
                        ans2+=((x/2))*i;
                        first=false;
                    }
                    else{
                        ans2+=((x/2)+1)*i;
                        ans1+=((x/2))*i;
                        first=true;
                    }
                }
                i=i*10;
                n=n/10;
            }
            cout<<ans1<<" "<<ans2<<endl;
        }
    }

    return 0;     
 }