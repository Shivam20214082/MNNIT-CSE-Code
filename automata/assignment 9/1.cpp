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
                if(s[i+1]=='0'){
                    cout<<s<<" is Accepted"<<endl;
                    a=true;
                    break;
                }
                else if(s[i+1]=='1')i++;
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
Enter 1 string -> 1001
1001 is Accepted
Enter 2 string -> 11110
11110 is Rejected
Enter 3 string -> 001100
001100 is Accepted
Enter 4 string -> 11010
11010 is Rejected
*/