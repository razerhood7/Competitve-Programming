class Solution {
    void solve(int i, int n, int k, vector<vector<int>> &ans, vector<int> combs)
    {
        if(combs.size()==k)
        {
            ans.push_back(combs);
            return;
        }
        
        for(int j=i;j<n+1;j++)
        {
            combs.push_back(j);
            solve(j+1, n, k, ans, combs);
            combs.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> combs;
        solve(1, n, k, ans, combs);
        return ans;
    }
};
