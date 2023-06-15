#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<string>>ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<"\t"<<ans[i][1]<<"\t"<<ans[i][2]<<endl;
    }
}

void printm(unordered_map<string,int>m){
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

void dfa(vector<vector<string>>v,char initial,char final){
    int t=v.size();
    unordered_map<string,int>m;
    vector<vector<string>>ans;
    m.insert({v[0][0],1});
    vector<string>v1;
    v1.push_back(v[0][0]);
    v1.push_back(v[0][1]);
    v1.push_back(v[0][2]);
    ans.push_back(v1);
    int z=pow(2,t);
    for(int i=1;i<=z;i++){
         int count=0;
        if(m.find(ans[i-1][1])==m.end()  && ans[i-1][1]!="0"){
            count++;
            m[ans[i-1][1]]++;
            unordered_map<string, int> map1,map2;
            for(int j=0;j<ans[i-1][1].size();j++){
                for(int k=0;k<t;k++){
                    if(v[k][0][0]==ans[i-1][1][j]){
                        if(v[k][1]!="0")
                        map1[v[k][1]]++;
                        if(v[k][2]!="0")
                        map2[v[k][2]]++;
                    }
                }
            }
            string a="",b="";
            for (auto x : map1){
                a+=x.first;
            }
            for (auto x : map2){
                b+=x.first;
            }
            if(a=="")a="0";
            if(b=="")b="0";
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            vector<string>v2;
            v2.push_back(ans[i-1][1]);
            v2.push_back(a);
            v2.push_back(b);
            ans.push_back(v2);
        }
        
        
        if(m.find(ans[i-1][2])==m.end() && ans[i-1][2]!="0" ){
            count++;
            m[ans[i-1][2]]++;
            unordered_map<string, int> map1,map2;
            for(int j=0;j<ans[i-1][2].size();j++){
                for(int k=0;k<t;k++){
                    if(v[k][0][0]==ans[i-1][2][j]){
                        if(v[k][1]!="0")
                        map1[v[k][1]]++;
                        if(v[k][2]!="0")
                        map2[v[k][2]]++;
                    }
                }
            }
            string a="",b="";
            for (auto x : map1){
                a+=x.first;
            }
            for (auto x : map2){
                b+=x.first;
            }
            if(a=="")a="0";
            if(b=="")b="0";
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            vector<string>v2;
            v2.push_back(ans[i-1][2]);
            v2.push_back(a);
            v2.push_back(b);
            ans.push_back(v2);
        }
        // printm(m);
        
        if(count==0){
            break;
        }
    }
        print(ans);
    
    
}



int main()
{
    vector<vector<string>>v,ans;
    char initial,final;
    cout<<"All State Should as A,B,C,D...... and 0 for No transition state\nEnter Initial State -> ";
    cin>>initial;
    cout<<"Enter Final State -> ";
    cin>>final;
    
    cout<<"Enter total no. of state -> ";
    int t;
    cin>>t;
    int count=0;
    for(int i=0;i<t;i++){
        cout<<"enter State and transition on 0 , 1 "<<endl;
        string a,x,y;
        cin>>a>>x>>y;
        vector<string>v1;
        v1.push_back(a);
        v1.push_back(x);
        v1.push_back(y);
        v.push_back(v1);
    }
        cout<<"Final DFA Transition Table is ->(0 means null state)"<<endl;
        dfa(v,initial,final);
    return 0;
}

//output
/*
All State Should as A,B,C,D...... and 0 for No transition state
Enter Initial State -> A
Enter Final State -> D
Enter total no. of state -> 4
enter State and transition on 0 , 1 
A AB A
enter State and transition on 0 , 1 
B C C
enter State and transition on 0 , 1 
C D D
enter State and transition on 0 , 1 
D 0 0
Final DFA Transition Table is ->(0 means null state)
A       AB      A
AB      ABC     AC
ABC     ABCD    ACD
AC      ABD     AD
ABCD    ABCD    ACD
ACD     ABD     AD
ABD     ABC     AC
AD      AB      A
*/


