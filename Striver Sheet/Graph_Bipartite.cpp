class Solution {
private:
    bool bfs(int i,vector<int>&color,vector<vector<int>>&graph){
        queue<int> q;
        q.push(i);
        color[i]=1;
        int temp;
        while(!q.empty()){
            temp = q.front();
            q.pop();
            for(auto x:graph[temp]){
                if(color[x]==-1){
                    color[x]=1-color[temp];
                    q.push(x);
                }
                else if(color[temp]==color[x]){
                    return false;
                }
            }
        }
        
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(),-1);
        
        for(int i=0;i< graph.size();i++){
            
                if(color[i]==-1){
                    if(!bfs(i,color,graph))return false;
                }
                
        }
        return true;
        
    }
};