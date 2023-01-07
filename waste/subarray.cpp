#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]={1,2,3,4,-5,-2,5,2,-1,-9};
    unordered_map<int,int> m;
    int sum=0,total=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        sum+=arr[i];
        m[sum]++;
    }

    for(auto i:m){
        if(i.second>1){
            total+=i.second*(i.second-1)/2;
        }
        cout<<" key-> "<<i.first<<" frequency-> "<<i.second<<endl;
    }

    cout<<"total number of subarray -> "<<total<<endl;
}