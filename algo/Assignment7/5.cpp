#include <bits/stdc++.h>

using namespace std;

int dp[1000][1000];
int sol(vector<pair<int,int>> &v,int p,int i){
    if(i>=v.size())return 0;
    if(dp[i][p]!=-1)return dp[i][p];
    int ans=sol(v,p,i+1);
    if(p-v[i].first>=0)
    ans=max(ans,sol(v,p-v[i].first,i+1)+v[i].second);
    return dp[i][p]=ans;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cout<<"Enter the number of item -> ";
    int n;
    cin>>n;
    cout<<"Enter Capicty of Knapsack -> ";
    int p;
    cin>>p;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++){
        cout<<"Enter "<<i<<" weight and its value -> ";
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    
    cout<<sol(v,p,0);

    return 0;
}

//output
/*
Enter the number of item -> 3
Enter Capicty of Knapsack -> 4
Enter 1 weight and its value -> 2 4
Enter 2 weight and its value -> 2 4
Enter 3 weight and its value -> 3 7
8
*/