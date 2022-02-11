#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        
        int ans=x/2;
        
        if(ans>y)
            cout<<y<<endl;
        else
            cout<<ans<<endl;
    }

    return 0;
}
