#include<bits/stdc++.h>
int recur(int n,vector<int>& arr)
{
    if(n==0)
        return 0;
      
    int right=INT_MAX;
    int left=recur(n-1,arr)+abs(arr[n-1]-arr[n]);
    if(n>1)
    	 right=recur(n-2,arr)+abs(arr[n-2]-arr[n]);
    
    return min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    return recur(n-1,heights);
}

