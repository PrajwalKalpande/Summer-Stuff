#include<string>
#include<vector>
using namespace std;

class Solution {
    string say(string prev){
        string num ="";
        int count=1;
        int n =prev.size();
        int i=0;
        while(i<n){
             
            if(i+1<n && prev[i]==prev[i+1]){
                count++;
                i++;
                continue;
            }
            
            num += count+'0';
            num+= prev[i];
            i++;
            count=1;
        }
        
        return num;
    }
public:
   
    string countAndSay(int n) {
        vector<string> dp(31,"0");
        dp[1]= "1";
        if(dp[n]!="0")return dp[n];
        
        for(int i=2;i<=n;i++){
            dp[i]= say(dp[i-1]);
        }
        return dp[n];
        
    }
};