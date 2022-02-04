int recurr(int n,vector<int>& nums,vector<int>& dp)
{
    if(n<0)
        return 0;
    if(n==0)
        return nums[0];
    if(dp[n]!=-1)
        return dp[n];
    
    int left=recurr(n-2,nums,dp)+nums[n];
    int right=recurr(n-1,nums,dp);
    
    return dp[n] = max(left,right);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    vector<int> dp(n,-1);
    return recurr(n-1,nums,dp);
    
}
