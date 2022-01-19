
int dp[n+1][m+1];

for(int i=0;i<n+1;i++)
{
    for(int j=0;j<m+1;j++)
    {
	if(i==0 || j==0)
	    dp[i][j]=0;
    }
}

for(int i=1;i<n+1;i++)
{
    for(int j=1;j<m+1;j++)
    {
	if(s1[i-1]==s2[j-1])
	{
	    dp[i][j]=1+dp[i-1][j-1];
	}
	else
	    dp[i][j]=max(dp[i-1][j],dp[i][j-1];
    }
}

int i=n,j=m;
string res="";
while(i>0 && j>0)
{
   if(s1[i-1]==s2[j-1])
   {
	       res.pushback(s1[i-1]);
         i--;
         j--;
   }

   else
     {
	if(dp[i-1][j]>dp[i][j-1])
		i--;
	else
		j--;
     }
}

string ans= s1+s2-res;

return ans;
