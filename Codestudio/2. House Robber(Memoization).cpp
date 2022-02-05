int solve(int n, vector<int>& temp, vector<int>& dp)
{
    if(n==0)
        return temp[n];
    if(n<0)
        return 0;


    int left=solve(n-2,temp,dp)+temp[n];
    int right=solve(n-1,temp,dp);
    
    return dp[n]=max(left,right);
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
    vector<int> dp(size1,-1);
    return max(solve(size1-1,temp1,dp),solve(size1-1,temp2,dp)); 
}
