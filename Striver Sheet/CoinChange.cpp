#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
 
class Solution {
public:
    vector<vector<int>> dp;
    int solve(vector<int>& coins, int amount,int n){
        if(amount==0)return 0;
        if(amount<0 || n<=0)return -1;
        if(dp[n-1][amount]!=-1)return dp[n-1][amount];
        int temp=coins[n-1];
        int ans=1e9;
        int cnt=0;
        int sum=amount;
         if(solve(coins,amount,n-1)!=-1){
            ans=min(ans,solve(coins,amount,n-1));
        }
        
        
        while(sum>0){
            sum-=temp;
            cnt++;
            if(solve(coins,sum,n-1)!=-1){
                 
                ans=min(ans,cnt+solve(coins,sum,n-1));}
            
        }
       
        if(ans==1e9)return -1;
        return dp[n-1][amount]=ans;
   
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        dp.resize(coins.size(),vector<int>(1e4+1,-1));
        
        return solve(coins,amount,coins.size());
    }
};

//Tabulation
class Solution {
public:
    vector<vector<int>> dp;
   
    
    
    int coinChange(vector<int>& coins, int amount) {
        dp.resize(coins.size(),vector<int>(1e4+1,-1));
        int n=coins.size();

        for(int i=0;i<n;i++){
            dp[i][0]=0;
        }
        for(int amt=1;amt<1e4+1;amt++){
            if(amt%coins[0]==0){
                dp[0][amt]=amt/coins[0];
            }
            
        }
        int val,cnt,sum;
        for(int i=1;i<n;i++){
            for(int amt=1;amt<1e4+1;amt++){
                val=1e9;
                 if(dp[i-1][amt]!=-1){
                     val=min(val,dp[i-1][amt]);
                 }
                cnt=1,sum=amt-coins[i];
                
                while(sum>=0){
                   
                    if(dp[i-1][sum]!=-1){
                        val=min(cnt+dp[i-1][sum],val);
                    }
                    cnt++;
                    sum-=coins[i];
                }
                
                if(val!=1e9)dp[i][amt]=val;
                
            }
        }
    return dp[n-1][amount];
    }
};

//Space Optimization