#include<iostream>
#include<vector>
using namespace std;

int main(){
    freopen("cowtip.in", "r", stdin);
	freopen("cowtip.out", "w", stdout);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            even.push_back(v[i]);
        }
        else{
            odd.push_back(v[i]);
        }
    }
    int ans=0,i=0,j=0;
    while(i<even.size() && j<odd.size()){
        ans+=2;  
        i++;
        j++;      
    }
    
    if((n-ans)%3==0){
        ans+=2*(n-ans)/3;
    }
    else if((n-ans)%3==2){
        ans+=2*(n-ans)/3+1;
    }
    else if((n-ans)%3==1){
        ans+=2*((n-ans)/3-1)+1;
    }
    cout<<ans<<endl;
}
