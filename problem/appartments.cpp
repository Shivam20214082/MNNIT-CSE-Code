#include<bits/stdc++.h>
using  namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long>a(n);
    vector<long long>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int ans=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0,match=0;
    while(i<n){
        while(j<m && b[j]<a[i]-k)
        j++;
        if(abs(b[j]-a[i])<=k){
            match++;
            i++;
            j++;
        }
        else i++;
    }
    cout<<match;

}