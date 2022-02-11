#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,x,y,z,m;
        int res1,res2;
        cin>>d>>x>>y>>z;
        m=7-d;
        res1=7*x;
        res2=(d*y)+(m*z);

        if(res1>=res2)
        {
            cout<<res1<<endl;
        }
        else
        {
            cout<<res2<<endl;
        }
    }
}
