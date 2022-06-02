#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0,n  =nums.size();
        if(n==1)return nums[0];
        int high = n-1,mid;
        while(low<=high){
            mid = low+(high-low)/2;
            if(mid&1){
                if(nums[mid]==nums[mid+1]){
                high= mid-1;
                }else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]==nums[mid+1]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            
            
            
        }
        return nums[low];
    }
};