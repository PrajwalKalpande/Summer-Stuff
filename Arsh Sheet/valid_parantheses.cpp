#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<int> stk;
        int n = s.size();
        if (n == 1)
            return false;
        int i = 0;
        char temp;

        while (i < n)
        {
            temp = s[i];

            if (temp == ')' || temp == '}' || temp == ']')
            {
                if (stk.empty())
                    return false;
                switch (temp)
                {
                case ')':
                    if (stk.top() != '(')
                        return false;
                    else
                    {
                        stk.pop();
                    }
                    break;
                case '}':
                    if (stk.top() != '{')
                        return false;
                    else
                    {
                        stk.pop();
                    }
                    break;
                default:
                    if (stk.top() != '[')
                        return false;
                    else
                    {
                        stk.pop();
                    }
                    break;
                }
            }
            else
            {

                stk.push(temp);
            }
            i++;
        }
        if (!stk.empty())
            return false;
        return true;
    }
};