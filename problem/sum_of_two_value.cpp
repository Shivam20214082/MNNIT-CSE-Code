#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,int>>v;
    for(int i=0;i<n;i++){
        ll t;
        cin>>t;
        v.push_back({t,i});
    }
    sort(v.begin(),v.end());
    ll temp=0,j=n-1,i=0;
    while (j > i)
	{
		temp = v[i].first + v[j].first;
		if (temp == x)
		{
			cout << v[i].second+1 << " " << v[j].second + 1 << endl;
			return 0;
		}
		if (temp < x)
			i++;
		else
			j--;
	}
	cout << "IMPOSSIBLE" << endl;
	return 0;
    cout<<"IMPOSSIBLE"<<endl;
}