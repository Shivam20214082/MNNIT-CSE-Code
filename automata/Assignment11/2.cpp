#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int i, n_count = 0, b_count = 0;

    cout << "Enter a string consist of '0' '1' and 'c' for middle : ";
    cin >> str;
    int x=0,y=str.size()-1;
    while(x<y){
        if (str[i] != '0' && str[i] != '1') {
            cout<<str<<" is Rejected"<<endl;
            return 0;
        }
        else if(str[x]!=str[y]){
            cout<<str<<" is Rejected"<<endl;
            return 0;
        }
        else{
            x++;
            y--;
        }
    }
    if(x==y && str[x]=='c'){
        cout<<str<<" is Accepted"<<endl;
    }
    else cout<<str<<" is Rejected"<<endl;
    
    return 0;
}

//output
/*
Enter a string consist of '0' '1' and 'c' for middle : 11c11
11c11 is Accepted

Enter a string consist of '0' '1' and 'c' for middle : 11c110
11c110 is Rejected


*/