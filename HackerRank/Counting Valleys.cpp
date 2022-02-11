int countingValleys(int steps, string path) {
    int i,alt=0,valley=0;
   for(i=0;i<path.length();i++)
   {
       if(path[i]=='U')
       {
           alt++;
           if(alt==0)
           {
               valley++;
           }
       }
       else {
       alt--;
       }
   }
   
   return valley;
}
