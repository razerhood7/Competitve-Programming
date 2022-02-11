#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        int maxi=1,sum=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                sum++;
                maxi=max(maxi,sum);
            }
            else 
             sum=1;
        }
        
        if(maxi==n)
            cout<<"0"<<endl;
        else if(maxi<=1 && n>=2)
            cout<<"-1"<<endl;
        else
            cout<<(n-maxi)+1<<endl;
    }

    return 0;
}
