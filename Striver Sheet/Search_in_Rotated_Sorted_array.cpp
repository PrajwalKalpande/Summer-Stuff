#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution {
public:
    int solve(vector<int>& nums, int target,int start,int end){
        int low = start,high= end,mid,temp;
        while(low<=high){
            mid = low+(high-low)/2;
            if(nums[mid]==target)return mid;
            
            if(nums[high]<=nums[low]){
                temp = solve(nums,target,start,mid-1);
                if(temp!=-1)return temp;
                temp = solve(nums,target,mid+1,end);
                if(temp!=-1)return temp;
                return -1;
            }
            else{
                if(nums[mid]>target){
                    high = mid-1;
                
                }else{low=mid+1;}
                
            }
        }
        return -1;
        
    }

    int search(vector<int>& nums, int target) {
        return solve(nums,target,0,nums.size()-1);
    }
};
