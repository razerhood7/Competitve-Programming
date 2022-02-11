#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,n,count=0,mount=0;
    int s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            {
               cout<<"I hate "; 
            }
        else 
            {
                cout<<"I love ";
            }
        if(i!=n-1)
          {
            cout<<"that ";
          }
        else
          {
              cout<<"it ";
          }
    }

    return 0;
}
