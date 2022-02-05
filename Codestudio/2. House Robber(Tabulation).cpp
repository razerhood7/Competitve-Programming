int solve(int n, vector<int>& temp, int &dp)
{
	dp[0]=temp[0];
    int neg=0;
    int nottake,take;
    for(int i=1;i<n;i++)
    {
        take=temp[n];
        if(i>1)
            take+=dp[i-2];
        
        nottake=dp[i-1];
        
        dp[i]=max(take,nottake);
    }
    
    return dp[n+1];
}

long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here. 

    vector<int> temp1,temp2;
    int n=valueInHouse.size();

    if(n==1) 
        return valueInHouse[0];
        
    for(int i=0;i<n;i++)
    {
        if(i!=0)
            temp1.push_back(valueInHouse[i]);
        if(i!=n-1)
            temp2.push_back(valueInHouse[i]);
    }
    
    int size1=temp1.size();
    int dp[size1];
    long long int ans1 = solve(size1-1,temp1,dp);
    long long int ans2 = solve(size1-1,temp2,dp);
    
    return max(ans1,ans2);

}
