int solve(int n, int m, vector< vector< int> > &mat)
{
    if(n==0 && m==0)
        return 1;
    if(n<0 || m<0 || mat[n][m]==-1)
        return 0;
        
    int up=solve(n-1,m,mat);
    int left=solve(n,m-1,mat);
    
    return up+left;
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    solve(n-1,m-1,mat);
}
