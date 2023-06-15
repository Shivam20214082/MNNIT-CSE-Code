#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter number of testcase -> ";
    int x;
    cin>>x;
    while(x--){
        string s;
        cout<<"Enter a String consist of 'a' and 'b' -> ";
        cin>>s;
        int l=0,h=s.size()-1;
        if(s.size()<4)cout<<"Enter a Valid String"<<endl;
        else{
            int c=0,r=0;
            bool h=true;
            int i=0;
            while(s[i]=='a'){
                i++;
                c++;
            }
            for(i;i<s.size();i++){
                if(s[i]!='b'){
                    cout<<s<<" is not Accpeted."<<endl;
                    h=false;
                    break;
                }
                else{
                    r++;
                }
            }
            if(h && r==3*c)cout<<s<<" is Accpeted."<<endl;
            else cout<<s<<" is not Accpeted."<<endl;
        }
    }
}
//output
/*
Enter number of testcase -> 2
Enter a String consist of 'a' and 'b' -> abbb
abbb is Accpeted.
Enter a String consist of 'a' and 'b' -> abbbb
abbbb is not Accpeted.
*/