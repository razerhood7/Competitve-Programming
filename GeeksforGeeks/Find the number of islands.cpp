class Solution {
  public:
    
    void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid, int rsize, int csize)
    {
        vis[row][col] = 1;
        queue<pair<int, int>> que;
        que.push({row,col});
        while(!que.empty())
        {
             row = que.front().first;
             col = que.front().second;
            que.pop();
            for(int delrow=-1; delrow<=1; delrow++)
            {
                for(int delcol=-1; delcol<=1; delcol++)
                {
                    int nrow = delrow+row;
                    int ncol = delcol+col;
                    
                    if(nrow>=0 && nrow<rsize && ncol<csize && ncol>=0 && grid[nrow][ncol] == '1' 
                    && !vis[nrow][ncol])
                    {
                        vis[nrow][ncol] =1;
                        que.push({nrow,ncol});
                    }
                }
            }
        }
    }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j] == '1'){
                    count++;
                    bfs(i,j,vis,grid,n,m);
                }
            }
        }
        return count;
    }
};
