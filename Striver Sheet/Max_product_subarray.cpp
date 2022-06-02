#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
//Modified Kadane's Algorithm
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n =nums.size();
        int mx=1,mn=1;
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
             if(nums[i]<0)
                swap(mx,mn);
            mx=max(nums[i],nums[i]*mx);
            mn=min(nums[i],nums[i]*mn);
           
           ans=max(ans,max(mx,mn)); 
        }
        return ans;
    }
};

//Two traversal approach
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n =nums.size();
        int left=1,right=1,ans=INT_MIN;
        
        for(int i=0;i<n;i++){
            left*=nums[i];
            right*=nums[n-i-1];
            ans=max(ans,max(left,right));
            
            if(left==0){left=1;}
            if(right==0){right=1;}
        }
        return ans;
    }
};
