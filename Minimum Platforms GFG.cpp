class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
        sort(dep,dep+n);
        
    	int i=1,j=0,sum=1,maxi=1;
    	while(i<n && j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        sum++;
    	        i++;
    	    }
    	    else
    	    {
    	        sum--;
    	        j++;
    	    }
    	    maxi=max(sum,maxi);
    	}
        
        return maxi;
        
    }
};
