#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	freopen("sleepy.in", "r", stdin);
	freopen("sleepy.out", "w", stdout);
    int N;
    cin>>N;
	vector<int> a;
	for (int i = 0; i < N; i++) {
		int b;
		cin >> b;
		a.push_back(b);
	}
    int c=1;
    for(int i=N-1;i>0;i--){
        if(a[i]>a[i-1]){
            c++;
        }
        else{
            break;
        }
    }
    cout<<N-c;
}