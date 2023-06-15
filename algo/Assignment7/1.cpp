#include <bits/stdc++.h>
using namespace std;

int matrix_chain_order(vector<int> p) {
    int n = p.size() - 1;
    vector<vector<int>> m(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        m[i][i] = 0;
    }
    for (int L = 2; L <= n; L++) {
        for (int i = 0; i <= n-L; i++) {
            int j = i+L-1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1];
                m[i][j] = min(m[i][j], q);
            }
        }
    }
    return m[0][n-1];
}

int main() {
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    vector<int> p(n+1);
    cout << "Enter the dimensions of the matrices: ";
    for (int i = 0; i <= n; i++) {
        cin >> p[i];
    }
    int result = matrix_chain_order(p);
    cout << "Minimum number of scalar multiplications: " << result << endl;
    return 0;
}

//output
/*
Enter the number of matrices: 4
Enter the dimensions of the matrices: 40 20 30 10 30
Minimum number of scalar multiplications: 26000
*/
