#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string s,int i,int k){
    
    if(i>1 && !is_sorted(s.begin(), s.begin() + i-1)){
        return false;
    }

    if(i>0 && (i+k)<s.size() && s[i-1]>s[i+k]){
        return false;
    }
    if(!is_sorted(s.begin()+i+k, s.end())){
        return false;
    }
    return true;
}
int main()
{   
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        // if()
        int ans=0;
        for(int i=0;i<n-k+1;i++){
            if(check(s,i,k)){
                ans++;
            }
        }
        
        cout<<ans<<endl;
    }

    return 0;     
 }