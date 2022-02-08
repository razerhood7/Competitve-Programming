#include<bits/stdc++.h>

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    
    vector<vector<int>> dp(n,vector<int>(m,-1));
    
	for(int j=0;j<m;j++)
    {
        dp[0][j]=matrix[0][j];
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int up=matrix[i][j]+dp[i-1][j];
            
            int upl= matrix[i][j];
            if(j-1>=0)upl+=dp[i-1][j-1];
            else
                upl+=-1e9;
            
            int upr=matrix[i][j];
            if(j+1<m)upr+=dp[i-1][j+1];
            else
                upr+=-1e9;
            
            dp[i][j]=max(up,max(upl,upr));
            
        }
    }
    
    int maxi=INT_MIN;
    
    for(int j=0;j<m;j++)
    {
        maxi = max(maxi,dp[n-1][j]);
    }
    
    return maxi;
}
