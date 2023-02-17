#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int count=0;
        while(v.size()>1){
            vector<int>::iterator it = max_element(v.begin(), v.end());
            vector<int>::iterator it2 = min_element(v.begin(), v.end());
            if(it!=v.end()-1 || it2!=v.begin()) count++;
            v.erase(it);
            v.erase(it2);
            // print(v);
        }
        arr[i]=count;
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
}