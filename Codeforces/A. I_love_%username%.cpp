#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n,i,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int prev=a[0];
    int temp=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<prev)
        {
            count++;
            prev=a[i];
        }
        else if(a[i]>temp)
        {
            count++;
            temp=a[i];
        }
    }
    cout<<count;
    return 0;
}
