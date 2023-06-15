#include <bits/stdc++.h>

using namespace std;

int dp[1000][1000];
int sol(vector<pair<int,int>> &v,int p,int i){
    if(i>=v.size())return 0;
    if(dp[i][p]!=-1)return dp[i][p];
    
    int ans=sol(v,p,i+1);
    if(p-v[i].first>=0)
    ans=max(ans,sol(v,p-v[i].first,i)+v[i].second);
    return dp[i][p]=ans;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cout<<"Enter the number of diffrent rod length -> ";
    int n;
    cin>>n;
    cout<<"Enter the length of big rod -> ";
    int p;
    cin>>p;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++){
        cout<<"Enter "<<i<<" rod length and its profit -> ";
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    
    cout<<"total profit is -> "<<sol(v,p,0);

    return 0;
}

//output
/*
Enter the number of diffrent rod length -> 4
Enter the length of big rod -> 6
Enter 1 rod length and its profit -> 1 6
Enter 2 rod length and its profit -> 2 8
Enter 3 rod length and its profit -> 3 19
Enter 4 rod length and its profit -> 4 38
total profit is -> 50
*/