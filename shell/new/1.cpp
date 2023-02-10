#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int t;
    cin>>t;
    int n[t],l[t],s[t];
    for(int i=0;i<t;i++){
        cin>>n[i];
        cin>>l[i];
        cin>>s[i];
    }
    for(int i=0;i<t;i++){
        int sum=0,x=1;
        for(int j=1;j<=l[i];j++){
            sum+=j;
        }
        if(sum==s[i]){
            cout<<"YES"<<endl;
            break;
        }
        else if(sum>s[i]){
            cout<<"NO"<<endl;
            break;
        }
        for(int j=l[i]+1;j<=n[i];j++){
            if(sum+j==s[i]){
                cout<<"YES"<<endl;
                break;
            }
            else if(sum+j<s[i]){
                sum+=j;
            }
            else if(sum+j>s[i]){
                int d=(sum+j)-s[i];
                if(d>=x && d<j){
                    cout<<"YES"<<endl;
                    break;
                }
                else{
                    sum-=x++;
                    j--;
                }
            }
            if(j==n[i]+1){
                cout<<"NO";
            }
        }
    }

    return 0;
}
