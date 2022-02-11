#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n,i,temp,count=1,max=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    temp=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>=temp)
        {
            count++;
            temp=a[i];
        }
        else 
        {
            if(count>max){
                max=count;
            }
            count=1;
            temp=a[i];
        }
        //if(a[n]>=a[n-1])
        {
         //   count++;
        }
    }
    if(count>max)
        max=count;
    cout<<max;
    return 0;
}
