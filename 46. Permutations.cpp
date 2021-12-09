class Solution {
    
public:
    void perm(vector<vector<int>> &ans,vector<int> &ds,vector<int>&nums ,int freq[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                perm(ans,ds,nums,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[n];
        for(int i=0;i<n;i++)
            freq[i]=0;
        perm(ans,ds,nums,freq);
        return ans;
    }
};
