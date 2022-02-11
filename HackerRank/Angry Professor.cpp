string angryProfessor(int k, vector<int> a) {
    int st=0,mt=0;
    int n=a.size();
    for(long int i=0;i<n;i++)
    {
      if(a[i]<=0)
      {
         st++; 
      }
      else if(a[i]>0)
      {
          mt++;
      }  
      
    }
 if(st>=k)
      {
          return "NO";
      }
      else if(st<k)
      {
          return "YES";
      }
      return "";
}
