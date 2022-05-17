sclass Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size(),curr,maxStreak=1,temp;
        if(n==0)return 0 ;
        
        for(auto num:nums){
            s.insert(num);
        }
        for(int i=0; i<n;i++){
            temp=nums[i];
            if(s.count(temp-1))continue;
            curr=1;
            
            while(s.count(temp+1)){
                curr++;
                temp++;
                 
            }
            maxStreak=max(maxStreak,curr);
            
            
        }
        return maxStreak;
    }
};