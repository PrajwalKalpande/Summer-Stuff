
#include <bits/stdc++.h>
using namespace std;

class Answer
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int maxsum = INT_MIN, curr_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            curr_sum += nums[i];
            if (curr_sum > maxsum)
            {
                maxsum = curr_sum;
            }

            if (curr_sum < 0)
            {
                curr_sum = 0;
            }
        }
        return maxsum;
    }
};
 