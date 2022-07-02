//Recursive Solution TLE
class Solution {
private:
    //Return true if cycle present
    bool bfsUtil(vector<vector<int>> adj,vector<int>&visited,int v,vector<int>&done){
        done[v]=1;
        visited[v] = 1;
        for(auto x:adj[v]){
            if(visited[x])return true;
            else{
                if(bfsUtil(adj,visited,x,done)) return true ;
            }
        }
        
        visited[v]= 0;
        return false;
        
    }
    bool bfs(int n ,vector<vector<int>> adj,vector<int>&visited,vector<int>&done){
        for(int i=0;i<n;i++){
          if(!done[i]){
               if(bfsUtil(adj,visited,i,done)) return false;;
          }  
        }
        return true;
    }
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> visited(numCourses,0);
                vector<int> bfsdone(numCourses,0);

        vector<vector<int>> adj(numCourses);
        for(auto x:prerequisites){
            adj[x[1]].push_back(x[0]);
        }
        return bfs(numCourses,adj,visited,bfsdone);
    }
};