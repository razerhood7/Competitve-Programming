#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int i,n,k,count=0,t=240,sum=0,f;
    cin>>n;
    cin>>k;
    sum=t-k;
    for(i=1;i<=n;i++)
    {
        f=i*5;
        if(k+f<=t)
        {
            count++;
            k+=f;
        }
        else
        {
            break;
        }
    }
    cout<<count;
    return 0;
}
