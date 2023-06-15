#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the string consist of a and b"<<endl;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a')c++;
    }
    if(c<=3)cout<<s<<" is Accepted"<<endl;
    else cout<<s<<" is not Accepted"<<endl;
}