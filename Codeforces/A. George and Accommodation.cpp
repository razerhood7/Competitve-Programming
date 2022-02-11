#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n,i,p,q,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        cin>>q;
        if((q-p)>=2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
