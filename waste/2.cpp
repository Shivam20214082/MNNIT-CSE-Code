#include<iostream>
#include<queue>
using namespace std;



class Solution{
    public:
    string compress(string s){
        priority_queue<char, vector<char>, greater<char>> p;
        int i=0,j=0,count=1;
        while(i<s.length()){
            p.push(s.at(i++));
        }
        
        
        string r="";
        r=r+p.top();
        p.pop();
        while(!p.empty()){
            if(p.top()==r.at(j)){
                count++;
                p.pop();
            }
            else{
                r=r+to_string(count);
                count=1;
                r=r+p.top();
                j=j+2;
                p.pop();
            }
        }
        return r;
    }
};
int main(){
    Solution s;
    cout<<s.compress("aaabbbc");
    return 0;
}

/*
class Solution {
public:
    int compress(vector<char>& chars) {
        
        string s(chars.begin(), chars.end());

        queue<char> p;
        int i=0,j=0,count=1;
        while(i<s.length()){
            p.push(s.at(i++));
        }
        
        
        string r="";
        r=r+p.front();
        p.pop();
        while(!p.empty()){
            if(p.front()==r.at(j)){
                count++;
                p.pop();
            }
            else{
                if(count!=1){
                   r=r+to_string(count);
                   count=1;
                   r=r+p.front();
                   j=j+2;
                   p.pop();
                }
                else{
                count=1;
                r=r+p.front();
                j=j+1;
                p.pop();
                }
            }
        }
        r=r+to_string(count);
        
        return r;
    }
};
*/

/*
#include<iostream>
#include<queue>
using namespace std;



class Solution{
    public:
    string compress(string s){
        queue<char> p;
        int i=0,j=0,count=1;
        while(i<s.length()){
            p.push(s.at(i++));
        }
        
        
        string r="";
        r=r+p.front();
        p.pop();
        while(!p.empty()){
            if(p.front()==r.at(j)){
                count++;
                p.pop();
            }
            else{
                r=r+to_string(count);
                count=1;
                r=r+p.front();
                j=j+2;
                p.pop();
            }
        }
        r=r+to_string(count);
        
        return r;
    }
};
int main(){
    Solution s;
    cout<<s.compress("aaabbbc");
    return 0;
}
*/