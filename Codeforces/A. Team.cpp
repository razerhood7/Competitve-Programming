#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p,v,t,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        cin>>v;
        cin>>t;
        if((p==1 && t==1) || (p==1 && v==1) || (v==1 && t==1))
        {
            sum++;
        }
        
    }
    cout<<sum;
    return 0;
}
