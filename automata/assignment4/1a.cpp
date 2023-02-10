#include<iostream>
using namespace std;

int main(){
    int n,m,x,y;
    cout<<"enter the number of node -> ";
    cin>>n;
    cout<<"enter the initial state -> ";
    cin>>x;
    cout<<"enter the final state -> ";
    cin>>y;
    int arr[n+1][2]={0};
    for(int i=1;i<n+1;i++){
        int a,b;
        cout<<"enter state after juming from state "<<i<<" by taking input 0 and 1 -> ";
        cin>>a>>b;
        arr[i][0]=a;
        arr[i][1]=b;
    }
    
    for(int i=0;i<n+1;i++){
        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    }
    for(int j=0;j<5;j++){
    cout<<"enter the string -> ";
    string s;
    cin>>s;
    int ans=x;
    for(int i=0;i<s.size();i++){
        if(s[i]!='0' && s[i]!='1'){
            cout<<"invalid String"<<endl;
            exit(1);
        }
        int y=s[i];
        ans=arr[ans][y-48];
        
    }
    if(ans==y){
        cout<<"string "<<s<<" is Accepted"<<endl;
    }
    else{
        cout<<"string "<<s<<" is not Accepted"<<endl;
    }
    }

}