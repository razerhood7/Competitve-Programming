#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t,g1,s1,b1,g2,s2,b2,sum1,sum2;
    cin>>t;
    while(t--)
    {
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        sum1=g1+s1+b1;
        sum2=g2+s2+b2;
        
        if(sum1>sum2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
        
    }

    return 0;
}
