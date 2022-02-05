#include<bits/stdc++.h>
int recur(int n,vector<int>& arr,vector<int> &dp)
{
    if(n==0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int right=INT_MAX;
    int left=recur(n-1,arr,dp)+abs(arr[n-1]-arr[n]);
    if(n>1)
    	 right=recur(n-2,arr,dp)+abs(arr[n-2]-arr[n]);
    
    return dp[n]=min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n,-1);
    return recur(n-1,heights,dp);
    
}

