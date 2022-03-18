class Solution {
public:
    int solveLCS(int m, int n, string s, string s1,vector<vector<int>> &dp)
    {
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
                if(s[i-1] == s1[j-1])
                     dp[i][j] = 1 + dp[i-1][j-1];
                else 
                     dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
    
    int longestPalindromeSubseq(string s) {
        
        int n = s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        string s1= string(s.rbegin(),s.rend()); 
        return solveLCS(n,n,s,s1,dp);
    }
};
