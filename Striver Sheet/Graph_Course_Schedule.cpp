class Solution
{
private:
    // Return true if cycle present
    bool dfsUtil(vector<vector<int>>&adj, vector<bool> &visited, int v, vector<bool> &dfsVis)
    {
        visited[v] = true;
        dfsVis[v] = true;
        for (auto &x : adj[v])
        {
            bool temp = false;
            if (dfsVis[x])
                return true;
            if (!visited[x])
            {
                temp = dfsUtil(adj, visited, x, dfsVis);
                if (temp)
                {
                    return true;
                }
            }
        }
        dfsVis[v] = false;

        return false;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<bool> visited(numCourses, false);
        vector<vector<int>> adj(numCourses);
        for (auto &x : prerequisites)
        {
            adj[x[1]].push_back(x[0]);
        }

        vector<bool> dfsVis(numCourses);
        for (int i = 0; i < numCourses; i++)
        {
            if (!visited[i])
            {
                if (dfsUtil(adj, visited, i, dfsVis))
                    return false;
            }
        }
        return true;
    }
};

class Solution
{
private:
    // Return true if cycle present
    bool dfsUtil(vector<vector<int>> adj, vector<int> &visited, int v, vector<int> &dfsVis)
    {

        stack<int> stk;
        stk.push(v);

        while (!stk.empty())
        {
            int temp = stk.top();
            stk.pop();
            visited[temp] = 1;
            dfsVis[v] = 1;
            for (auto x : adj[v])
            {
                if (!visited[x])
                {
                    stk.push(x);
                }
                else
                {
                    if (dfsVis[x])
                        return true;
                }
            }
            dfsVis[temp] = 0;
        }

        return false;
    }
    bool dfs(int n, vector<vector<int>> adj, vector<int> &visited)
    {
        vector<int> dfsVis(n);

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (dfsUtil(adj, visited, i, dfsVis))
                    return false;
            }
        }
        return true;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> visited(numCourses, 0);
        vector<vector<int>> adj(numCourses);
        for (auto x : prerequisites)
        {
            adj[x[1]].push_back(x[0]);
        }
        return dfs(numCourses, adj, visited);
    }
};