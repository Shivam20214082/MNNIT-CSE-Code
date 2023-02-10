#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a string consist of a and b "<<endl;
    cin>>s;
    if(s[0]=='a' && s[1]=='b'){
        cout<<s<<" is Accepted"<<endl;
    }
    else{
        cout<<s<<" is not Accepted"<<endl;
    }
}
//output
/*
aaba
aaba is not Accepted
*/