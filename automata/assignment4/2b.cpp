#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string consist of a and b"<<endl;
    cin>>s;
    int n=s.size();
    if(s[n-2]=='a' && s[n-1]=='b'){
        cout<<s<<" is accepted"<<endl;
    }
    else{
        cout<<s<<" is not accepted"<<endl;
    }
}