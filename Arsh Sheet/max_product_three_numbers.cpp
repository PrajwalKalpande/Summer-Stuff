#include <bits/stdc++.h>
 
using namespace std;
class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long int product = 1;
        int neg = 0;
        while (neg < n && nums[neg] < 0)
            neg++;
        if (neg < 2)
        {
            product *= nums[n - 1] * nums[n - 2] * nums[n - 3];
            return product;
        }
        else
        {
            product *= nums[n - 1];
            if ((long(nums[n - 2]) * long(nums[n - 3])) > (long(nums[0]) * long(nums[1])))
            {
                product *= nums[n - 2] * nums[n - 3];
            }
            else
            {
                product *= nums[0] * nums[1];
            }
            if (product < 0)
            {

                product = nums[n - 1] * nums[n - 2] * nums[n - 3];
            }
            return product;
        }
    }
};
