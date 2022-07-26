//3d tabulation
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> dp(strs.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,0)));
        for(int i=strs.size()-1;i>=0;i--){
            for(int zeros = 0;zeros<=m;zeros++){
                for(int ones=0;ones<=n;ones++){
                    int num1 = count(strs[i].begin(),strs[i].end(),'1');
                    int num0 = strs[i].size()-num1;
                    int temp = dp[i+1][zeros][ones];
                    if(zeros-num0>=0&& ones-num1>=0)temp=max(temp,1+dp[i+1][zeros-num0][ones-num1]);
                     dp[i][zeros][ones]=temp;
                    
                }
            }
        }
        return dp[0][m][n];
    }
};

//Hui
//Space Optimized 
//Note : Dp table is filled bottom right to top left and not other way round (which is done usually)
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=strs.size()-1;i>=0;i--){
            for(int zeros = m;zeros>=0;zeros--){
                for(int ones=n;ones>=0;ones--){
                    int num1 = count(strs[i].begin(),strs[i].end(),'1');
                    int num0 = strs[i].size()-num1;
                    int temp = dp[zeros][ones];
                    if(zeros-num0>=0&& ones-num1>=0)temp=max(temp,1+dp[zeros-num0][ones-num1]);
                     dp[zeros][ones]=temp;
                    
                }
            }
        }
        return dp[m][n];
    }
};
