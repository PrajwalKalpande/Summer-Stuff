#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution
{
public:
    bool isValid(vector<vector<char>> &board, int i, int j, char c)
    {
        for (int row = 0; row < board.size(); row++)
        {
            if (board[row][j] == c)
                return false;
        }
        for (int col = 0; col < board[0].size(); col++)
        {
            if (board[i][col] == c)
                return false;
        }

        for (int block = 0; block < 9; block++)
        {
            if (board[3 * (i / 3) + block / 3][3 * (j / 3) + block % 3] == c)
                return false;
        }

        return true;
    }

    bool solve(vector<vector<char>> &board)
    {
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == '.')
                {

                    for (int k = 1; k < 10; k++)
                    {
                        if (isValid(board, i, j, k + '0'))
                        {
                            board[i][j] = ('0' + k);
                            if (solve(board))
                                return true;
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>> &board)
    {

        if (solve(board))
            return;
    }
};