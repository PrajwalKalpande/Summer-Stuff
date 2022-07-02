class Solution {
private:
     
    void dfs(int& i,int& j,vector<vector<int>>&visited , vector<vector<char>>& grid){
        stack<pair<int,int>> stk;
        stk.push({i,j});
        int m= grid.size(),n= grid[0].size();
        while(!stk.empty()){
            int x = stk.top().first;
            int y= stk.top().second;
            stk.pop();
            visited[x][y]=1;
            if(x+1<m && grid[x+1][y]=='1' && !visited[x+1][y])stk.push({x+1,y});
            if(x-1>=0 && grid[x-1][y]=='1' &&!visited[x-1][y])stk.push({x-1,y});
            if(y+1<n && grid[x ][y+1]=='1' &&!visited[x][y+1])stk.push({x,y+1});
            if(y-1>=0 && grid[x ][y-1]=='1' &&!visited[x][y-1])stk.push({x,y-1});
   
        }
        return ;
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m =grid.size(),n=grid[0].size();
         vector<vector<int>> visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j= 0;j<n;j++){
                if(grid[i][j]=='1'&&!visited[i][j]){
                    count++;
                    dfs(i,j,visited,grid);}
            }
        }
        
        return count;
    }
};