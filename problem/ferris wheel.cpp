#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,c=0;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    int low=0,high=n-1;
    while(low<=high){
        if(v[high]+v[low]<=x){
            c++;
            low++;
            high--;
        }
        else{
            c++;
            high--;
        }
    }
    cout<<c;
}