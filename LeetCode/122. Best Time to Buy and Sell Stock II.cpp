class Solution {
public:
    int solve(int ind, vector<int>& prices, int buy, int n, vector<vector<int>>& dp)
    {
        
        int profit=0;
        if(ind == n)
            return 0;
        
        if(dp[ind][buy]!=-1)
            return dp[ind][buy];
        if(buy)
        {
            profit = max(-prices[ind] + solve(ind+1, prices, 0, n, dp), 0 + solve(ind+1, prices, 1, n, dp));
        }
        else
        {
            profit = max(prices[ind] + solve(ind+1, prices, 1, n, dp), 0 + solve(ind+1, prices, 0, n, dp));
        }
        
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return solve(0, prices, 1, n, dp);
    }
    
};
