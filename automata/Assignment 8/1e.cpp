#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter number of testcase -> ";
    int t;
    cin>>t;
    cout<<"Enter a string consist of 'a' and 'b' "<<endl;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')c++;
        }
        if(c%3==1)cout<<s<<" is Accepted"<<endl;
        else cout<<s<<" is Rejected"<<endl;
        
    }

    return 0;
}

//output
/*
Enter number of testcase -> 2
Enter a string consist of 'a' and 'b' 
abbaba is Rejected
ababbaa
ababbaa is Accepted
*/
