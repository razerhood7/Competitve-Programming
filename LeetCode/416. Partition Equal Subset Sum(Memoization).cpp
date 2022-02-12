class Solution {
    int solve(vector<int>& nums, int n, int target, vector<vector<int>> &dp)
    {
        if(target==0)
            return true;
        
        if(n==0)
            return (nums[0]==target);
        
        if(dp[n][target]!=-1)
            return dp[n][target];

        bool not_pick, pick=false;
        
        not_pick = solve(nums,n-1, target, dp);
        if(nums[n]<=target)
            pick = solve(nums, n-1, target-nums[n], dp);
        
        return dp[n][target] = pick || not_pick;
    }
public:
    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        if(sum%2!=0)
            return false;
        
        int target=sum/2;
        
        vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
        return solve(nums,nums.size()-1,target,dp);

    }
};
