#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a string consist of a and b "<<endl;
    cin>>s;
    if(s[0]=='b' && s[1]=='a'){
        cout<<s<<" is Accepted"<<endl;
    }
    else{
        cout<<s<<" is not Accepted"<<endl;
    }
}
//output
/*
bababa
bababa is Accepted
*/