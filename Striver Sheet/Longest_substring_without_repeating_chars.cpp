#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp; 
        int n= s.size();
        char c; 
        int ans=0,start=0;
        for(int i=0; i<n;i++){
            c=s[i];
            if(mp.find(c)!=mp.end()){   
            start=max(start,mp[c]+1);       
            }
                mp[c]=i;
            ans=max(ans,i-start+1);
            
        }
        return ans;
    }
};
