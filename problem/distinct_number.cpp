#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<long long,int>m;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        m[x]++;
    }
    cout<<m.size();
}