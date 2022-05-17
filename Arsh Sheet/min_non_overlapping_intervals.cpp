#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {

        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0],
            end = intervals[0][1];
        int ans = 0;

        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] >= end)
            {
                start = intervals[i][0];
                end = intervals[i][1];
            }
            else
            {
                ans++;
                if (end > intervals[i][1])
                {
                    end = intervals[i][1];
                    start = intervals[i][0];
                }
            }
        }
        return ans;
    }
};