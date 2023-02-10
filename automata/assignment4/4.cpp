#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string consist of a and b"<<endl;
    cin>>s;
    int n=s.size();
    if(n==1){
        cout<<s<<" is not Accepted"<<endl;
        exit(2);
    }
    for(int i=0;i<n;i++){
        if(s[i]=='a' && i!=n-1){
            cout<<s<<" is not Accepted"<<endl;
            exit(1);
        }
    }
    cout<<s<<" is accepted"<<endl;
}
