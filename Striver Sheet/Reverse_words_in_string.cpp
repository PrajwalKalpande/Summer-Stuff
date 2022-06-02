#include <bits/stdc++.h>
#pragma GCC optimize("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
//Using stack / vector
class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "";
        string temp = "";
        int i;
        vector<string> res;
        for (i = 0; i < s.size(); i++)
        {

            if (s[i] == ' ')
            {
                if (i > 0 && s[i - 1] != ' ')
                {
                    res.push_back(temp);
                    temp = "";
                }
                continue;
            }
            temp += s[i];
        }
        if (temp != "")
            res.push_back(temp);
        for (int i = res.size() - 1; i >= 0; i--)
        {
            ans = ans + res[i] + ' ';
        }
        ans = ans.substr(0, ans.size() - 1);
        return ans;
    }
};

// Usins strings only 
class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string temp="";
        int i ;
 
        for(i=0;i<s.size();i++){
         
            if(s[i]==' '){
                if(temp!="")ans =  temp + ' ' + ans;
                temp="";
                continue;
            }
            temp+=s[i];
            
        }
        if(temp!="")ans =  temp + ' ' + ans;
        ans = ans.substr(0,ans.size()-1);
    return ans;
        
    }
};