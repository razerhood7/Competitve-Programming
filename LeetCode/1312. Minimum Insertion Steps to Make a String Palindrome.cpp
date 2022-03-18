class Solution {
public:
    int solve(int m, int n, string text1, string text2, vector<vector<int>>dp)
    {
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                    dp[i][j] = 0;
            }
        }

        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(text1[i-1] == text2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }

        return dp[m][n];
    }
    
    int minInsertions(string s) {
        
        int n = s.size();
        string s1 = s;
        reverse(s1.begin(),s1.end());
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return n - solve(n,n,s,s1,dp);
    }
};
