#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution {
public:
    
    bool isPal(string s){
        int left =0;
        int right= s.size()-1;
        if(right<=0)return true;
        while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> ans;
    
    void solve(vector<string> temp,string s, int i,int n){
        
        if(i==n){ans.push_back(temp); }
      
        string r;
        for(int j=i;j<n;j++){
            r = s.substr(i,j-i+1);
            
            if(isPal(r)){
                temp.push_back(r);
                solve(temp,s,j+1,n);
                temp.pop_back();
            }
        }
  
    }
    
 
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        solve(temp,s,0,s.size());
        return ans;
    }
};
