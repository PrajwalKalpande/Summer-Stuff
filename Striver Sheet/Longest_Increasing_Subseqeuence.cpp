#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
//Memoization Gave TLE
class Solution {
public:
    
    int solve(vector<int> a,int i,int prev,vector<vector<int>>& dp){
        if(i==a.size())return 0;
        
        if(dp[i][prev+1]!=-1)return dp[i][prev+1];
        int cnt=solve(a,i+1,prev,dp);
        if(prev==-1 ||  a[i]>a[prev] ){
            cnt = max(cnt,1+solve(a,i+1,i,dp));
        }
        dp[i][prev+1]=cnt;
        return cnt;
  
    }
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return solve(nums,0,-1,dp);
        
    }
};

//Tabulation - 1 Doubt
class Solution {
public:
  
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        int i=n-1,prev,ans ;
         
        while(i>=0){
            
            for(prev=i-1;prev>=-1;prev--){
                ans = dp[i+1][prev+1];
                if(prev==-1 || nums[i]>nums[prev]){
                    ans = max(ans,1+dp[i+1][i+1]);
                    // why not dp[i+1][i];
                }
                dp[i][prev+1]=ans;
            }
 i--;
            
        }
        return dp[0][0];
    }
};

// Spce Optimization
class Solution {
public:
  
    int lengthOfLIS(vector<int>& nums) {
         int n =nums.size();
        int maxi = 1;
        vector<int> dp(n,1);
        for(int i=0;i<n;i++){
            for(int prev=0;prev<i;prev++){
                if(nums[prev]<nums[i]) {
                    dp[i] = max(dp[i],1+dp[prev]);
                }
            }
            maxi = max(maxi,dp[i]);
        }
        
        return maxi;
    }
};

//Binary Search / Lower Bound 
class Solution {
public:
  
    int lengthOfLIS(vector<int>& nums) {
       vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>temp.back()){
                temp.push_back(nums[i]);
            }
            else{
                int ind = lower_bound(temp.begin(),temp.end(),nums[i]) - temp.begin();
                temp[ind] = nums[i];
            }
        }
        return temp.size();
    }
};