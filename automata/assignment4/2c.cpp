#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string consist of a and b"<<endl;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]=='a'&& s[i+1]=='b'){
            cout<<s<<" is Accepted"<<endl;
            exit(1);
        }
    }
    cout<<s<<" is not accepted"<<endl;
}
