#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,res;
        cin>>x>>y;
        if(x%2==0 && y%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(x%2==1 && y%2==1)
        {
            cout<<"YES"<<endl;
        }
        else if(x%2==-1 && y%2==-1)
        {
            cout<<"YES"<<endl;
        }
                else if(x%2==1 && y%2==-1)
        {
            cout<<"YES"<<endl;
        }
                else if(x%2==-1 && y%2==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

