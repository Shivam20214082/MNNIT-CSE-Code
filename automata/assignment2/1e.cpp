#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a')
            a++;
        else if(s[i]=='b'){
            b++;
        }
    }
    if(a==2 && b>2){
        cout<<s<<" is Accepted"<<endl;
    }
    else{
        cout<<s<<" is not Accepted"<<endl;
    }
}
//output
/*
aabbb
aabbb is Accepted
*/