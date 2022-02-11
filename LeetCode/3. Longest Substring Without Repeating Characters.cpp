class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(s.size()==0)
            return 0;
        vector<int> count(300,0);
        int i=0,j=0;
        count[s[0]]++;
        int ans=1;
        while(j!=n-1)
        {
            if(count[s[j+1]]==0)
            {
                j++;
                count[s[j]]=1;
                ans=max(ans,j-i+1);
            }
            else
            {
                count[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};
