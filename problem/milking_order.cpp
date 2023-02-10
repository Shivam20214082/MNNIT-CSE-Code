#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
void check1(int x,vector<int>a,int ans[]){
    int c=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==x){
            break;
        }
        c++;
    }
    int i=0;
    if(c!=a.size()-1){
        while(c>=0){
            ans[c]=a[i++];
            c--;
        }
        cout<<"array-> ";
        for(int i=0;i<6;i++){
        cout<<ans[i]<<" ";
        }cout<<endl;
    }
}

int main() {
	// freopen("herding.in", "r", stdin);
	// freopen("herding.out", "w", stdout);
    int total,social,fixed;
    cin>>total>>social>>fixed;
//6 3 2
//4 5 6
//5 3
//3 1

	vector<int> a;
	for (int i = 0; i < social; i++) {
		int b;
		cin >> b;
		a.push_back(b);
	}

    vector<pair<int,int>>v;
    for (int i = 0; i < fixed; i++) {
		int b,c;
		cin >> b>>c;
        pair<int,int>p={b,c};
		v.push_back(p);
	}
	sort(v.begin(), v.end(),cmp);
    cout<<"social vector ->";
    for(int i=0;i<social;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\npairs"<<endl;
    for(int i=0;i<fixed;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
	int i=0,j=0;
    int ans[total]={};
    int x=0;
    for(i;i<v.size();i++){
        ans[v[i].second-1]=v[i].first;
        check1(v[i].first,a,ans);
    }cout<<"array->  ";
    for(int i=0;i<total;i++){
        cout<<ans[i]<<" ";
    }
    for(int i=0;i<total;i++){
        if(ans[i]==0){
            cout<<"\nanswer"<< i+1;
        }
    }
}