#include<iostream>
#include<queue>

using namespace std;
int main(){
    int arr[]={67,2,9,4,5,6,34,1,68,69,70,71};
    priority_queue<int,vector<int>,greater<int>> p;
    int m=arr[0],c=0,d=-1;
    int min=0,count=c;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        p.push(arr[i]);
    }
    cout<<p.top()<<endl;
    m=p.top();
    d=p.top();
    c++;
    p.pop();
    while(!p.empty()){
        if(d!=p.top()-1){
            if(c>count){
                min=m;
                count=c;
            }
            m=p.top();
            c=0;
        }
        d=p.top();
        p.pop();
        c++;
    }
    if(c>count){
        min=m;
        count=c;
    }
    cout<<"maximum length-> "<<count<<endl;
    cout<<"Subarray is -> ";
    for(int i=min;i<min+count;i++){
        cout<<i<<" ";
    }cout<<endl;
}