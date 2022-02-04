class Solution {
private:
    int lcs(string& s,int x,string& t,int y)
    {
        if(x==0||y==0)
            return 0;
        
        if(s[x-1]==t[y-1])
            return 1+lcs(s,x-1,t,y-1);
        else
            return max(lcs(s,x-1,t,y),lcs(s,x,t,y-1));
    }
public:
    bool isSubsequence(string s, string t) {
        int x=s.size();
        int y=t.size();
        
        int ans=lcs(s,x,t,y);
        if(ans==x)
            return true;
        else
            return false;
    }
};
