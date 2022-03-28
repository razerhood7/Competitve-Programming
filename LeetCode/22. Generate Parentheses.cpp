class Solution {
public:
    void solve(string s, vector<string>&ans, int open, int close)
    {
        if(open == 0 && close == 0)     
        {
            ans.push_back(s);
            return;
        }
        
        if(open > 0)
            solve(s+"(", ans, open-1, close);
        if(open<close)
            solve(s+")", ans, open, close-1);
                  
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve("",ans,n,n);
        return ans;
    }
};
