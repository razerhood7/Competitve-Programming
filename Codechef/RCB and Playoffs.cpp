#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,res;
        cin>>x>>y>>z;
        res=y-x;
        if(res<=z*2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
