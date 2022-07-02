#include<vector>
#include<string>
#include<iostream>
#include<stack>
using namespace std;
 
class Solution
{private:
void dfs(int i,vector<int>&ans,vector<int>& visited,vector<int> adj[]){
     
    stack<int> stk;
    stk.push(i);
 
    while(!stk.empty()){
        int temp = stk.top();
        stk.pop();
        visited[temp]=1;
        ans.push_back(temp);
        cout<<temp<<" ";
       
        for(auto x:adj[temp]){
           if(!visited[x]) stk.push(x);
        }
        
    }
    return;
    
     
}
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
 {   
    vector<int> ans;
    vector<int> visited(V,0);
    for(int i=0;i<V;i++){
        if(!visited[i])dfs(i,ans,visited,adj);
    }
    
    return ans;
 }
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        
    }
    
    return 0;
}  // } Driver Code Ends