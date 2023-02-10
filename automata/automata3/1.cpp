#include<iostream>
using namespace std;
int main(){
    int x=0,y=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            y++;
        }
        else if(s[i]=='0'){
            x++;
        }
        else{
            cout<<"INVALID STRING"<<endl;
        }
    }
    if(x%2==0 && y%3==0){
        cout<<s<<" is Accepted"<<endl;
    }
    else {
        cout<<s<<" is not Accepted"<<endl;
    }
    return 0;
}
//output
/*
110010101
110010101 is not Accepted
*/