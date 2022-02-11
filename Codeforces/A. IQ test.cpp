#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[101],i,j,n,count=0,mount=0,index;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0){
                count++;
            }
            else{
                mount++;
            }
        }

    if(count>mount)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                index=i;
            }
        }
    }
    else if(mount>count)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                index=i;
            }
        }
    }
    cout<<index+1;
    return 0;
}
