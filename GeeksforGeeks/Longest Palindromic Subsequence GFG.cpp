class Solution{
    
  public:
  
    static int lcs(int m,int n, string A,string B)
    {
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
            }
        }
        
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(A[i-1]==B[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
    
    int longestPalinSubseq(string A) {
        //code here
        string B= string(A.rbegin(),A.rend());
        
        int m=A.size();
        int n=B.size();
        return lcs(m,n,A,B);
    }
};
