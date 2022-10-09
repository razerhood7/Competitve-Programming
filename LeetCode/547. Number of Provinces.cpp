class Solution {
public:
    void bfs(int node, vector<int> adj[], vector<int> &vis)
    {
        vis[node]=1;
        queue<int> queue;
        queue.push(node);
        
        while(!queue.empty()){
            int temp = queue.front();
            queue.pop();
            for(auto it: adj[temp]){
                if(!vis[it]){
                    vis[it]=1;
                    queue.push(it);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        int m = isConnected[0].size();
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        int count = 0;
        vector<int>vis(n,0);
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                bfs(i,adj,vis);
            }
        }
        return count;
    }
};
