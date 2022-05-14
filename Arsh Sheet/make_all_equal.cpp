#include <bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int small=INT_MAX ;
        for(int i= 0;i<nums.size();i++){
            if(nums[i]<small)small=nums[i];
            
        }
        int sum =0 ;
        for(int i=0 ;i<nums.size();i++){
            sum+=(nums[i]-small);
        }
        return sum;
        
    }
};
