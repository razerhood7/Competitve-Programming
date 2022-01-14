int printlongestsubsequence(string a,string b, int n, int m)
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
    
    int mx=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
                mx=max(mx,dp[i][j]);
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        string s="";
        int i=n,j=m;
        while(i>0 && j>0)
        {
            if(a[i-1]==b[j-1])
            {
                s.push_back(a[i-1]);
            }
            else
            {
                if(dp[i][j-1]>dp[i-1][j])
                {
                    j--;
                }
                else
                {
                    i--;
                }
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
}
