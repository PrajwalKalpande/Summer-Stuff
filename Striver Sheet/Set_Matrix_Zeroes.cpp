#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<int> rows;
        vector<int> cols;
        int c = matrix[0].size(), r = matrix.size();

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matrix[i][j] == 0)
                {
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }

        for (auto x : rows)
        {
            for (int i = 0; i < c; i++)
            {
                matrix[x][i] = 0;
            }
        }
        for (auto x : cols)
        {
            for (int i = 0; i < r; i++)
            {
                matrix[i][x] = 0;
            }
        }
    }
};
