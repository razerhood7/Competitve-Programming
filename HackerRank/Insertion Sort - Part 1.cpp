#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'insertionSort1' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */

void insertionSort1(int n, vector<int> arr) {
   int i,key,j;
   for(i=1;i<=n-1;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            for(i=0;i<n;i++)
              {
                  cout<<arr[i]<<" ";
              }
              cout<<endl;
        }
        
        arr[j+1]=key;
    }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
}

