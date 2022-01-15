static int lcs(int n,int m, string str, string str1)
{
    int dp[n+1][m+1];
    
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(str[i-1]==str1[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    
    return dp[n][m];
}

int minDeletions(string str, int n) { 
    //complete the function here 
    
    string str1=string(str.rbegin(),str.rend());
    
    int m=str1.size();
    
    return n-lcs(n,m,str,str1);
} 
