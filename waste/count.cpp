#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,4,3,5,5,4,7,8,1,2};
    unordered_map<int,int> m;
    int x=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }

    for(auto i:m){
        cout<<" key-> "<<i.first<<" frequency-> "<<i.second<<endl;
    }
}