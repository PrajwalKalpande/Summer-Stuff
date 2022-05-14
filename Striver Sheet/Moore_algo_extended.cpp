//some minor bug needs to be fixed
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int cnt1 = 0, cnt2 = 0, ele2 = nums[0], ele1 = nums[0];
        int n = nums.size();

        for (auto x : nums)
        {
            if (cnt1 == 0)
                ele1 = x;
            if (cnt2 == 0)
                ele2 = x;
            if (ele1 == x)
                cnt1++;
            else if (ele2 == x)
                cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ans;
        cnt1 = cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == ele1)
            {
                cnt1++;
            }

            else if (nums[i] == ele2)
            {
                cnt2++;
            }
        }
        if (cnt1 > n / 3)
            ans.push_back(ele1);
        if (cnt2 > n / 3)
            ans.push_back(ele2);
        return ans;
    }
};