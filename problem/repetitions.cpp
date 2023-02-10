#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long n=s.size();
    long long ans=1;
    long long sum=1;
    for(int i=0;i<n-1;i++){
        if(s[i+1]==s[i]){
            sum++;
        }
        else{
            sum=1;
        }
        if(sum>ans)ans=sum;
    }
    cout<<ans;
}