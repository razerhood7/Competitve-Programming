#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int i,n,pi;
    cin>>n;
    double sum=0.0;
    for(i=0;i<n;i++)
    {
        cin>>pi;
        sum+=pi;
    }
    sum=sum/n;
    cout<<sum;
    

    return 0;
}
