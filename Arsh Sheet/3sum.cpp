#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans ;
        int a,b;
        int findsum,l,r ,tempsum ;
        int i=0 ;
       while(i<nums.size()){
           findsum= -nums[i];
            l = i+1;
            r = nums.size()-1;
            
            
            while(l<r){
                a = nums[l];
                b  = nums[r];
                tempsum = a+b;
                if(tempsum==findsum){
                    
                    ans.push_back({nums[i],nums[l],nums[r]});
                    
                    while(l<r&& nums[l]==a ){l++;}
                    
                    while(r>i && nums[r]==b ){r--;}
                     continue;
                }
                if(tempsum<findsum){l++;}
                else{r--;}
                
                
            }
            int z = nums[i];
            while(i<nums.size() && nums[i]==z){i++;
                                              }
        }
        return ans;
        
      
    }
};