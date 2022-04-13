class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int i=0, j=0, sum=0;
        int mini = INT_MAX;
        while(j<nums.size())
        {
            sum = sum + nums[j];
            if(sum<target)
            {
                j++;
            }
            else if(sum >= target)
            {
                while(sum >= target)
                {
                    mini = min(mini, abs(j-i+1));
                    sum = sum-nums[i];
                    i++;
                }
                j++;
            }
        }
        
        if(mini == INT_MAX)
            return 0;
        
        return mini;
    }
};
