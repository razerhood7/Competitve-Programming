class Solution {
    int solve(int i, int j, string &word1, string &word2, vector<vector<int>> &dp)
    {
        if(i<0)
            return j+1;
        if(j<0)
            return i+1;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(word1[i] == word2[j])
            return dp[i][j] = solve(i-1,j-1,word1,word2,dp);
        else
            return dp[i][j] = 1+min(solve(i-1,j-1,word1,word2,dp), min(solve(i-1,j,word1,word2,dp), solve(i,j-1,word1,word2,dp)));
    }
public:
    int minDistance(string word1, string word2) {
        
        int size1 = word1.size();
        int size2 = word2.size();
        vector<vector<int>> dp(size1,vector<int>(size2,-1));
        return solve(size1-1,size2-1,word1,word2,dp);
    }
};
