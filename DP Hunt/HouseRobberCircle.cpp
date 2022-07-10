class Solution {
  //Optimized from O(N) to O(1)
   int robInRange(vector<int>& money,int start ,int end){
        int include=money[end],exclude=0;
        
       int i,e;
       
        for(int j=end-1;j>=start;j--){
             
            i = exclude + money[j];
            //current include = past exclude + me
            //current exclude = past max ie include
            e = include;
            include = max(e,i);
            exclude = e;
             
        }
        return include;
        
    }
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1)return nums[0];
        if(n==0)return 0;
        
        return max(robInRange(nums,1,n-1),robInRange(nums,0,n-2));
    }
};
