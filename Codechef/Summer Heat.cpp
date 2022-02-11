#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int t,a,b,c,d,i,sum1=0,sum2=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>a;
       cin>>b;
       cin>>c;
       cin>>d;
       sum1=c/a;
       sum2=d/b;
       cout<<sum1+sum2<<endl;
    }
    
    return 0;
}
