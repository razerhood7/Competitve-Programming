class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n==1)
            return nums[0];
        
        int store=-1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1])
            {
                    store=nums[i];
                    break;
            }
            else
                store=-1;

        }
        
        if(store==-1)
            return nums[0];
        else
            return store;
    }
};
