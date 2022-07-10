class Solution {
public:
    int rob(vector<int>& nums) {
    int n = nums.size();
    vector<int> loot(n+2,0);
    for(int house = n-1;house>=0;house--){
        loot[house]=max(loot[house+1],nums[house]+loot[house+2]);
    }
        return loot[0];
    }
};
