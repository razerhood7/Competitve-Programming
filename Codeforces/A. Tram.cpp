#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,p=0,max=0,a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        p=b-a+p;
        if(max<p)
        {
            max=p;
        }
    }
    cout<<max;

    return 0;
}
