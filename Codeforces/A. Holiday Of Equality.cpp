#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int i,n,sum=0;
    cin>>n;
    int a[n];
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        sum=sum+a[n-1]-a[i];
    }
    
    cout<<sum;
    return 0;
}
