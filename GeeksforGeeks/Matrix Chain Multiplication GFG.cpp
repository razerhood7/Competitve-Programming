class Solution{
public:
    int  dp[1001][1001];
     int solve(int arr[],int i,int j)
    {
        if(i>=j)
            return 0;
            
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int mn=INT_MAX;
        int temp;
        for(int k=i;k<=j-1;k++)
        {
            mn=min(mn,solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]);

        }
        
        dp[i][j]=mn;
        return mn;
    }
    
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(arr,1,N-1);
        
    }
};
