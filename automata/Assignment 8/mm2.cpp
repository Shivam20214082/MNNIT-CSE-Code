#include <bits/stdc++.h>
using namespace std;


int main() {
    cout<<"enter transition table for moore machine"<<endl;
    cout<<"Enter total number of state ->";
    int n;
    cin>>n;
    vector<vector<char>>mm;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" state and transition state on taking input 'a' and 'b' and output on that state"<<endl;
        vector<char>v;
        for(int j=0;j<4;j++){
            char c;
            cin>>c;
            v.push_back(c);
        }
        mm.push_back(v);
    }
    char intial_state;
    cout<<"Enter Initial state ->";
    cin>>intial_state;
    cout<<"your transition table"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cout<<mm[i][j]<<"\t";
        }cout<<endl;
    }
    cout<<endl<<"Enter the number of string u want to check -> ";
    int t;
    cin>>t;
    while(t--){
        string s;
        cout<<"Enter String -> ";
        cin>>s;
        int x=0;
        for(int k=0;k<n;k++){
            if(mm[k][0]==intial_state){
                x=k;
            }
        };
        for(int i=0;i<s.size();i++){
            cout<<mm[x][3];
            char q;
            if(s[i]=='a'){
                q=mm[x][1];
            }
            else if(s[i]=='b'){
                q=mm[x][2];
            }
            else{
                cout<<endl<<"Invalid Input"<<endl;
                exit(0);
            }
            
            for(int k=0;k<n;k++){
                if(mm[k][0]==q){
                    x=k;
                }
            }
        }
        cout<<mm[x][3];
        cout<<endl;
    }

    return 0;
}

/*
enter transition table for moore machine
Enter total number of state ->3
Enter 1 state and transition state on taking input 'a' and 'b' and output on that state
A B C 1
Enter 2 state and transition state on taking input 'a' and 'b' and output on that state
B B A 2
Enter 3 state and transition state on taking input 'a' and 'b' and output on that state
C C B 3
Enter Initial state ->A
your transition table
A       B       C       1
B       B       A       2
C       C       B       3

Enter the number of string u want to check -> 4
Enter String -> abab
12121
Enter String -> baba
13322
Enter String -> ababa
121212
Enter String -> aaa
1222
*/
