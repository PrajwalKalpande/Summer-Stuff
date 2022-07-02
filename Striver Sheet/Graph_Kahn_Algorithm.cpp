#include<vector>
#include<string>
#include<iostream>
#include<queue>
using namespace std;

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans(V);
	    int indeg[V];
	    memset(indeg,0,sizeof(indeg));
	    for(int i=0;i<V;i++){
	        for(auto x:adj[i]){
	            indeg[x]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        if(indeg[i]==0)q.push(i);
	    }
	    int count=0;
	    int temp;
	    while(!q.empty()){
	        temp =  q.front();
	        q.pop();
	        ans.push_back(temp);
	        count++;
	        for(auto x:adj[temp]){
	           if(--indeg[x]==0)q.push(x);
	        }
	    }
	    if(count==V)return ans;
	}
	
};