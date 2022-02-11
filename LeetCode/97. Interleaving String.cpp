class Solution {
    bool solve(string &s1, int i1, int n1, string &s2, int i2, int n2, string &s3, int i3, int n3,vector<vector<int>>& dp)
    {
        if(i1 == n1 && i2 == n2 && i3 == n3) return true; 
        
        if(dp[i1][i2]!=-1)
            return dp[i1][i2];
       
        else return dp[i1][i2]=((i1 < n1 && s1[i1] == s3[i3] && solve(s1, i1 + 1, n1, s2, i2, n2, s3, i3 + 1, n3,dp)) || (i2 < n2 && s2[i2] == s3[i3] && solve(s1, i1, n1, s2, i2 + 1, n2, s3, i3 + 1, n3,dp)));
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        
        int n1 = s1.size(), n2 = s2.size(), n3 = s3.size();
        if(n1 + n2 != n3) return false;
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
        return solve(s1, 0, n1, s2, 0, n2, s3, 0, n3,dp);
    }
};
