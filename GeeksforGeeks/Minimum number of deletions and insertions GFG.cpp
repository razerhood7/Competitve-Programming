class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    
	    int str1len=str1.size();
	    int str2len=str2.size();
	    
	    int dp[str1len+1][str2len+1];
	    for(int i=0;i<str1len+1;i++)
	    {
	        for(int j=0;j<str2len+1;j++)
	        {
	            if(i==0 || j==0)
	                dp[i][j]=0;
	        }
	    }
	    
	    for(int i=1;i<str1len+1;i++)
	    {
	        for(int j=1;j<str2len+1;j++)
	        {
	            if(str1[i-1]==str2[j-1])
	                dp[i][j]=1+dp[i-1][j-1];
	            
	            else
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            
	        }
	    }
	    int len=str1len+str2len;
	    int lcs=2*dp[str1len][str2len];
	    return len-lcs;
	} 
};
