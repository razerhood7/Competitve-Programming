#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,a,b,c;
    int s[4];
    for(i=0;i<4;i++)
    {
        cin>>s[i];
    }
    sort(s,s+4);
    a=s[3]-s[0];
    b=s[3]-s[1];
    c=s[3]-s[2];
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
