class Solution {
private:
    int solve(bool chance,int i,int n,vector<int>&nums)
    {
        if(i>n)
            return 0;
        if(i==n)
            return nums[i];
        
        if(chance==true)
        {
            return max(nums[i]+solve(0,i+1,n,nums),nums[n]+solve(0,i,n-1,nums));
        }
        else
            return min(-nums[i]+solve(1,i+1,n,nums),-nums[n]+solve(1,i,n-1,nums));
    }
public:
    bool PredictTheWinner(vector<int>& nums) {
        
        bool chance=true;
        
        return solve(chance,0,nums.size()-1,nums)>=0;
    }
};
