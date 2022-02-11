// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, vector<int> ar) {
int sum=0,count=0;
int i,j;
for( i=0;i<ar.size();i++)
{
    for(j=i+1;j<ar.size();j++)
    {
        sum=ar[i]+ar[j];
        if(sum%k==0)
      {
        count++;
      }
    }
}
     return count;
}
