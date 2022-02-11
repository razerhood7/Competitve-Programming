#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n,i,count=0,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]+k<=5)
        {
            count++;
        }
    }
    
    cout<<count/3;
    
    
    
    return 0;
}
