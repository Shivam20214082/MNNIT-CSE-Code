#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int i = 0, j = 0;
    if (permutation.size() == 1)
        return permutation;
    for (i = permutation.size() - 2; i >= 0; i--)
    {
        if (permutation[i] < permutation[i + 1])
        {
            break;
        }
    }
    if (i < 0)
    {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }
    else
    {
        for (j = permutation.size() - 1; j > i; j--)
        {
            if (permutation[j] > permutation[i])
            {
                break;
            }
        }
    }
    swap(permutation[i], permutation[j]);
    reverse(permutation.begin() + i + 1, permutation.end());
    return permutation;
}

int main()
{
    cout << "hii" << endl;
}