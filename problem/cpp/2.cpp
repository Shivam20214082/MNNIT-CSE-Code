class Solution {
public:
    string smallestSubsequence(string s, int k, char letter, int repetition) {
        deque<char>v;
        if(s.size()==1){
            return s;
        }
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==letter){
                count++;
            }
        }
        int x=0;
        v.push_back(s[0]);
        if(s[0]==letter){count--;x++;}
        for(int i=1;i<s.size();i++){
            if(!v.empty() && v.back()<=s[i] && v.size()<k){
                v.push_back(s[i]);
                if(s[i]==letter){count--;x++;}
            }
            else if(!v.empty() && v.back()>s[i]){
                if(v.back()==letter && (x+count)<=repetition){
                    if(v.size()<k)v.push_back(s[i]);
                    if(s[i]==letter){
                        count--;
                        x++;
                    }
                }
                else if(v.size()+s.size()-i<=k)v.push_back(s[i]);
                else{
                    if(v.back()==letter){x--;}
                    v.pop_back();
                    i--;
                }
            }
            else if(v.empty()){
                v.push_back(s[i]);
                if(v.back()==letter){count--;x++;}
            }
            else if(v.size()==k && x<repetition){
                v.pop_back();
                v.push_back(s[i]);
                if(v.back()==letter){count--;x++;}
            }
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i]);
        }
        return ans;
    }
};