#include <bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int target1,target2,i=0,j,start,end,n=nums.size(),sum;
        vector<vector<int>> ans;
        vector<int> temp(4);
        if(n==0)return ans;
        sort(nums.begin(),nums.end());
        while(i<n-3 ){
            
            target1= target-nums[i];
            j=i+1;
            while(j<n-2){
                
                target2=target1-nums[j];
               
                start= j+1;
                end=n-1;
                sum=0;
                while(start<end){
                    
                    sum = nums[start]+nums[end];
                    if(sum<target2)start++;
                    else if(sum>target2)end--;
                    else{
                        
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[start];
                        temp[3]=nums[end];
                        ans.push_back(temp);
                            
                        while(start<end  && nums[start]==temp[2]) start++ ;
                        while(start<end  && nums[end]==temp[3]) end-- ;
                            
                         
                    }
                                      
                }
                 while(j+1<n && nums[j]==nums[j+1])j++ ;
               
                j++;
            }
            while(i+1<n && nums[i]==nums[i+1])i++ ;
            
             i++;
        }
        
        return ans;
    }
};