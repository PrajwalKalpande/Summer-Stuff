#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0, j = 0, curr = 0;
        vector<int> ans(m + n);
        while (i < m && j < n)
        {
            if (nums1[i] <= nums2[j])
            {
                ans[curr] = nums1[i];
                i++;
            }
            else
            {
                ans[curr] = nums2[j];
                j++;
            }
            curr++;
        }
        while (i < m)
        {
            ans[curr] = nums1[i];
            curr++;
            i++;
        }
        while (j < n)
        {
            ans[curr++] = nums2[j++];
        }

        for (int i = 0; i < n + m; i++)
        {
            nums1[i] = ans[i];
        }
    }
};