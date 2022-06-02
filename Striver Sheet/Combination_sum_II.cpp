#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
 
class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> candidates,int target,vector<int> temp, int n){
        if(target<0)return;
        if(n<=0){
        if(target==0){
            ans.push_back(temp);
        }
            return;
        }
        temp.push_back(candidates[n-1]);
        solve(candidates,target-candidates[n-1],temp,n-1);
        int j=n-1;
        while(j>0){
            if(candidates[j]==candidates[j-1])j--;
            else{
                break;
            }
        }
       temp.pop_back();
       solve(candidates,target,temp,j);
        return;  
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp; 
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,temp,candidates.size());
        return ans;
    }
};