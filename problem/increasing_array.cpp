#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>v;
    long long ans=0;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            ans+=v[i]-v[i+1];
            v[i+1]=v[i];
        }
    }
    cout<<ans;

}