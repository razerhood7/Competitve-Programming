class Solution {
public:
    int solve(int ind, int buy, int k, vector<int>& prices, int n, vector<vector<vector<int>>>& dp)
    {
        if(k == 0 || ind == n)
            return 0;
        
        if(dp[ind][buy][k] != -1)
            return dp[ind][buy][k];
        
        int profit = 0;
        
        if(buy)
        {
            profit = max(-prices[ind] + solve(ind+1, 0, k, prices, n, dp), 0 + solve(ind+1, 1, k, prices, n, dp));
        }
        else
        {
            profit = max(prices[ind] + solve(ind+1, 1, k-1, prices, n, dp), 0 + solve(ind+1, 0, k, prices, n, dp));
        }
        
        return dp[ind][buy][k] = profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(0, 1, k, prices, n, dp);
    }
};
