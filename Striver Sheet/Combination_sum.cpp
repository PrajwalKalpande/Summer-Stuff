#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution {
public:
    
    vector<vector<int>> ans; 
    
    void solve(vector<int>& candidates,int target,vector<int> temp, int n){
        if(n<=0){
        if(target==0){
            ans.push_back(temp);
            return;}
            return;
        }
      
        while(target>=0){   
            solve(candidates,target,temp,n-1);
            temp.push_back(candidates[n-1]);
            target-=candidates[n-1];
        }
        return;   
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        int n = candidates.size();
        solve(candidates,target,temp,n);
        return ans;
  
    }
};