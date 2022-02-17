class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
int n = nums.size();
        if(n == 0) return -1;
        if(n == 1) return 0;
       
        int l=0,h=n-1,m;
        while(l <= h)
        {
            m = l + (h-l)/2;
            if(m == 0)
            {
                if(nums[m+1] < nums[m]) return m;
                else return m+1;
            }
            else if(m == n-1)
            {
                if(nums[m-1] < nums[m]) return m;
                else return m-1;
            }
            int prev = nums[m-1], nxt = nums[m+1];
            if(nums[m] > prev && nums[m] > nxt) return m;
            else if(nums[m+1] > nums[m]) l=m+1;
            else h=m-1;
        }
        return -1;
    
    }
};
