#include <bits/stdc++.h>
 
using namespace std;
 
 class Solution {
public:
    void sortColors(vector<int>& nums) {
      //similar to partition function in quick sort
        int n = nums.size();
        int low=0,high=n-1,mid=0;
        while(mid<=high){
            switch(nums[mid]){
                case 0: swap(nums[low++],nums[mid++]);
                    break;
                    //since we are making sure that 0s are at the starting of
                    //the array after swapping we can directly increment mid
                    //unlike in the below case where we have to deal with the
                    //new no. 1/0 at nums[mid];
                case 2:swap(nums[high--],nums[mid]);
                    break;
                default: mid++;
                        
            }
            
        }
        
        }
    
        
}; 