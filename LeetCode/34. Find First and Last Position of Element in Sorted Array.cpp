class Solution {
private:
    int firstpos(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size()-1;
        int mid;
        int res = -1;
        
        while(start<=end)
        {
            mid = start + (end-start)/2;
            
            if(nums[mid] == target)
            {
                res = mid;
                end = mid-1;
            }
                          
            else if(nums[mid] < target)
                start = mid+1;
            
            else if(nums[mid] > target)
                end = mid-1;
            
        }
        
        return res;
    }
    
    int lastpos(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size()-1;
        int mid;
        int res = -1;
        
        while(start<=end)
        {
            mid = start + (end-start)/2;
            
            if(nums[mid] == target)
            {
                res = mid;
                start = mid+1;
            }
                          
            else if(nums[mid] < target)
                start = mid+1;
            
            else if(nums[mid] > target)
                end = mid-1;
            
        }
        
        return res;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        int firstp = firstpos(nums, target);
        int lastp =  lastpos(nums, target);
       
        ans.push_back(firstp);
        ans.push_back(lastp);
        
        return ans;
    }
};
