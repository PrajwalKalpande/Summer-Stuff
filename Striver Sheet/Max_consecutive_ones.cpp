#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int ans = 0;
        int n = nums.size();
        int sum = 0;
        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];

            if (sum == prev)
            {
                ans = max(ans, sum);
                sum = 0;
            }
            prev = sum;
        }
        return max(ans, sum);
    }
};
