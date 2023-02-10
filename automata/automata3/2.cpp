#include<iostream>
using namespace std;
int main(){
    int x=0,y=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-2;i++){
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0'){
            cout<<s<<" is not Accepted"<<endl;
            exit(1);
        }
    }
    cout<<s<<" is Accepted"<<endl;
    return 0;
}
//output
/*
110100101
110100101 is not Accepted
*/