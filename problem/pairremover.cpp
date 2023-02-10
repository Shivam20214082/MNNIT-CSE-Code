#include<iostream>
#include<stack>
using namespace std;
class Solution {
  public:
    string removePair(string str) {
        // code here
        cout<<str.size()<<endl;
        stack<char>s;
        for(int i=0;i<str.size();i++){
            if(!s.empty()){
                if(s.top()==str[i]){
                    s.pop();
                }
                else{
                    s.push(str[i]);
                }
            }
            else{
                // cout<<str[i]<<endl;
                s.push(str[i]);
            }
        }
        string ans="";
        while(!s.empty()){
            // cout<<s.top()<<endl;
            ans=s.top()+ans;
            s.pop();
        }
        if(ans==""){
            return "-1";
        }
        else {
            return ans;
        }
    }
};
int main(){
    string s="aaabbcdd";
    Solution sl;
    cout<<sl.removePair(s);
}