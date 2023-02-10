#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a')
            c++;
    }
    if(c<=3){
        cout<<s<<" is Accepted"<<endl;
    }
    else{
        cout<<s<<" is not Accepted"<<endl;
    }
}
//output
/*
aaabbba
aaabbba is not Accepted
*/