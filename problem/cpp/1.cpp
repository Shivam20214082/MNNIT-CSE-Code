#include <bits/stdc++.h>

using namespace std;

const int N=1e5 +10;
int dp[N];
int arr[N];

int sol(int n){
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int cost=INT_MAX;
    cost=min(cost,sol(n-1)+abs(arr[n]-arr[n-1]));
    if(n>1)
    cost=min(cost,sol(n-2)+abs(arr[n]-arr[n-2]));
     
    return dp[n]=cost;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sol(n);
    return 0;
}