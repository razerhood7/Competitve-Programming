int introTutorial(int V, vector<int> arr) {
    int i,temp;
    int m= arr.size();
    for(i=0;i<m;i++)
    {
        if(arr[i]==V)
        {
            temp=i;
        }
    }
   return temp;
}
