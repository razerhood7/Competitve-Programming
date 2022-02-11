class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==0)
            return 0;            
        
        int i,sum=0,maxo=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                sum++;
            }
            else
            {
                sum=0;
            }
            maxo=max(sum,maxo);
        }
        return maxo;
    }
};
