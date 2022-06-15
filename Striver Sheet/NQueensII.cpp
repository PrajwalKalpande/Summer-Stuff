#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
class Solution
{
public:
    vector<int> diag1, diag2, cols;
    int solve(int n, int i, int j)
    {
        if (i == n)
            return 1;
        int count = 0;
        for (int y = 0; y < n; y++)
        {
            if (!cols[y] && !diag1[i + y] && !diag2[i - y + n - 1])
            {
                cols[y] = 1;
                diag1[i + y] = 1;
                diag2[i - y + n - 1] = 1;
                count += solve(n, i + 1, y);
                cols[y] = 0;
                diag1[i + y] = 0;
                diag2[i - y + n - 1] = 0;
            }
        }
        return count;
    }
    int totalNQueens(int n)
    {
        diag1.resize(2 * n - 1, 0);
        diag2.resize(2 * n - 1, 0);
        cols.resize(n, 0);
        return solve(n, 0, 0);
    }
};
