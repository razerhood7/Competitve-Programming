class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        int start = 0, end = n-1;
        int mid, prev, next,ans;
        
        while(start <= end)
        {
            mid = start + (end-start)/2;
            prev = (mid-1+n) % n;
            next = (mid+1) % n;
            
            if(nums[prev]>=nums[mid] && nums[mid]<=nums[next])
                return ans = nums[mid];
            
            else if(nums[start] <=nums[mid] && nums[end] <= nums[mid])
                start = mid+1;
            else 
                end = mid-1;
        }
        
        return ans;
    }
};
