#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {

        int rem, ans = 0;
        int sum = 0;
        unordered_map<int, int> mp;
        for (int x : nums)
        {
            sum += x;
            rem = sum % k;
            if (rem < 0)
                rem += k;
            if (rem == 0)
                ans++;

            if (mp.find(rem) != mp.end())
                ans += mp[rem];

            mp[rem]++;
        }
        return ans;
    }
};
