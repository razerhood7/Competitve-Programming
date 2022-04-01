class Solution {
public:
    bool solve(string &p, string &s, int i, int j,vector<vector<int>> &dp)
    {
        if(i<0 && j<0)
            return true;
        if(i<0 && j>=0)
            return false;
        if(i>=0 && j<0)
        {
            for(int ii=0; ii<=i; ii++)
            {
                if(p[ii]!='*')
                    return false;
            }
            return true;   
        }
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(p[i]==s[j] || p[i]=='?')
            return dp[i][j] = solve(p,s,i-1,j-1,dp);
        if(p[i]=='*')
            return dp[i][j] = solve(p,s,i-1,j,dp) || solve(p,s,i,j-1,dp);
        
        return dp[i][j] = false;
    }
    bool isMatch(string s, string p) {
        
        int n = s.size();
        int m = p.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(p,s,m-1,n-1,dp);
    }
};
