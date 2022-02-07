#include<bits/stdc++.h>

int solve(int n,int m,vector<vector<int>> &grid)
{
    if(n==0 && m==0)
        return grid[n][m];
    if(n<0 || m<0)
        return 1e9;
    
    int up=grid[n][m]+solve(n-1,m,grid);
    int left=grid[n][m]+solve(n,m-1,grid);
    
    return min(up,left);
}

int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int n,m;
    n=grid.size();
    m=grid[0].size();
    solve(n-1,m-1,grid);
}
