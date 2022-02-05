int recurr(int n,vector<int>& nums)
{   
    if(n<0)
        return 0;
    
    int left=recurr(n-2,nums)+nums[n];
    int right=recurr(n-1,nums);
    
    return max(left,right);
}

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=nums.size();
    return recurr(n-1,nums);
}
