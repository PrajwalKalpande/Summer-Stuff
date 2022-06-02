#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    void solve(int i, vector<int> &nums)
    {
        if (i == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int j = i; j < nums.size(); j++)
        {
            swap(nums[j], nums[i]);
            solve(i + 1, nums);
            swap(nums[j], nums[i]);
        }
        return;
    }

    vector<vector<int>> permute(vector<int> &nums)
    {

        solve(0, nums);
        return ans;
    }
};
