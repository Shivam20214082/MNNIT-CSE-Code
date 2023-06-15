#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter a string consist of 'a' and 'b' ->";
    string s;
    cin>>s;
    int n=s.size();
    if(n<3)cout<<"Invalid String"<<endl;
    else{
        if(s[n-3]=='a' && s[n-2]=='b' && s[n-1]=='b')cout<<"String Accepted"<<endl;
        else cout<<"String Rejected"<<endl;
    }

    return 0;
}

//output
/*
Enter a string consist of 'a' and 'b' ->ababbabab
String Rejected
*/
