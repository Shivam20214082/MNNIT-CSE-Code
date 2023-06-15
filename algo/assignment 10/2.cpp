#include <bits/stdc++.h>
#define MAX 100
using namespace std;

void getallpath(int matrix[MAX][MAX], int n, int row, int col, vector<string>& ans, string cur) {
    if (row >= n or col >= n or row < 0 or col < 0 or matrix[row][col] == 0)
        return;

    if (row == n - 1 and col == n - 1) {
        ans.push_back(cur);
        return;
    }

    matrix[row][col] = 0;
    getallpath(matrix, n, row - 1, col, ans, cur + "U-> ");
    getallpath(matrix, n, row, col + 1, ans, cur + "R-> ");
    getallpath(matrix, n, row, col - 1, ans, cur + "L-> ");
    getallpath(matrix, n, row + 1, col, ans, cur + "D-> ");
    matrix[row][col] = 1;

    return;
}

vector<string> findPath(int matrix[MAX][MAX], int n) {
    vector<string> ans;
    getallpath(matrix, n, 0, 0, ans, "");
    return ans;
}

int main() {
    int n;
    cout << "Enter the dimension of the matrix: ";
    cin >> n;

    int m[MAX][MAX];

    cout << "Enter the matrix values (0 or 1):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    vector<string> ans = findPath(m, n);

    if (ans.empty()) {
        cout << "No path found\n";
    } else {
        cout << "Paths:\n";
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}

//output
/*
Enter the dimension of the matrix: 5
Enter the matrix values (0 or 1):
1 0 0 0 0
1 1 1 1 1
1 1 1 0 1
0 0 0 0 1
0 0 0 0 1
Paths:
D-> R-> R-> R-> R-> D-> D-> D-> 
D-> R-> D-> R-> U->
R-> R-> D-> D-> D-> 
D-> D-> R-> U-> R-> 
R-> R-> D-> D-> D-> 
D-> D-> R-> R-> U->
R-> R-> D-> D-> D->
*/