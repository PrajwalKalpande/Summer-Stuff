class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto x:arr){
            mp[x]++;
        }
        for(auto pair:mp){
            pq.push(pair.second);
        }
        while(k>=0){
            k-=pq.top();
            if(k<0)break;
            pq.pop();
        }
        return pq.size();
    }
};
