class Solution{
  public:
  
    static int lcs(int m,int n,string str, string str1)
    {
        int dp[m+1][n+1];
        
        for(int i=0; i<m+1;i++)
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
                if(str[i-1]==str1[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
        return dp[m][n];
    }
    
    int countMin(string str){
    //complete the function here
    
        int m=str.size();
        string str1= string(str.rbegin(),str.rend());
        int n=str1.size();
        return n-lcs(m,n,str,str1);
    
    }
};
