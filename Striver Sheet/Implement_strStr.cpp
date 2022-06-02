#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.size(), m = needle.size();
        int i = 0;
        int j;
        if (m == 0)
            return 0;
        if (m > n)
            return -1;
        while (i < n)
        {
            j = 0;
            while (j < m)
            {
                if (haystack[i + j] == needle[j])
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
            if (j == m)
                return i;
            i++;
        }
        return -1;
    }
};