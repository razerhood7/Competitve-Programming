class Solution {
private:
    int solve(int ind,vector<int>& cost,vector<int>& dp)
    {
        if(dp[ind]!=-1)
            return dp[ind];
        
        if(ind<0)
            return 0;
        
        if(ind==0 ||ind==1)
            return dp[ind]=cost[ind];
        
        int left=solve(ind-1,cost,dp)+cost[ind];
        
        int leftmost=solve(ind-2,cost,dp)+cost[ind];
        
        return dp[ind]=min(left,leftmost);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        return min(solve(n-1,cost,dp),solve(n-2,cost,dp));
    }
};
