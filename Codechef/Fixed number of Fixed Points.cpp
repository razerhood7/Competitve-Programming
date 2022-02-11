#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        if(k==n-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                if(i<=k)
                {
                    cout<<i<<" ";
                }
                else if(i>k&&i<=n-1)
                {
                    cout<<i+1<<" ";
                }
                else if(i>n-1)
                {
                    cout<<k+1<<endl;
                }
            }
        }
    }

    return 0;
}
