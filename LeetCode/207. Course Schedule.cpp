class Solution {
public:
    bool topo(int n, vector<int> adj[])
    {
        vector<int> indegree(n, 0);
        for(int i=0;i<n;i++)
        {
            for(auto it: adj[i])
            {
                indegree[it]++;
            }
        }
        
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        
        int count=0;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            count++;
            for(auto it: adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(count == n)
            return true;
        else 
            return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> adj[numCourses];
        
        for(int i = 0 ; i < prerequisites.size() ; i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        
        return topo(numCourses, adj);
    }
};
