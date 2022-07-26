//Memoization
class Solution {
    vector<vector<int>> dp;
    int operations(string a,string b,int i,int j){
        if(i<0 || j<0)return INT_MAX;
        if(i==a.size() && j==b.size()){
            return 0;
        }
        if(i==a.size())return b.size()-j;
        if(j==b.size())return a.size()-i;
        if(dp[i][j]!=-1)return dp[i][j];
        if(a[i]==b[j])return dp[i][j]=operations(a,b,i+1,j+1);
        int ans= min(1+operations(a,b,i+1,j),1+operations(a,b,i+1,j+1));
            //delete,replace
        ans=min(ans,1+operations(a,b,i,j+1));
            //insert
        return dp[i][j]=ans;
    }
public:
    int minDistance(string word1, string word2) {
        dp.resize(word1.size()+1,vector<int>(word2.size()+1,-1));
       return operations(word1,word2,0,0);
    }
};
//Try Tabulation later looks easy tho
