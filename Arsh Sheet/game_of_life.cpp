#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution {
public:
  int r[8]={1,-1,1,-1,1,-1,0,0};
int c[8] = {1,-1,-1,1,0,0,1,-1};
    int m,n;
    bool safe(int x,int y){
        if(x>=0 && y>=0 && x<m && y<n)return true;
        return false;
    }
    
    int total(int i,int j, vector<vector<int>> board){
        int count=0;
        for(int k=0; k<8;k++){
            if(safe(i+r[k],j+c[k])){if(board[i+r[k]][j+c[k]]>0)count++;}
        }
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        m=board.size();
        n=board[0].size();
        int count  ;
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                 count=total(i,j,board);
if((count<2||count>3) && board[i][j]>0)board[i][j]=2;
                if(board[i][j]==0 && count==3){
                    board[i][j]=-1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]<0)board[i][j]=1;
                if(board[i][j]==2)board[i][j]=0;
                
            }
        }
        return;
        
        
        
    }
};