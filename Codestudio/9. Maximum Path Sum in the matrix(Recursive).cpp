#include<bits/stdc++.h>
int solve(int i,int j, int m,vector<vector<int>> matrix)
{
 if(j<0 || j>=m)
        return -1e9;
    if(i==0)
        return matrix[0][j];
    

    
    int up = matrix[i][j] + solve(i-1,j,m,matrix);
    int leftDiagonal = matrix[i][j] + solve(i-1,j-1,m,matrix);
    int rightDiagonal = matrix[i][j] + solve(i-1,j+1,m,matrix);
    
    return  max(up,max(leftDiagonal,rightDiagonal));
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    int maxi = INT_MIN;
    
    for(int j=0;j<m;j++)
    {
        maxi=max(maxi,solve(n-1,j,m,matrix));
    }
    return maxi;
}
