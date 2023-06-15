#include <iostream>

using namespace std;

int main()
{
    int t;
    cout<<"Enter the number of testcase -> ";
    cin>>t;
    cout<<"Note -> String consist of only '0' and '1'"<<endl;
    int i=1;
    while(t--){
        string s;
        cout<<"Enter "<<i++<<" string -> ";
        cin>>s;
        int n=s.size();
        bool a=false;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(s[i+1]=='1'){
                    cout<<s<<" is Accepted"<<endl;
                    a=true;
                    break;
                }
                else if(s[i+1]=='0'){
                    a=false;
                    break;
                }
            }
        }
        if(!a)
        cout<<s<<" is Rejected"<<endl;
    }

    return 0;
}
//output
/*
Enter the number of testcase -> 4
Note -> String consist of only '0' and '1'
Enter 1 string -> 0
0 is Rejected
Enter 2 string -> 01
01 is Accepted
Enter 3 string -> 1011
1011 is Accepted
Enter 4 string -> 001011
001011 is Rejected
*/