class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mx=INT_MIN;
        int minelement=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minelement=min(minelement,prices[i]);
            mx=max(mx,prices[i]-minelement);
        }
        
        if(mx<0)
            return 0;
        else
            return mx;
    }
};c
