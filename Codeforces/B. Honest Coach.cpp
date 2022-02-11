#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       int sum=0;
       vector<int> d;
       for(i=1;i<n;i++)
       {
           sum=a[i]-a[i-1];
           d.push_back(sum);
       }
       
       sort(d.begin(),d.end());
       cout<<d[0]<<endl;
    }

    return 0;
}
