#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int n = a.size() - 1, m = b.size() - 1;
        string s = "";
        int temp = 0;
        while (n >= 0 || m >= 0 || temp == 1)
        {
            temp += ((n >= 0) ? a[n] - '0' : 0);
            temp += ((m >= 0) ? b[m] - '0' : 0);
            s = char(temp % 2 + '0') + s;
            temp /= 2;
            n--;
            m--;
        }
        return s;
    }
};