#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
class Solution {
public:
  vector<vector<vector<int>>> memo;
    
    int OnesZerosMemo(vector<string>& strs, int i, int m, int n)
    {
        if(i == strs.size() || m < 0 || n < 0) 
            return 0;
        
        if(memo[i][m][n] != 0) 
            return memo[i][m][n];
        
        int ones = count(strs[i].begin(), strs[i].end(), '1');
        int zeros = strs[i].length() - ones;
        
        if(zeros <= m && ones <= n) {
            return memo[i][m][n] = max(1 + OnesZerosMemo(strs, i + 1, m - zeros, n - ones), OnesZerosMemo(strs, i + 1, m, n));
        }
        
        else{
            return memo[i][m][n] = OnesZerosMemo(strs, i + 1, m, n);
        }
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        memo.resize(size(strs), vector<vector<int> >(m + 1, vector<int>(n + 1)));
        return OnesZerosMemo(strs, 0, m, n);
    }
};

//Space Optimized 
class Solution {
public:
  int findMaxForm(vector<string>& strs, int m, int n) {
        int len = strs.size();
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for(int k = 0; k < len; k++)
        {
            int ones = count(strs[k].begin(), strs[k].end(), '1');
            int zeros= strs[k].size() - ones;
            
            for (int i = m; i >= zeros; i--) 
                for (int j = n; j >= ones; j--)
                    dp[i][j] = max(dp[i][j], dp[i - zeros][j - ones] + 1); 
        }
        return dp[m][n];
    }
};