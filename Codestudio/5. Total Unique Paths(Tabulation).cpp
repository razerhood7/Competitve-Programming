#include<bits/stdc++.h>
int solve(int m,int n,vector<vector<int> > & dp)
{
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=1;
        }
    }
    
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            int up=dp[i-1][j];
        	int left=dp[i][j-1];
     		dp[i][j]=up+left;
        }
    }
    return dp[m][n];
}

int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int> > dp(m,vector<int>(n,-1));
    return solve(m-1,n-1,dp);
}
