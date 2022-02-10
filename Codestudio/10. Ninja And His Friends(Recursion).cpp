int solve(int i1, int j1, int i2, int j2, int r, int c, vector<vector<int>> &grid)
{
    if(j1<0 || j2<0 || j1>c || j2>c)
        return -1e8;
    if(i1==r-1)
    {
        if(j1==j2)
            return grid[i1][j1];
        else
            return grid[i1][j1]+grid[i2][j2];
    }
    
    int maxi=-1e8;
    
    for(int i=-1;i<=+1;i++)
    {
        for(int j=-1;j<=+1;j++)
        {
            int value=0;
            if(j1==j2)
                value=grid[i1][j1];
            else
                value=grid[i1][j1]+grid[i2][j2];
            
            value+=solve(i1+1,j1+i,i2+1,j2+j, r, c, grid);
            maxi=max(maxi,value);
        }
    }
    return maxi;
}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    return solve(0,0,0,c-1,r,c,grid);
}
