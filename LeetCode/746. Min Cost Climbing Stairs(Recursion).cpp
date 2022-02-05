class Solution {
private:
    int solve(int ind,vector<int>& cost)
    {
        if(ind<0)
            return 0;
        if(ind==0 ||ind==1)
            return cost[ind];
        
        int left=solve(ind-1,cost)+cost[ind];
        
        int leftmost=solve(ind-2,cost)+cost[ind];
        
        return min(left,leftmost);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        return min(solve(n-1,cost),solve(n-2,cost));
    }
};
