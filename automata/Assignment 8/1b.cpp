#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter a string consist of '0' and '1' ->";
    string s;
    cin>>s;
    int n=s.size();
    if(n==0)cout<<"Please Enter a String "<<endl;
    else if(n==1) cout<<s<<" is Accepted "<<endl;
    else if(n==2){
        if(s[0]=='1')cout<<s<<" is Accepted "<<endl;
        else if(s[0]=='0' && s[1]=='0')cout<<s<<" is Accepted "<<endl;
        else cout<<s<<" is Rejected "<<endl;
    }
    else{
        if(s[0]=='0' && s[n-1]=='0')cout<<s<<" is Accepted "<<endl;
        else cout<<s<<" is Rejected "<<endl;
    }

    return 0;
}

//output
/*
Enter a string consist of '0' and '1' ->000011
000011 is Rejected
*/
