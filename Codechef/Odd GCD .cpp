#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        int ans=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        for(i=0;i<n;i++)
        {
            
            int count=0;
            int temp=arr[i];
            while(temp%2==0)
            {
                temp=temp/2;
                count++;
            }
            
            if(i==0 || count<ans)
            {
                ans=count;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
