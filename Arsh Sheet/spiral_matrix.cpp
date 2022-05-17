#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n =matrix[0].size();
        vector<int> ans(m*n);
        int h  = m*n;
        int ROW=m;
        int COL=n;
        int x=0, y=0;
        int temp=0;
        while(m>0 && n>0){
            
            if(temp==h)return ans;
            for(int i=y;i<COL-y;i++){
                ans[temp]=matrix[x][i];
                temp++;  
            }
            if(temp==h)return ans;
            for(int i =x+1;i<ROW-x;i++){
                ans[temp]=matrix[i][COL-y-1];
                temp++;
            }
            
             if(temp==h)return ans;
            for(int i=COL-2-y;i>=y;i--){
                ans[temp]=matrix[ROW-x-1][i];
                temp++;
            }
             if(temp==h)return ans;
            
            for(int i=ROW-2-x;i>x;i--){
                ans[temp]=matrix[i][y];
                temp++;
            }
           
            x++;
            y++;
            m-=2;
            n-=2;   
        }
        
        return ans;
    }
};