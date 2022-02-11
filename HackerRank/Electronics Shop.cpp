int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */

      int i,j,max=0,sum,m=-1;
      sort(keyboards.begin(),keyboards.end());
      sort(drives.begin(),drives.end());
      for(i=0;i<keyboards.size();i++)
      {
          for(j=0;j<drives.size();j++)
          {
              sum=keyboards[i]+drives[j];
              if(sum<=b)
              {
                  if(sum>max)
                  {
                      max=sum;
                  }
              }
          }
      }
      if(max==0)
      {
          max=-1;
          return max;
      }
      else
         return max;
}
