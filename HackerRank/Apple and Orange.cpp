// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
       int ac=0,oc=0;
       for(int i=0;i<apples.size();i++)
       {
           apples[i]=apples[i]+a;
           if(apples[i]>=s && apples[i]<=t)
           ac++;
       }
       for(int i =0;i<oranges.size();i++)
       {
           oranges[i]=oranges[i]+b;
           if(oranges[i]<=t && oranges[i]>=s)
           oc++;  
       }
       cout<<ac<<endl;
       cout<<oc;

}
