#include <bits/stdc++.h>

#define MP make_pair
using namespace std;
int Solution::solve(vector<int> &A, int B)
{
    unordered_map<int, int> mp;
    int n = A.size();
    int temp = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        temp ^= A[i];
        if (temp == B)
            ans++;
        if (mp.find(temp ^ B) != mp.end())
        {
            ans += mp[temp ^ B];
        }

        mp[temp]++;
    }
    return ans;
}
