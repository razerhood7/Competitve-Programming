class Solution {
public:
    long long int helper(int ind, int lastind, vector<int> &nums, vector<int>& dp)
    {
        if(ind>=lastind)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        long long int tmp = INT_MAX;
        
        for(int i=1;i<=nums[ind];i++)
        {
            tmp=min(tmp,1+helper(ind+i, lastind, nums,dp));
        }
        return dp[ind] = tmp;
    }
    
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>dp(n,-1);
        return helper(0, n-1, nums, dp);
    }
};
