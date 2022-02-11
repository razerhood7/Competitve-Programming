#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
 
int main()
{
    int t,k,den;
    cin>>t;
    while(t--)
    {
        int n;
        int x;
        cin>>n;
        for(k=2;k<=35;k++)
        {
            den=pow(2,k)-1;
            if(n%den)
                continue;
            x=n/den;
            break;
        }
        
        cout<<x<<endl;
    }
 
    return 0;
}
