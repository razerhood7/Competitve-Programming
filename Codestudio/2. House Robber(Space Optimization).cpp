long long int solve(vector<int> & arr)
{
    long long int prev=arr[0];
    long long int prev2=0;
    
    for(int i=1;i<arr.size();i++)
    {
        long long int take=arr[i];
        if(i>1)
            take+=prev2;
        long long int nottake=prev;
        
        long long int cur=max(take,nottake);
        prev2=prev;
        prev=cur;
    }
    return prev;
}

long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    int n=valueInHouse.size();
    vector<int> arr1;
    vector<int> arr2;
    
    for(int i=0; i<n; i++){
        
        if(i!=0) arr1.push_back(valueInHouse[i]);
        if(i!=n-1) arr2.push_back(valueInHouse[i]);
    }
    
    long long int ans1 = solve(arr1);
    long long int ans2 = solve(arr2);
    
    return max(ans1,ans2);
}
