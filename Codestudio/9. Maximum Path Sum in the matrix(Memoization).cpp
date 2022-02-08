#include<bits/stdc++.h>
int solve(int i,int j, int m,vector<vector<int>> &matrix,vector<vector<int>> &dp)
{
 if(j<0 || j>=m)
        return -1e9;
    if(i==0)
        return matrix[0][j];
    if(dp[i][j]!=-1)
        return dp[i][j];
    int up = matrix[i][j] + solve(i-1,j,m,matrix,dp);
    int leftDiagonal = matrix[i][j] + solve(i-1,j-1,m,matrix,dp);
    int rightDiagonal = matrix[i][j] + solve(i-1,j+1,m,matrix,dp);
    
    return dp[i][j] = max(up,max(leftDiagonal,rightDiagonal));
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    int maxi = INT_MIN;
    
    vector<vector<int>> dp(n,vector<int>(m,-1));
    for(int j=0;j<m;j++)
    {
        maxi=max(maxi,solve(n-1,j,m,matrix,dp));
    }
    return maxi;
}
