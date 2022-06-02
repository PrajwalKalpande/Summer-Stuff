#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        int n= s.size(),m=t.size();
        if(n!=m)return false;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(!mp[t[i]])return false;
            mp[t[i]]--;
        }
        return true;
    }
};