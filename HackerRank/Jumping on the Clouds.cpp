int jumpingOnClouds(vector<int> c) {
    int i,count=0,mount=0;
    int n=c.size();
    for(i=0;i<n-1;i++)
        {
            if(c[i]==c[i+2])
            {
                count++;
                i++;
            }
            else 
            {
                mount++;
            }
        }
       return count+mount;

}
