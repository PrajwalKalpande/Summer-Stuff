#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
 
vector<string> ans;
    int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    char p[4] = {'D','U','R','L'};
    void solve(int x, int y, vector<vector<int>>& m, string s, int n){
        if(x==n-1 && y==n-1){
            ans.push_back(s);
            return;
        }
        for(int i=0;i<4;i++){
            int nx = x+dir[i][0], ny = y+dir[i][1];
            if(nx>=0 && nx<n && ny>=0 && ny<n && m[nx][ny]==1){
                m[x][y] = 0;
                solve(nx,ny,m,s+p[i],n);
                m[x][y] = 1;
            }
        }
    }

    vector<string> findPath(vector<vector<int>> &m, int n) {
        ans.clear();
        if(m[0][0]==1) solve(0,0,m,"",n);
        return ans;
    }
