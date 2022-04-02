class Solution {
public:
    int solve(string &s, string &b, int n, int m, vector<vector<int>>& dp)
    {
        if(n==0 || m == 0)
            return 0;
        
        if(dp[n][m]!=-1)
            return dp[n][m];
        
        if(s[n-1] == b[m-1])
            return dp[n][m] = 1 + solve(s, b, n-1, m-1, dp);
        else
            return dp[n][m] = max(solve(s, b, n-1, m, dp),solve(s, b, n, m-1, dp));
        
    }
    bool validPalindrome(string s) {
        
        string b;
        b=s;
        reverse(b.begin(),b.end());
        int n = s.size();
        
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        int ans = solve(s, b, n, n, dp);
        cout<< ans;
        if(n-ans >1)
            return false;
        else 
            return true;
        
    }
};
