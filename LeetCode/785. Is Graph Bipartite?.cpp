class Solution {
public:
    bool solve(int i, vector<vector<int>>& graph, vector<int>& col)
    {
        col[i] = 1;
        queue<int> q;
        q.push(i);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            for(auto it: graph[node])
            {
                if(col[it] == -1)
                {
                    col[it] = 1-col[node];
                    q.push(it);
                }
                else if(col[it]==col[node])
                {
                        return false;
                }
            }
        }
        
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int> col(v,-1);
        for(int i=0; i<v; i++)
        {
            if(col[i]==-1)
            {
                if(!solve(i, graph, col))
                    return false;
            }
            
        }
        return true;
    }
};
