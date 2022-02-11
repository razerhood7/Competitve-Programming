#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,n,count=0,mount=0;
    int s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s==1)
        {
            mount++;
        }
        else if(s==0)
        {
            count++;
        }
    }
    if(mount>=1)
    {
        cout<<"HARD";
    }
    else
        cout<<"EASY";

    return 0;
}
