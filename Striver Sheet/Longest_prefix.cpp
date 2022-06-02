#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        string ans;
        int n = strs.size();

        for (int i = 0; i < min(strs[0].size(), strs[n - 1].size()); i++)
        {
            if (strs[0][i] == strs[n - 1][i])
                ans += strs[0][i];
            else
            {
                break;
            }
        }

        return ans;
    }
};
