#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void arrangeOdd(long a[],long n)
{
    int odd=0;
    int ev=1;
    while(true)
    {
        while(ev<n && a[ev]%2==1)
            ev+=2;
        while(odd<n && a[odd]%2==0)
            odd+=2;
        
        if(ev<n && odd<n)
            swap(a[ev],a[odd]);
        else 
            break;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        arrangeOdd(a,n);
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(a[i]+i+1)%2;
        }
        cout<<sum<<endl;
    }

    return 0;
}
