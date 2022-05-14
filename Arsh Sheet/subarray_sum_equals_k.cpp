#include <bits/stdc++.h>
 
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
            unordered_map<int,int> mp;
            int curr_sum = 0;
            int count=0;
            if(nums.size()==1)return int(k==nums[0]);
            for(int i= 0;i<nums.size();i++){
                curr_sum +=nums[i];
                mp[curr_sum]++;
                if(curr_sum==k)count++;
                    if(mp.find(curr_sum-k)!=mp.end()){
                    count+=mp[curr_sum-k];
                 
                }
                


            }
            return count;

    }
};