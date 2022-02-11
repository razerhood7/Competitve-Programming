#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,n,p,q,f=0,j;
    cin>>n;
    cin>>p;
    int a[p];
    for(i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    int b[q];
    for(i=0;i<q;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<p;j++)
        {
            if(a[j]==i)
            {
                f=1;
                break;
            }
            else
            f=0;
        }
        if(f==0)
        {
            for(j=0;j<q;j++)
            {
                if(b[j]==i)
                {
                    f=1;
                    break;
                }
                else 
                f=0;
            }
        }
        if(f==0)
        break;
    }
    if(f==0)
    {
        cout<<"Oh, my keyboard!";
    }
    else
    {
        cout<<"I become the guy.";
    }
    

    return 0;
}
