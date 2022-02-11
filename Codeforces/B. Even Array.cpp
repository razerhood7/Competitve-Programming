#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
 
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int count=0,mount=0;
        int n;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
 
        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=i%2)
            {
                if(i%2==0){
                count++;
                }
                else
                {
                    mount++;
                }
            }
 
        }
        if(count!=mount)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
    }
}
