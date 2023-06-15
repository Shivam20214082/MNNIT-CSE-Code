#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter number of testcase -> ";
    int t;
    cin>>t;
    cout<<"Enter a string consist of '0' and '1' "<<endl;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if(n<2)cout<<"Invalid String"<<endl;
        if(s[n-2]!=s[n-1])cout<<s<<" is Accepted"<<endl;
        else cout<<s<<" is Rejected"<<endl;
        
    }

    return 0;
}

//output
/*
Enter number of testcase -> 2
Enter a string consist of '0' and '1' 
1101
1101 is Accepted
11011
11011 is Rejected
*/
