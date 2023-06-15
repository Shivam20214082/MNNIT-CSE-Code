#include <iostream>

using namespace std;

bool check(string str){
    bool ll=false;
    cout<<str<<endl;
    if(str[0]<=90 && str[0]>=65)ll=true;
    if(ll){
        for(int i=1;i<str.size();i++){
            if(str[i]<=90 && str[i]<=65)return false;
        }
    }
    else{
        for(int i=1;i<str.size()-1;i++){
            if(str[i]<=122 && str[i]<=97)continue;
            else{
                return false;
            }
        }
    }
    return true;;
    
}

int main()
{
    cout<<"Use Captail Letter for Variable and small letter for terminal and null"<<endl;
    cout<<"Enter total number of Line of grammar you are going to enter -> ";
    int t;
    cin>>t;
    int i=0;
    while(t--){
        string l,r;
        cout<<"Enter the Left Part of Grammar of "<<i+1<<" line -> ";
        cin>>l;
        if(l.size()>1)
        {
            cout<<"Invalid Grammar";
            exit(0);
        }
        else if(65>l[0] || l[0] >90){
            cout<<"Invalid Grammar";
            exit(0);
        }
        cout<<"Enter the Right Part of Grammar of "<<i+1<<" line -> ";
        i++;
        cin>>r;
        string str="";
        for(int i=0;i<r.size();i++){
            if(r[i]!='|')str+=r[i];
            if(r[i]=='|'){
               if(!check(str)){
                    cout<<"Invalid Grammar";
                    exit(0);
                } 
                str="";
            }
        }
        if(str.size()!=0){
            if(!check(str)){
                    cout<<"Invalid Grammar";
                    exit(0);
            }
        }
        
        
    }
    
    cout<<"Valid Grammar";
    return 0;
}

//output
/*
Use Captail Letter for Variable and small letter for terminal and null
Enter total number of Line of grammar you are going to enter -> 3
Enter the Left Part of Grammar of 1 line -> S
Enter the Right Part of Grammar of 1 line -> aA|bB|Cccccccc|dD
Enter the Left Part of Grammar of 2 line -> A
Enter the Right Part of Grammar of 2 line -> aaA|bB|Cc|a
Enter the Left Part of Grammar of 3 line -> B
Enter the Right Part of Grammar of 3 line -> bB|cC|d
Valid Grammar
*/

/*
Enter total number of Line of grammar you are going to enter -> 3
Enter the Left Part of Grammar of 1 line -> S
Enter the Right Part of Grammar of 1 line -> aA|bB|BB
Invalid Grammar
*/