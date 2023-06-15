#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter number of testcase -> ";
    int x;
    cin>>x;
    while(x--){
        string s;
        cout<<"Enter a String consist of '0' and '1' -> ";
        cin>>s;
        int l=0,h=s.size()-1;
        if(s.size()==0)cout<<"Enter a Valid String"<<endl;
        else{
            while(l<h){
                if(s[l++]==s[h--])continue;
                else break;
            }
            if(l<h)cout<<s<<" is not a palindrome."<<endl;
            else cout<<s<<" is a Palindrome."<<endl;
        }
    }
}
//output
/*
Enter number of testcase -> 2
Enter a String consist of '0' and '1' -> 1001
1001 is a Palindrome.
Enter a String consist of '0' and '1' -> 1110
1110 is not a palindrome.
*/