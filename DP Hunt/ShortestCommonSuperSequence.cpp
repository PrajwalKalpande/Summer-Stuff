//Memoization
class Solution {
 
    vector<vector<string>>dp;
    string solve(string a,int i,string b,int j ){
        if(i==a.size() && j==b.size()){
            return "";
         
        }
       if(dp[i][j].size())return dp[i][j];
        if(j==b.size())return dp[i][j]=a.substr(i)+ solve(a,a.size(),b,j);
        if(i==a.size())return dp[i][j]=b.substr(j)+ solve(a,i,b,b.size());
            
        
        if(a[i]==b[j])return a[i]+solve(a,i+1,b,j+1);
        else{
            string s1 = a[i]+solve(a,i+1,b,j);
            string s2 = b[j]+solve(a,i,b,j+1);
            if(s1.size()<s2.size())return dp[i][j]=s1;
            else return dp[i][j]=s2;
        }
       
    }
public:
    string shortestCommonSupersequence(string str1, string str2) {
        dp.resize(str1.length()+1,vector<string>(str2.size()+1,""));
       return  solve(str1,0,str2,0);
         
    }
};

//Tabulbation 
class Solution {
   
    vector<vector<string>>dp;
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size(),m=str2.size();
        dp.resize(str1.length()+1,vector<string>(str2.size()+1,""));
        string a=str1,b=str2;
        string temp="";
        for(int j=m-1;j>=0;j--){
            temp = b[j]+temp;
            dp[n][j]=temp;
        }
        temp="";
        for(int i=n-1;i>=0;i--){
            temp=a[i]+temp;
            dp[i][m]=temp;
                
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(a[i]==b[j]){dp[i][j]=a[i]+dp[i+1][j+1];continue;}
                if(dp[i+1][j].size()<dp[i][j+1].size())dp[i][j]=a[i]+dp[i+1][j];
                else dp[i][j]=b[j]+dp[i][j+1];
            }
            
        }
        return dp[0][0];
    }
};
//Both gave TLE
//Find LCS and then proceed
