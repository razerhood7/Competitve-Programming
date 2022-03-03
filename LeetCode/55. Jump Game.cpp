class Solution {
private:
 bool solve(vector<int>& nums, int n, int idx,vector<int>& dp){
        if(idx==n-1) return true;
        if(idx>=n) return false;
        if(!dp[idx]) return dp[idx];
        for(int i=1;i<=nums[idx];i++){
            if(solve(nums,n,idx+i,dp)) return dp[idx] = true;
        }
        return dp[idx] = false;
    }
    
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp (n+1,-1);
        return solve(nums,n,0,dp);
    }
};
