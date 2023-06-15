#include <bits/stdc++.h>
using namespace std;


int main() {
    cout<<"enter transition table for mealey machine"<<endl;
    cout<<"Enter total number of state ->";
    int n;
    cin>>n;
    vector<vector<char>>mm;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" state and transition state and output on taking input 'a' and 'b'"<<endl;
        vector<char>v;
        for(int j=0;j<5;j++){
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
        for(int j=0;j<5;j++){
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
        }
        for(int i=0;i<s.size();i++){
            // cout<<x<<" "<<s[i]<<" ";
            char q;
            if(s[i]=='a'){
                cout<<mm[x][2];
                q=mm[x][1];
            }
            else if(s[i]=='b'){
                cout<<mm[x][4];
                q=mm[x][3];
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
        }cout<<endl;
    }

    return 0;
}

/*
enter transition table for mealey machine
Enter total number of state ->3
Enter 1 state and transition state and output on taking input 'a' and 'b'
A A 0 B 1
Enter 2 state and transition state and output on taking input 'a' and 'b'
B B 0 C 1
Enter 3 state and transition state and output on taking input 'a' and 'b'
C A 1 C 1
Enter Initial state ->A
your transition table
A       A       0       B       1
B       B       0       C       1
C       A       1       C       1

Enter the number of string u want to check -> 3
Enter String -> ababa
01011
Enter String -> baba
1011
Enter String -> bbbb
1111
*/
