class Solution{
public:
    
    bool sumbytwo(int arr[],int sumi,int N)
    {
        
        int dp[N+1][sumi+1];
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=sumi+1;j++)
            {
                if(i==0)
                    dp[i][j]=false;
                if(j==0)
                    dp[i][j]=true;
                    
            }
        }
        
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=sumi;j++)
            {
                if(arr[i-1]<=j)
                    dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[N][sumi];
    }
    
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        
        if(sum%2!=0)
            return false;
        
        else 
        {
            int sumi=sum/2;
            sumbytwo(arr,sumi,N);
        }
    }
};
