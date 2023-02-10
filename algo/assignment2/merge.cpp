#include <iostream>
#include <algorithm>
#include<vector>
#include<ctime>

using namespace std;
void print(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void merge(int arr[],int low,int mid,int high){
    vector<int>v1;
    vector<int>v2;
    for(int i=low;i<=mid;i++){
        v1.push_back(arr[i]);
    }
    for(int i=mid+1;i<=high;i++){
        v2.push_back(arr[i]);
    }
    int i=0,j=0;
    while(i!=v1.size() && j!=v2.size()){
        if(v1[i]<=v2[j]){
            arr[low++]=v1[i++];
        }
        else{
            arr[low++]=v2[j++];
        }
    }
    while(i!=v1.size()){
        arr[low++]=v1[i++];
    }
    while(j!=v2.size()){
        arr[low++]=v2[j++];
    }
}

void sort1(int arr[],int low,int high){
    int mid=(low+high)/2;
    if(low>=high){
        return;
    }
    sort1(arr,low,mid);
    // print(arr);
    sort1(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main()
{
    int n=10000;
    
    double time [10];
    int x=0;
    cout<<"n      A.c  B.C  W.C"<<" "<<endl;
    while(x++<10){
        int arr[n];
        // cout<<"hii";
        for(int i=0;i<n;i++){
            int no=rand() % n +1;
            arr[i]=no;
        }

        
        clock_t start,end;
        start=clock();
        sort1(arr,0,n);
        end=clock();
        time[x]=(double)(end-start);
        cout<<n<<" "<<time[x]<<" ";


        start=clock();
        sort1(arr,0,n);
        end=clock();
        time[x]=(double)(end-start);
        cout<<time[x]<<" ";


        sort(arr,arr+n,greater<int>());
        start=clock();
        sort1(arr,0,n);
        end=clock();
        time[x]=(double)(end-start);
        cout<<time[x]<<endl;
        n+=10000;
    }
    return 0;
}
/*
n      A.c  B.C  W.C
10000 12785 13741 14391
20000 38514 33949 34434
30000 54697 50593 51871
40000 78089 70878 66852
50000 74547 60163 57158
60000 91524 75353 81154
70000 89184 100482 88220
80000 132161 105940 97625
90000 119644 102587 104300
100000 127116 110408 111676
*/

