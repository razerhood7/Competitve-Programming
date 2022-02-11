bool solve(int n, int target, vector<int> &arr)
{
    if(target==0)
        return true;
    
    if(n==0)
        return (arr[0]==target);
    
    bool npick=solve(n-1,target,arr);
    bool pick=false;
    if(arr[n]<=target)
    {
        pick=solve(n-1,target-arr[n],arr);
    }
    
    return pick || npick;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.

    return solve(n-1,k,arr);
}
