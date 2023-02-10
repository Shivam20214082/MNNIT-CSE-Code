#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);
	vector<int> a;
	for (int i = 0; i < 3; i++) {
		int b;
		cin >> b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());

	if (a[0] == a[2] - 2) {
		cout << 0 << endl;
	}
    else if ((a[1] == a[2] - 2) || (a[0] == a[1] - 2)) {
		cout << 1 << endl;
	} 
    else {
		cout << 2 << endl;
	}
	cout << max(a[2] - a[1], a[1] - a[0]) - 1;
}