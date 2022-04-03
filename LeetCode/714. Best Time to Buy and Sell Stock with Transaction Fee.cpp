class Solution {
public:
     int maxans(vector<int> &prices,int fee,int day,bool bought,vector<vector<int>> &dp)
    {
        //basecase 
        if(day>=prices.size())
            return 0;
        
        if(dp[day][bought]!=-1)
            return dp[day][bought];

        int donothing = maxans(prices,fee,day+1,bought,dp);

        int dosomething;

        if(bought)
        {

            dosomething = (prices[day]-fee) + maxans(prices,fee,day+1,false,dp);
        }

        else
        {

            dosomething = -prices[day]+maxans(prices,fee,day+1,true,dp);
        }
        

        return dp[day][bought] = max(donothing,dosomething);
    }
    int maxProfit(vector<int>& prices, int fee) {
        
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));

        return maxans(prices,fee,0,0,dp);
    }
};
