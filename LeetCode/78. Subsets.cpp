class Solution {
private:
    void solve(int ind, int n, vector<int> &nums, vector<int> & result, vector<vector<int>>& ans)
    {
        ans.push_back(result);
        
        for(int j=ind; j<n; j++)
        {
            result.push_back(nums[j]);
            solve(j+1,n,nums,result,ans);
            result.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> result;
        solve(0,nums.size(),nums,result,ans);
        return ans;
    }
};
