int solve(int ind, vector<int>& nums,vector<int>& dp)
{
    dp[0]=nums[0];
    int neg=0;
    
    for(int i=1;i<ind;i++)
    {
        int take=nums[i];
        if(i>1)
            take+=dp[i-2];
        int nottake=dp[i-1];
        
        dp[i]=max(take,nottake);
    }
    
    return dp[ind-1];
}

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    vector<int> dp(n,-1);
    return solve(n,nums,dp);
    
}
