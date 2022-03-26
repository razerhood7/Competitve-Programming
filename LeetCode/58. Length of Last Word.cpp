class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<int> ans;
        int count = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
                count=0;
            else
            {
                count++;
                ans.push_back(count);
            }
        }
        return ans[ans.size()-1];
    }
};
