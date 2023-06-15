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
        if(n<3)cout<<"Invalid String"<<endl;
        if(n==3 && s=="111")cout<<s<<" is Accepted"<<endl;
        else if(n>=4 && s[0]=='1' && s[1]=='1' && s[n-2]=='1' && s[n-1]=='1')cout<<s<<" is Accepted"<<endl;
        else cout<<s<<" is Rejected"<<endl;
        
    }

    return 0;
}

//output
/*
Enter number of testcase -> 2
Enter a string consist of '0' and '1' 
1010101 is Rejected
1100010111                                                    
1100010111 is Accepted
*/
