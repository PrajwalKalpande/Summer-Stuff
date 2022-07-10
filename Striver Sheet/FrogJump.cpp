//Recursive
class Solution {
           bool solve(vector<int>&stones,int i,int k);

public:
    bool canCross(vector<int>& stones) {
        if(stones.size()==1)return true;
        if(stones[1]!=1+stones[0])  return solve(stones,1,1);
        return false;
        
    }
};

bool Solution::solve(vector<int>&stones,int i,int k){
    if(i==stones.size()-1)return true;
    int index =1;
    while(i+index <stones.size() && abs(stones[i+index]-stones[i]-k)<=1){
     if(solve(stones,i+index,stones[i+index]-stones[i])) return true;
    
        index++;
    }
    return false;
    
}

//Tabulation
class Solution {
        
public:
    bool canCross(vector<int>& stones) {
        if(stones.size()==1)return true;
        if(stones[1]!=1+stones[0])  return false;
        int n= stones.size();
        int diff;
        vector<vector<bool>>dp (n,vector<bool>(n+1,false));
        dp[0][1]=true;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                diff= stones[i]-stones[j];
                if(diff>n)continue;
                if(dp[j][diff]){
                    if(i==n-1)return true;
                    dp[i][diff]=true;
                    if(diff-1>=0)dp[i][diff-1]=true;
                    if(diff+1<n)dp[i][diff+1]=true;
                }
            }
        }
        
         
        return false;
        
    }
};
