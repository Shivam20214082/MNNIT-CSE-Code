#include <bits/stdc++.h>

using namespace std;

int dp[1000];
int sol(vector<int> &v,int p){
    if(p==0)return 0;
    if(dp[p]!=-1)return dp[p];
    
    int ans=INT_MAX;
    for(int i:v){
        if(p-i>=0)
        ans=min(ans,sol(v,p-i)+1);
    }
    return dp[p]=ans;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cout<<"Enter the number coin -> ";
    int n;
    cin>>n;
    cout<<"Enter the Total money -> ";
    int p;
    cin>>p;

    vector<int>v;
    cout<<"Enter all coins -> ";
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    cout<<"total number of coin required is -> "<<sol(v,p);

    return 0;
}

//output
/*
Enter the number coin -> 3
Enter the Total money -> 11
Enter all coins -> 1 2 5
total number of coin required is -> 3
*/