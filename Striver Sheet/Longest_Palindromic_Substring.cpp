 #include<iostream>;
 #include<vector>;
 #include<string>;
 using namespace std;
 class Solution {
public:
    string longestPalindrome(string s) {
        int n=  s.size();
        if(n==0)return "";
        
        int start=0 ,end=0;
   
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i =0;i<n;i++){
            dp[i][i]=1;
            if(i<n-1 && s[i]==s[i+1]){
                dp[i][i+1] = 1;
             if(end-start+1<2){
                 start = i;
                 end = i+1;
                 
                 
             }
            }
            if(i<n-2 && s[i]==s[i+2]){
                dp[i][i+2]=1;
                if(end-start+1<3){ 
                    start =i;
                    end = i+2;
                    
                }
              
            }
} 
        int i,j;
        for(int k = 4;k<=n;k++){
            i=0;
            j =k-1;
             while(j<n){
                 if(s[i]==s[j]){
                     if(dp[i+1][j-1]){
                         dp[i][j]=1;
                         start = i;
                         end = j;
                     }
                 }
                 i++;
                 j++;
    
        }
            
        }
       
        
        return s.substr(start,end-start+1);
        
        
    }
};