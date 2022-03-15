class Solution{
public:
    bool isPalindrome(string &str, int i, int j)
    {

        if(i>=j)
            return true;
        
        while(i<j)
        {
            if(str[i] != str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    int solve(string &str, int i, int j, vector<vector<int>> &dp)
    {
        if(i>=j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(isPalindrome(str,i,j))return 0;

        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++){
          int temp=1+solve(str,i,k,dp)+solve(str,k+1,j,dp);
            ans=min(ans,temp);
        }
        return dp[i][j] = ans;
    }
    
    int palindromicPartition(string str)
    {
        // code here
        int n = str.length();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(str,0,n-1,dp);
    }
};
