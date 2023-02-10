#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string consist of a and b"<<endl;
    cin>>s;
    if(s[0]=='a' && s[1]=='b'){
        cout<<s<<" is accepted"<<endl;
    }
    else{
        cout<<s<<" is not accepted"<<endl;
    }
}