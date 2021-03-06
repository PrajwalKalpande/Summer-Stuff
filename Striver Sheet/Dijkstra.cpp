class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dist(V,INT_MAX);
        dist[S]=0;
        pq.push({0,S});
        int u,d;
        
        while(!pq.empty()){
            d = pq.top().first;
            u = pq.top().second;
            pq.pop();
            for(auto v:adj[u]){
                if(dist[v[0]]>d+v[1]){
                dist[v[0]]= min(dist[v[0]],d+v[1]);
                pq.push({dist[v[0]],v[0]});
                    
                }
            }
            
        }
    return dist;
    }
};
