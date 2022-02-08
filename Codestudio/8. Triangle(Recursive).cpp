int solve(int i, int j, vector<vector<int>>& triangle,int n)
{
    if(i==n-1)
        return triangle[i][j];
    
    int down= triangle[i][j]+solve(i+1,j,triangle,n);
    int diagonal= triangle[i][j]+solve(i+1,j+1,triangle,n);
    
    return min(down,diagonal);
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
    
    return solve(0,0,triangle,n);
}
