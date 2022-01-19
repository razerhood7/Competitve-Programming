class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i=0; 
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]==val)
            {
                if(nums[i]!=nums[j])
                {
                    swap(nums[i],nums[j]);
                }
                else
                {
                    j--;
                }
            }
            else
            {
                i++;
            }
        }
        
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
                count++;
        }
        
        return nums.size()-count;
    }
};
