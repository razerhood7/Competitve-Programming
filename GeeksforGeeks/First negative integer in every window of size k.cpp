vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
         
         vector<long long> result;
         queue<long long> store;
         
         int i=0,j=0;
         while(j < N)
         {
             if(A[j]<0)
             store.push(A[j]);
             
             if(j-i+1 < K)
             {
                 j++;
             }
             else if(j-i+1 == K)
             {
                 if(store.size()==0)
                 {
                        result.push_back(0);
                 }
                 else
                 {
                     long long temp = store.front();
                     result.push_back(temp);
                     if(A[i] == store.front()){
                        store.pop();
                     }
                 }
                 
                 j++;
                 i++;
             }
         }
         return result;
 }
