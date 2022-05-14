class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int count =0,target; 
    for(int i=0 ; i<nums.size() ; i++){
        if(count==0)target = nums[i];
        if(target==nums[i])count++;
        else{
            count--;
        }
        
    }
        return target;
    }
};