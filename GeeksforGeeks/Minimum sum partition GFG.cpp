bool dp[1000][1000];
    int solve(int arr[],int n,long long sum){
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    if(n==1)return arr[0];
	    long long range=0;
	    for(int i=0;i<n;i++)range+=arr[i];
	    
	    for(int i=0;i<n+1;i++){
	        for(int j=0;j<range/2+1;j++){
	            if(i==0)dp[i][j]=false;
	            if(j==0)dp[i][j]=true;
	        }
	    }
	    solve(arr,n,range/2);
	   long long minm=INT_MAX;
	    
	    for(int i=0;i<range/2+1;i++){
	        
	     if(dp[n][i]==true){
	         minm=min(minm,range-2*i);
	     }
	    }
	    return minm;
