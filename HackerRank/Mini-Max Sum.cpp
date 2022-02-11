// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    long int max=0;
    long int min=1000000001;
    long int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        if(max<arr[i])
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
        sum+=arr[i];
    }
    cout<<sum-max<<" "<<sum-min;



}
