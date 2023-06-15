#include <iostream>
using namespace std;

#define N 9

void print(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

bool isSafe(int grid[N][N], int row, int col, int num)
{

    for (int x = 0; x < N; x++)
        if (grid[row][x] == num)
            return false;

    for (int x = 0; x < N; x++)
        if (grid[x][col] == num)
            return false;

    int startRow = row - row % 3,
        startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j + startCol] == num)
                return false;
    return true;
}

bool solveSudoku(int grid[N][N], int row, int col)
{

    if (row == N - 1 && col == N)
        return true;

    if (col == N)
    {
        row++;
        col = 0;
    }

    if (grid[row][col] > 0)
        return solveSudoku(grid, row, col + 1);

    for (int num = 1; num <= N; num++)
    {

        if (isSafe(grid, row, col, num))
        {

            grid[row][col] = num;

            if (solveSudoku(grid, row, col + 1))
                return true;
        }

        grid[row][col] = 0;
    }
    return false;
}

int main()
{
    int n=9;

    int grid[N][N];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            grid[i][j] = 0;

    if (solveSudoku(grid, 0, 0))
        print(grid);
    else
        cout << "No solution exists." << endl;

    return 0;
}

//output
/*
1 2 3 4 5 6 7 8 9 
4 5 6 7 8 9 1 2 3 
7 8 9 1 2 3 4 5 6 
2 1 4 3 6 5 8 9 7 
3 6 5 8 9 7 2 1 4 
8 9 7 2 1 4 3 6 5 
5 3 1 6 4 2 9 7 8 
6 4 2 9 7 8 5 3 1 
9 7 8 5 3 1 6 4 2 
*/
