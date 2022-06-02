#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
// Plain old Recursion
class Solution
{
public:
    int solve(string s1, int i, string s2, int j)
    {
        if (i == s1.length() || j == s2.length())
        {
            return 0;
        }

        char ch = s1[i];
        int ans;
        ans = max(solve(s1, i + 1, s2, j), solve(s1, i, s2, j + 1));
        for (int k = j; k < s2.length(); k++)
        {

            if (s1[i] == s2[j])
            {
                ans = max(ans, 1 + solve(s1, i + 1, s2, j + 1));
            }
        }
        return ans;
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        return solve(text1, 0, text2, 0);
    }
};

// Memoization again gave TLE
// This is Tabulation
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        vector<vector<int>> dp;
        string s1 = text1, s2 = text2;
        int n = text1.size(), m = text2.size();
        dp.resize(n + 1, vector<int>(m + 1, 0));
        int ans;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                ans = max(dp[i + 1][j], dp[i][j + 1]);
                ;
                if (s1[i] == s2[j])
                {
                    ans = max(ans, 1 + dp[i + 1][j + 1]);
                }
                dp[i][j] = ans;
            }
        }

        return dp[0][0];
    }
};

//Space Optimization 
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {

        string s1 = text1, s2 = text2;
        int n = text1.size(), m = text2.size();
        vector<int> cur(m + 1, 0), next(m + 1, 0);
        int ans;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                ans = max(next[j], cur[j + 1]);
                if (s1[i] == s2[j])
                {
                    ans = max(ans, 1 + next[j + 1]);
                }
                cur[j] = ans;
            }
            next = cur;
        }

        return cur[0];
    }
};