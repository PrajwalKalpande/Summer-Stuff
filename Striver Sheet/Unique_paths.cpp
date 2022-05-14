class Solution
{
public:
    int travel(int x, int y, int m, int n, vector<vector<int>> &dp)
    {
        if (x >= m || y >= n)
            return 0;
        if (x == m - 1 && y == n - 1)
            return 1;
        if (dp[x][y] != -1)
            return dp[x][y];
        dp[x][y] = (travel(x + 1, y, m, n, dp) + travel(x, y + 1, m, n, dp));
        return dp[x][y];
    }

    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return travel(0, 0, m, n, dp);
    }
};

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        if (m == 1 && n == 1)
            return 1;

        if (m < 1 || n < 1)
            return 0;

        return uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
    }
};