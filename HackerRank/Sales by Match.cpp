// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
sort(ar.begin(),ar.end());
int count=1,i,prev=ar[0],pair=0;
for(i=1;i<n;i++)
{
    if(ar[i]==prev)
    {
        count++;
        prev=ar[i];
    }
    else
    {
        pair+=(count/2);
        count=1;
        prev=ar[i];
    }
}
pair+=(count/2);
return pair;
}
