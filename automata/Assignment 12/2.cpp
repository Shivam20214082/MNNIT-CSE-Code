#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter the string consist of '1' and '0' only -> ";
    string s;
    cin>>s;
    int c=0;
    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(flag){
            if(s[i]=='1')c++;
            if(s[i]=='0'){
                c--;
                flag=false;
            }
        }
        else{
            if(s[i]=='1'){
                cout<<s<<" is Rejected\n";
                exit(1);
            }
            c--;
        }
    }
    if(c==0)
    cout<<s<<" is Accepted\n";
    else{
        cout<<s<<" is Rejected\n";
    }

    return 0;
}

//output
/*
Enter the string consist of '1' and '0' only -> 1100
1100 is Accepted

Enter the string consist of '1' and '0' only -> 1000
1000 is Rejected
*/