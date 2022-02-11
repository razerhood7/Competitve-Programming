#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n,m,i,j,flag=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(flag==0)
            {
                for(j=0;j<m-1;j++)
                {
                    cout<<".";
                }
                cout<<"#";
                flag=1;
                cout<<endl;
            }
            else
            {
                cout<<"#";
                for(j=0;j<m-1;j++)
                {
                    cout<<".";
                }
                flag=0;
                cout<<endl;
            }
        }
    }

    return 0;
}
