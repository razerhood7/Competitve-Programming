class Solution {
private:
    
    int solve(vector<vector<int>>& triangle, int row, int col, int n, vector<vector<int>>& dp)
    {
        if(row==n)
            return triangle[row][col];
        
        if(dp[row][col]!=-1)
            return dp[row][col];
        
        return dp[row][col] = triangle[row][col]+min(solve(triangle, row+1, col, n, dp),solve(triangle, row+1, col+1, n, dp));
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n=triangle.size();
        int m=n;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(triangle,0,0,n-1,dp);
    }
};
