#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>

using namespace std;
class Solution {
public:
    static int findLeastNumOfUniqueInts(vector<int>& arr, int k) {


    unordered_map<int,int> M;
    for(int it:arr){
        M[it]++;
    }    
    multimap<int, int> MM;
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }
 
    
    for (auto& it : MM) {
        if(k-it.second>=0){
            k=k-it.second;
            multimap<int,int>::iterator i;
            i=MM.find(it.first);  
            MM.erase (i);   
        }
        else{
            return MM.size();
        }
    }
    return MM.size();
    }
};

int main(){
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    for(int i=0;i<size;i++){
        v.push_back(arr[i]);
    }
    Solution s;
    s.findLeastNumOfUniqueInts(v, 3);
}