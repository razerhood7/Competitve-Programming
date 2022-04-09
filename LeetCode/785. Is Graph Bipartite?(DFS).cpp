class Solution {
public:
    bool solve(int i, vector<vector<int>>& graph, vector<int>& col)
    {
        if(col[i] == -1)
            col[i] = 1;
        
        for(auto it: graph[i])
        {
            if(col[it] == -1)
            {
                 col[it] = 1 - col[i];
                if(!solve(it, graph, col))
                    return false;
            }
            else if(col[it] == col[i])
                return false;   
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
