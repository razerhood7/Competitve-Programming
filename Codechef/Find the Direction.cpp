#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
    x=x%4;
          if(x==0)
          {
            cout<<"North"<<endl;
          }
          else if(x==1)
          {
            cout<<"East"<<endl;  
          }
          else if(x==2)
          {
            cout<<"South"<<endl;  
          }
          else if(x==3)
          {
            cout<<"West"<<endl; 
          }
    }
    return 0;
}
